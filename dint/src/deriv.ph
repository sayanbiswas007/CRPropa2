#ifndef __deriv_ph__
#define __deriv_ph__

#ifdef __cplusplus
extern "C" {
#endif

void GetLeptonInfluxFromPhotons (const DiffRate* photonLeptonRate,				const Spectrum* pSpectrumNew, 				Spectrum* pInflux0);
void GetLeptonInfluxFromNucleons (const int neutronDecaySwitch,				 const DiffRate* protonElectronRate,				 const DiffRate* neutronPositronRate,				 const DiffRate* protonPositronRate,				 const DiffRate* neutronElectronRate,				 const DiffRate* neutronDecayElectronRate,				 const Spectrum* pSpectrumNew,				 Spectrum* pInflux0);
void GetLeptonInfluxFromNeutrinos (const double bkgFactor,				  const DiffRate* elNeutElectronRate,				  const DiffRate* muonNeutElectronRate,				  const DiffRate* tauNeutElectronRate,				  const Spectrum* pSpectrumNew,				  Spectrum* pInflux0);
void GetLeptonFluxFromLeptons (const TotalRate* leptonTotalRate,			      const DiffRate* leptonScatRate,			      const DiffRate* leptonExchRate,			      const dCVector* continuousLoss, 			      const dCVector* deltaG,			      const Spectrum* pSpectrumNew, Spectrum* pInflux, 			      Spectrum* pOutflux);
void GetPhotonInfluxFromLeptons (const DiffRate* leptonPhotonRate,				const int synchrotronSwitch,				const DiffRate* syncRate,				const Spectrum* pSpectrumNew, 				Spectrum* pInflux0);
void GetPhotonInfluxFromNucleons (const DiffRate* protonPhotonRate,				 const Spectrum* pSpectrumNew, 				 Spectrum* pInflux0);
void GetPhotonInfluxFromNeutrinos (const double bkgFactor,				  const DiffRate* elNeutPhotonRate,				  const DiffRate* muonNeutPhotonRate,				  const DiffRate* tauNeutPhotonRate,				  const Spectrum* pSpectrumNew,				  Spectrum* pInflux0);
void GetPhotonFluxFromPhotons (const TotalRate* photonTotalRate, 			      Spectrum* pOutflux);
void GetNucleonFluxFromNucleons (const int neutronDecaySwitch,				const TotalRate* protonTotalRate, 				const TotalRate* neutronTotalRate,				const TotalRate* neutronDecayRate,				const DiffRate* protonScatRate,				const DiffRate* neutronProtonRate,				const DiffRate* protonNeutronRate,				const DiffRate* neutronDecayProtonRate,				const dCVector* protonContinuousLoss,				const dCVector* deltaG, 				const Spectrum* pSpectrumNew,				Spectrum* pInflux, Spectrum* pOutflux);
void GetNeutrinoInfluxFromNucleons (const int neutronDecaySwitch,				   const DiffRate* protonMuonNeutrinoRate,				   const DiffRate* neutronAntiMuonNeutrinoRate,				   const DiffRate* neutronMuonNeutrinoRate,				   const DiffRate* protonAntiMuonNeutrinoRate,				   const DiffRate* protonElectronNeutrinoRate,				   const DiffRate* neutronAntiElectronNeutrinoRate,				   const DiffRate* protonAntiElectronNeutrinoRate,				   const DiffRate* neutronDecayElectronRate,				   const Spectrum* pSpectrumNew,				   Spectrum* pInflux0);
void GetNucleonInfluxFromNeutrinos (const double bkgFactor,				   const DiffRate* elNeutProtonRate,				   const DiffRate* muonNeutProtonRate,				   const DiffRate* tauNeutProtonRate,				   const Spectrum* pSpectrumNew, 				   Spectrum* pInflux0);
void GetNeutrinoFluxFromNeutrinos (const double bkgFactor,				  const TotalRate* elNeutTotalRate,				  const TotalRate* muonNeutTotalRate,				  const TotalRate* tauNeutTotalRate,				  const DiffRate* elNeutScatRate,				  const DiffRate* elNeutMuonNeutRate,				  const DiffRate* elNeutTauNeutRate,				  const DiffRate* muonNeutElNeutRate,				  const DiffRate* muonNeutScatRate,				  const DiffRate* muonNeutTauNeutRate,				  const DiffRate* tauNeutElNeutRate,				  const DiffRate* tauNeutMuonNeutRate,				  const DiffRate* tauNeutScatRate,				  const Spectrum* pSpectrumNew,				  Spectrum* pInflux, Spectrum* pOutflux);
void ComputeOutflux (const double bkgFactor, const TotalRate* pRate,		    const PARTICLE parent, Spectrum* pOutflux);
void ComputeInflux (const double bkgFactor, const DiffRate* pRate,		   const PARTICLE parent, const PARTICLE daughter,		   const Spectrum* pSpectrum, Spectrum* pInflux);

#ifdef __cplusplus
}
#endif

#endif

