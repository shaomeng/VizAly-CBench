#ifndef MPAS_DATA_HPP
#define MPAS_DATA_HPP

#include <mpi.h>

#include <data_handler.hpp>




class mpas_data : public data_handler
{
	public:
		mpas_data(const MPI_Comm &comm);

		void read(const std::string &in_name, std::vector<data_field> &data) override;
		void write(const std::string &in_name, const std::string &out_name, const std::vector<data_field> &data) override;

	private:
		const MPI_Comm &comm;
};


#endif // MPAS_DATA_HPP