#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004446F0
// Address: 0x4446f0 - 0x444c90
void sub_004446F0_0x4446f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004446F0_0x4446f0");
#endif

    switch (ctx->pc) {
        case 0x4446f0u: goto label_4446f0;
        case 0x4446f4u: goto label_4446f4;
        case 0x4446f8u: goto label_4446f8;
        case 0x4446fcu: goto label_4446fc;
        case 0x444700u: goto label_444700;
        case 0x444704u: goto label_444704;
        case 0x444708u: goto label_444708;
        case 0x44470cu: goto label_44470c;
        case 0x444710u: goto label_444710;
        case 0x444714u: goto label_444714;
        case 0x444718u: goto label_444718;
        case 0x44471cu: goto label_44471c;
        case 0x444720u: goto label_444720;
        case 0x444724u: goto label_444724;
        case 0x444728u: goto label_444728;
        case 0x44472cu: goto label_44472c;
        case 0x444730u: goto label_444730;
        case 0x444734u: goto label_444734;
        case 0x444738u: goto label_444738;
        case 0x44473cu: goto label_44473c;
        case 0x444740u: goto label_444740;
        case 0x444744u: goto label_444744;
        case 0x444748u: goto label_444748;
        case 0x44474cu: goto label_44474c;
        case 0x444750u: goto label_444750;
        case 0x444754u: goto label_444754;
        case 0x444758u: goto label_444758;
        case 0x44475cu: goto label_44475c;
        case 0x444760u: goto label_444760;
        case 0x444764u: goto label_444764;
        case 0x444768u: goto label_444768;
        case 0x44476cu: goto label_44476c;
        case 0x444770u: goto label_444770;
        case 0x444774u: goto label_444774;
        case 0x444778u: goto label_444778;
        case 0x44477cu: goto label_44477c;
        case 0x444780u: goto label_444780;
        case 0x444784u: goto label_444784;
        case 0x444788u: goto label_444788;
        case 0x44478cu: goto label_44478c;
        case 0x444790u: goto label_444790;
        case 0x444794u: goto label_444794;
        case 0x444798u: goto label_444798;
        case 0x44479cu: goto label_44479c;
        case 0x4447a0u: goto label_4447a0;
        case 0x4447a4u: goto label_4447a4;
        case 0x4447a8u: goto label_4447a8;
        case 0x4447acu: goto label_4447ac;
        case 0x4447b0u: goto label_4447b0;
        case 0x4447b4u: goto label_4447b4;
        case 0x4447b8u: goto label_4447b8;
        case 0x4447bcu: goto label_4447bc;
        case 0x4447c0u: goto label_4447c0;
        case 0x4447c4u: goto label_4447c4;
        case 0x4447c8u: goto label_4447c8;
        case 0x4447ccu: goto label_4447cc;
        case 0x4447d0u: goto label_4447d0;
        case 0x4447d4u: goto label_4447d4;
        case 0x4447d8u: goto label_4447d8;
        case 0x4447dcu: goto label_4447dc;
        case 0x4447e0u: goto label_4447e0;
        case 0x4447e4u: goto label_4447e4;
        case 0x4447e8u: goto label_4447e8;
        case 0x4447ecu: goto label_4447ec;
        case 0x4447f0u: goto label_4447f0;
        case 0x4447f4u: goto label_4447f4;
        case 0x4447f8u: goto label_4447f8;
        case 0x4447fcu: goto label_4447fc;
        case 0x444800u: goto label_444800;
        case 0x444804u: goto label_444804;
        case 0x444808u: goto label_444808;
        case 0x44480cu: goto label_44480c;
        case 0x444810u: goto label_444810;
        case 0x444814u: goto label_444814;
        case 0x444818u: goto label_444818;
        case 0x44481cu: goto label_44481c;
        case 0x444820u: goto label_444820;
        case 0x444824u: goto label_444824;
        case 0x444828u: goto label_444828;
        case 0x44482cu: goto label_44482c;
        case 0x444830u: goto label_444830;
        case 0x444834u: goto label_444834;
        case 0x444838u: goto label_444838;
        case 0x44483cu: goto label_44483c;
        case 0x444840u: goto label_444840;
        case 0x444844u: goto label_444844;
        case 0x444848u: goto label_444848;
        case 0x44484cu: goto label_44484c;
        case 0x444850u: goto label_444850;
        case 0x444854u: goto label_444854;
        case 0x444858u: goto label_444858;
        case 0x44485cu: goto label_44485c;
        case 0x444860u: goto label_444860;
        case 0x444864u: goto label_444864;
        case 0x444868u: goto label_444868;
        case 0x44486cu: goto label_44486c;
        case 0x444870u: goto label_444870;
        case 0x444874u: goto label_444874;
        case 0x444878u: goto label_444878;
        case 0x44487cu: goto label_44487c;
        case 0x444880u: goto label_444880;
        case 0x444884u: goto label_444884;
        case 0x444888u: goto label_444888;
        case 0x44488cu: goto label_44488c;
        case 0x444890u: goto label_444890;
        case 0x444894u: goto label_444894;
        case 0x444898u: goto label_444898;
        case 0x44489cu: goto label_44489c;
        case 0x4448a0u: goto label_4448a0;
        case 0x4448a4u: goto label_4448a4;
        case 0x4448a8u: goto label_4448a8;
        case 0x4448acu: goto label_4448ac;
        case 0x4448b0u: goto label_4448b0;
        case 0x4448b4u: goto label_4448b4;
        case 0x4448b8u: goto label_4448b8;
        case 0x4448bcu: goto label_4448bc;
        case 0x4448c0u: goto label_4448c0;
        case 0x4448c4u: goto label_4448c4;
        case 0x4448c8u: goto label_4448c8;
        case 0x4448ccu: goto label_4448cc;
        case 0x4448d0u: goto label_4448d0;
        case 0x4448d4u: goto label_4448d4;
        case 0x4448d8u: goto label_4448d8;
        case 0x4448dcu: goto label_4448dc;
        case 0x4448e0u: goto label_4448e0;
        case 0x4448e4u: goto label_4448e4;
        case 0x4448e8u: goto label_4448e8;
        case 0x4448ecu: goto label_4448ec;
        case 0x4448f0u: goto label_4448f0;
        case 0x4448f4u: goto label_4448f4;
        case 0x4448f8u: goto label_4448f8;
        case 0x4448fcu: goto label_4448fc;
        case 0x444900u: goto label_444900;
        case 0x444904u: goto label_444904;
        case 0x444908u: goto label_444908;
        case 0x44490cu: goto label_44490c;
        case 0x444910u: goto label_444910;
        case 0x444914u: goto label_444914;
        case 0x444918u: goto label_444918;
        case 0x44491cu: goto label_44491c;
        case 0x444920u: goto label_444920;
        case 0x444924u: goto label_444924;
        case 0x444928u: goto label_444928;
        case 0x44492cu: goto label_44492c;
        case 0x444930u: goto label_444930;
        case 0x444934u: goto label_444934;
        case 0x444938u: goto label_444938;
        case 0x44493cu: goto label_44493c;
        case 0x444940u: goto label_444940;
        case 0x444944u: goto label_444944;
        case 0x444948u: goto label_444948;
        case 0x44494cu: goto label_44494c;
        case 0x444950u: goto label_444950;
        case 0x444954u: goto label_444954;
        case 0x444958u: goto label_444958;
        case 0x44495cu: goto label_44495c;
        case 0x444960u: goto label_444960;
        case 0x444964u: goto label_444964;
        case 0x444968u: goto label_444968;
        case 0x44496cu: goto label_44496c;
        case 0x444970u: goto label_444970;
        case 0x444974u: goto label_444974;
        case 0x444978u: goto label_444978;
        case 0x44497cu: goto label_44497c;
        case 0x444980u: goto label_444980;
        case 0x444984u: goto label_444984;
        case 0x444988u: goto label_444988;
        case 0x44498cu: goto label_44498c;
        case 0x444990u: goto label_444990;
        case 0x444994u: goto label_444994;
        case 0x444998u: goto label_444998;
        case 0x44499cu: goto label_44499c;
        case 0x4449a0u: goto label_4449a0;
        case 0x4449a4u: goto label_4449a4;
        case 0x4449a8u: goto label_4449a8;
        case 0x4449acu: goto label_4449ac;
        case 0x4449b0u: goto label_4449b0;
        case 0x4449b4u: goto label_4449b4;
        case 0x4449b8u: goto label_4449b8;
        case 0x4449bcu: goto label_4449bc;
        case 0x4449c0u: goto label_4449c0;
        case 0x4449c4u: goto label_4449c4;
        case 0x4449c8u: goto label_4449c8;
        case 0x4449ccu: goto label_4449cc;
        case 0x4449d0u: goto label_4449d0;
        case 0x4449d4u: goto label_4449d4;
        case 0x4449d8u: goto label_4449d8;
        case 0x4449dcu: goto label_4449dc;
        case 0x4449e0u: goto label_4449e0;
        case 0x4449e4u: goto label_4449e4;
        case 0x4449e8u: goto label_4449e8;
        case 0x4449ecu: goto label_4449ec;
        case 0x4449f0u: goto label_4449f0;
        case 0x4449f4u: goto label_4449f4;
        case 0x4449f8u: goto label_4449f8;
        case 0x4449fcu: goto label_4449fc;
        case 0x444a00u: goto label_444a00;
        case 0x444a04u: goto label_444a04;
        case 0x444a08u: goto label_444a08;
        case 0x444a0cu: goto label_444a0c;
        case 0x444a10u: goto label_444a10;
        case 0x444a14u: goto label_444a14;
        case 0x444a18u: goto label_444a18;
        case 0x444a1cu: goto label_444a1c;
        case 0x444a20u: goto label_444a20;
        case 0x444a24u: goto label_444a24;
        case 0x444a28u: goto label_444a28;
        case 0x444a2cu: goto label_444a2c;
        case 0x444a30u: goto label_444a30;
        case 0x444a34u: goto label_444a34;
        case 0x444a38u: goto label_444a38;
        case 0x444a3cu: goto label_444a3c;
        case 0x444a40u: goto label_444a40;
        case 0x444a44u: goto label_444a44;
        case 0x444a48u: goto label_444a48;
        case 0x444a4cu: goto label_444a4c;
        case 0x444a50u: goto label_444a50;
        case 0x444a54u: goto label_444a54;
        case 0x444a58u: goto label_444a58;
        case 0x444a5cu: goto label_444a5c;
        case 0x444a60u: goto label_444a60;
        case 0x444a64u: goto label_444a64;
        case 0x444a68u: goto label_444a68;
        case 0x444a6cu: goto label_444a6c;
        case 0x444a70u: goto label_444a70;
        case 0x444a74u: goto label_444a74;
        case 0x444a78u: goto label_444a78;
        case 0x444a7cu: goto label_444a7c;
        case 0x444a80u: goto label_444a80;
        case 0x444a84u: goto label_444a84;
        case 0x444a88u: goto label_444a88;
        case 0x444a8cu: goto label_444a8c;
        case 0x444a90u: goto label_444a90;
        case 0x444a94u: goto label_444a94;
        case 0x444a98u: goto label_444a98;
        case 0x444a9cu: goto label_444a9c;
        case 0x444aa0u: goto label_444aa0;
        case 0x444aa4u: goto label_444aa4;
        case 0x444aa8u: goto label_444aa8;
        case 0x444aacu: goto label_444aac;
        case 0x444ab0u: goto label_444ab0;
        case 0x444ab4u: goto label_444ab4;
        case 0x444ab8u: goto label_444ab8;
        case 0x444abcu: goto label_444abc;
        case 0x444ac0u: goto label_444ac0;
        case 0x444ac4u: goto label_444ac4;
        case 0x444ac8u: goto label_444ac8;
        case 0x444accu: goto label_444acc;
        case 0x444ad0u: goto label_444ad0;
        case 0x444ad4u: goto label_444ad4;
        case 0x444ad8u: goto label_444ad8;
        case 0x444adcu: goto label_444adc;
        case 0x444ae0u: goto label_444ae0;
        case 0x444ae4u: goto label_444ae4;
        case 0x444ae8u: goto label_444ae8;
        case 0x444aecu: goto label_444aec;
        case 0x444af0u: goto label_444af0;
        case 0x444af4u: goto label_444af4;
        case 0x444af8u: goto label_444af8;
        case 0x444afcu: goto label_444afc;
        case 0x444b00u: goto label_444b00;
        case 0x444b04u: goto label_444b04;
        case 0x444b08u: goto label_444b08;
        case 0x444b0cu: goto label_444b0c;
        case 0x444b10u: goto label_444b10;
        case 0x444b14u: goto label_444b14;
        case 0x444b18u: goto label_444b18;
        case 0x444b1cu: goto label_444b1c;
        case 0x444b20u: goto label_444b20;
        case 0x444b24u: goto label_444b24;
        case 0x444b28u: goto label_444b28;
        case 0x444b2cu: goto label_444b2c;
        case 0x444b30u: goto label_444b30;
        case 0x444b34u: goto label_444b34;
        case 0x444b38u: goto label_444b38;
        case 0x444b3cu: goto label_444b3c;
        case 0x444b40u: goto label_444b40;
        case 0x444b44u: goto label_444b44;
        case 0x444b48u: goto label_444b48;
        case 0x444b4cu: goto label_444b4c;
        case 0x444b50u: goto label_444b50;
        case 0x444b54u: goto label_444b54;
        case 0x444b58u: goto label_444b58;
        case 0x444b5cu: goto label_444b5c;
        case 0x444b60u: goto label_444b60;
        case 0x444b64u: goto label_444b64;
        case 0x444b68u: goto label_444b68;
        case 0x444b6cu: goto label_444b6c;
        case 0x444b70u: goto label_444b70;
        case 0x444b74u: goto label_444b74;
        case 0x444b78u: goto label_444b78;
        case 0x444b7cu: goto label_444b7c;
        case 0x444b80u: goto label_444b80;
        case 0x444b84u: goto label_444b84;
        case 0x444b88u: goto label_444b88;
        case 0x444b8cu: goto label_444b8c;
        case 0x444b90u: goto label_444b90;
        case 0x444b94u: goto label_444b94;
        case 0x444b98u: goto label_444b98;
        case 0x444b9cu: goto label_444b9c;
        case 0x444ba0u: goto label_444ba0;
        case 0x444ba4u: goto label_444ba4;
        case 0x444ba8u: goto label_444ba8;
        case 0x444bacu: goto label_444bac;
        case 0x444bb0u: goto label_444bb0;
        case 0x444bb4u: goto label_444bb4;
        case 0x444bb8u: goto label_444bb8;
        case 0x444bbcu: goto label_444bbc;
        case 0x444bc0u: goto label_444bc0;
        case 0x444bc4u: goto label_444bc4;
        case 0x444bc8u: goto label_444bc8;
        case 0x444bccu: goto label_444bcc;
        case 0x444bd0u: goto label_444bd0;
        case 0x444bd4u: goto label_444bd4;
        case 0x444bd8u: goto label_444bd8;
        case 0x444bdcu: goto label_444bdc;
        case 0x444be0u: goto label_444be0;
        case 0x444be4u: goto label_444be4;
        case 0x444be8u: goto label_444be8;
        case 0x444becu: goto label_444bec;
        case 0x444bf0u: goto label_444bf0;
        case 0x444bf4u: goto label_444bf4;
        case 0x444bf8u: goto label_444bf8;
        case 0x444bfcu: goto label_444bfc;
        case 0x444c00u: goto label_444c00;
        case 0x444c04u: goto label_444c04;
        case 0x444c08u: goto label_444c08;
        case 0x444c0cu: goto label_444c0c;
        case 0x444c10u: goto label_444c10;
        case 0x444c14u: goto label_444c14;
        case 0x444c18u: goto label_444c18;
        case 0x444c1cu: goto label_444c1c;
        case 0x444c20u: goto label_444c20;
        case 0x444c24u: goto label_444c24;
        case 0x444c28u: goto label_444c28;
        case 0x444c2cu: goto label_444c2c;
        case 0x444c30u: goto label_444c30;
        case 0x444c34u: goto label_444c34;
        case 0x444c38u: goto label_444c38;
        case 0x444c3cu: goto label_444c3c;
        case 0x444c40u: goto label_444c40;
        case 0x444c44u: goto label_444c44;
        case 0x444c48u: goto label_444c48;
        case 0x444c4cu: goto label_444c4c;
        case 0x444c50u: goto label_444c50;
        case 0x444c54u: goto label_444c54;
        case 0x444c58u: goto label_444c58;
        case 0x444c5cu: goto label_444c5c;
        case 0x444c60u: goto label_444c60;
        case 0x444c64u: goto label_444c64;
        case 0x444c68u: goto label_444c68;
        case 0x444c6cu: goto label_444c6c;
        case 0x444c70u: goto label_444c70;
        case 0x444c74u: goto label_444c74;
        case 0x444c78u: goto label_444c78;
        case 0x444c7cu: goto label_444c7c;
        case 0x444c80u: goto label_444c80;
        case 0x444c84u: goto label_444c84;
        case 0x444c88u: goto label_444c88;
        case 0x444c8cu: goto label_444c8c;
        default: break;
    }

    ctx->pc = 0x4446f0u;

label_4446f0:
    // 0x4446f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4446f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4446f4:
    // 0x4446f4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4446f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_4446f8:
    // 0x4446f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4446f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4446fc:
    // 0x4446fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4446fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_444700:
    // 0x444700: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x444700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_444704:
    // 0x444704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x444704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_444708:
    // 0x444708: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x444708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44470c:
    // 0x44470c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x44470cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_444710:
    // 0x444710: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x444710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_444714:
    // 0x444714: 0xac850290  sw          $a1, 0x290($a0)
    ctx->pc = 0x444714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 656), GPR_U32(ctx, 5));
label_444718:
    // 0x444718: 0xac8300d0  sw          $v1, 0xD0($a0)
    ctx->pc = 0x444718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
label_44471c:
    // 0x44471c: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x44471cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
label_444720:
    // 0x444720: 0xac8300d8  sw          $v1, 0xD8($a0)
    ctx->pc = 0x444720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 3));
label_444724:
    // 0x444724: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x444724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_444728:
    // 0x444728: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x444728u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_44472c:
    // 0x44472c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_444730:
    if (ctx->pc == 0x444730u) {
        ctx->pc = 0x444730u;
            // 0x444730: 0x265000e0  addiu       $s0, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x444734u;
        goto label_444734;
    }
    ctx->pc = 0x44472Cu;
    {
        const bool branch_taken_0x44472c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x444730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44472Cu;
            // 0x444730: 0x265000e0  addiu       $s0, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44472c) {
            ctx->pc = 0x444744u;
            goto label_444744;
        }
    }
    ctx->pc = 0x444734u;
label_444734:
    // 0x444734: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x444734u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_444738:
    // 0x444738: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x444738u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_44473c:
    // 0x44473c: 0x10000008  b           . + 4 + (0x8 << 2)
label_444740:
    if (ctx->pc == 0x444740u) {
        ctx->pc = 0x444740u;
            // 0x444740: 0xc6410034  lwc1        $f1, 0x34($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x444744u;
        goto label_444744;
    }
    ctx->pc = 0x44473Cu;
    {
        const bool branch_taken_0x44473c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44473Cu;
            // 0x444740: 0xc6410034  lwc1        $f1, 0x34($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x44473c) {
            ctx->pc = 0x444760u;
            goto label_444760;
        }
    }
    ctx->pc = 0x444744u;
label_444744:
    // 0x444744: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x444744u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_444748:
    // 0x444748: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x444748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_44474c:
    // 0x44474c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x44474cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_444750:
    // 0x444750: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x444750u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_444754:
    // 0x444754: 0x0  nop
    ctx->pc = 0x444754u;
    // NOP
label_444758:
    // 0x444758: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x444758u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_44475c:
    // 0x44475c: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x44475cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_444760:
    // 0x444760: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x444760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_444764:
    // 0x444764: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x444764u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_444768:
    // 0x444768: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x444768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_44476c:
    // 0x44476c: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x44476cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_444770:
    // 0x444770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x444770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_444774:
    // 0x444774: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x444774u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_444778:
    // 0x444778: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x444778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44477c:
    // 0x44477c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x44477cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_444780:
    // 0x444780: 0x0  nop
    ctx->pc = 0x444780u;
    // NOP
label_444784:
    // 0x444784: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x444784u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_444788:
    // 0x444788: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x444788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_44478c:
    // 0x44478c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x44478cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_444790:
    // 0x444790: 0xc64e0038  lwc1        $f14, 0x38($s2)
    ctx->pc = 0x444790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_444794:
    // 0x444794: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x444794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_444798:
    // 0x444798: 0x0  nop
    ctx->pc = 0x444798u;
    // NOP
label_44479c:
    // 0x44479c: 0x0  nop
    ctx->pc = 0x44479cu;
    // NOP
label_4447a0:
    // 0x4447a0: 0xc0d8aac  jal         func_362AB0
label_4447a4:
    if (ctx->pc == 0x4447A4u) {
        ctx->pc = 0x4447A8u;
        goto label_4447a8;
    }
    ctx->pc = 0x4447A0u;
    SET_GPR_U32(ctx, 31, 0x4447A8u);
    ctx->pc = 0x362AB0u;
    if (runtime->hasFunction(0x362AB0u)) {
        auto targetFn = runtime->lookupFunction(0x362AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4447A8u; }
        if (ctx->pc != 0x4447A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362AB0_0x362ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4447A8u; }
        if (ctx->pc != 0x4447A8u) { return; }
    }
    ctx->pc = 0x4447A8u;
label_4447a8:
    // 0x4447a8: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x4447a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_4447ac:
    // 0x4447ac: 0xc04cc04  jal         func_133010
label_4447b0:
    if (ctx->pc == 0x4447B0u) {
        ctx->pc = 0x4447B0u;
            // 0x4447b0: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->pc = 0x4447B4u;
        goto label_4447b4;
    }
    ctx->pc = 0x4447ACu;
    SET_GPR_U32(ctx, 31, 0x4447B4u);
    ctx->pc = 0x4447B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4447ACu;
            // 0x4447b0: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4447B4u; }
        if (ctx->pc != 0x4447B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4447B4u; }
        if (ctx->pc != 0x4447B4u) { return; }
    }
    ctx->pc = 0x4447B4u;
label_4447b4:
    // 0x4447b4: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x4447b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_4447b8:
    // 0x4447b8: 0x260600c0  addiu       $a2, $s0, 0xC0
    ctx->pc = 0x4447b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_4447bc:
    // 0x4447bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4447bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4447c0:
    // 0x4447c0: 0xc04cc7c  jal         func_1331F0
label_4447c4:
    if (ctx->pc == 0x4447C4u) {
        ctx->pc = 0x4447C4u;
            // 0x4447c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4447C8u;
        goto label_4447c8;
    }
    ctx->pc = 0x4447C0u;
    SET_GPR_U32(ctx, 31, 0x4447C8u);
    ctx->pc = 0x4447C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4447C0u;
            // 0x4447c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4447C8u; }
        if (ctx->pc != 0x4447C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4447C8u; }
        if (ctx->pc != 0x4447C8u) { return; }
    }
    ctx->pc = 0x4447C8u;
label_4447c8:
    // 0x4447c8: 0x26050134  addiu       $a1, $s0, 0x134
    ctx->pc = 0x4447c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 308));
label_4447cc:
    // 0x4447cc: 0xc04c720  jal         func_131C80
label_4447d0:
    if (ctx->pc == 0x4447D0u) {
        ctx->pc = 0x4447D0u;
            // 0x4447d0: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x4447D4u;
        goto label_4447d4;
    }
    ctx->pc = 0x4447CCu;
    SET_GPR_U32(ctx, 31, 0x4447D4u);
    ctx->pc = 0x4447D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4447CCu;
            // 0x4447d0: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4447D4u; }
        if (ctx->pc != 0x4447D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4447D4u; }
        if (ctx->pc != 0x4447D4u) { return; }
    }
    ctx->pc = 0x4447D4u;
label_4447d4:
    // 0x4447d4: 0xae400210  sw          $zero, 0x210($s2)
    ctx->pc = 0x4447d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 528), GPR_U32(ctx, 0));
label_4447d8:
    // 0x4447d8: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x4447d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_4447dc:
    // 0x4447dc: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x4447dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4447e0:
    // 0x4447e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4447e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4447e4:
    // 0x4447e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4447e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4447e8:
    // 0x4447e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4447e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4447ec:
    // 0x4447ec: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x4447ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_4447f0:
    // 0x4447f0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x4447f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4447f4:
    // 0x4447f4: 0x3443f000  ori         $v1, $v0, 0xF000
    ctx->pc = 0x4447f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_4447f8:
    // 0x4447f8: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x4447f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_4447fc:
    // 0x4447fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4447fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_444800:
    // 0x444800: 0x0  nop
    ctx->pc = 0x444800u;
    // NOP
label_444804:
    // 0x444804: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x444804u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_444808:
    // 0x444808: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x444808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_44480c:
    // 0x44480c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44480cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_444810:
    // 0x444810: 0xe6400200  swc1        $f0, 0x200($s2)
    ctx->pc = 0x444810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 512), bits); }
label_444814:
    // 0x444814: 0xae400298  sw          $zero, 0x298($s2)
    ctx->pc = 0x444814u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 664), GPR_U32(ctx, 0));
label_444818:
    // 0x444818: 0xae400294  sw          $zero, 0x294($s2)
    ctx->pc = 0x444818u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 660), GPR_U32(ctx, 0));
label_44481c:
    // 0x44481c: 0xae4002a8  sw          $zero, 0x2A8($s2)
    ctx->pc = 0x44481cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 680), GPR_U32(ctx, 0));
label_444820:
    // 0x444820: 0xae4002a4  sw          $zero, 0x2A4($s2)
    ctx->pc = 0x444820u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 676), GPR_U32(ctx, 0));
label_444824:
    // 0x444824: 0x8e510050  lw          $s1, 0x50($s2)
    ctx->pc = 0x444824u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_444828:
    // 0x444828: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x444828u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_44482c:
    // 0x44482c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x44482cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_444830:
    // 0x444830: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x444830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_444834:
    // 0x444834: 0xc08bff0  jal         func_22FFC0
label_444838:
    if (ctx->pc == 0x444838u) {
        ctx->pc = 0x444838u;
            // 0x444838: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44483Cu;
        goto label_44483c;
    }
    ctx->pc = 0x444834u;
    SET_GPR_U32(ctx, 31, 0x44483Cu);
    ctx->pc = 0x444838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444834u;
            // 0x444838: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44483Cu; }
        if (ctx->pc != 0x44483Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44483Cu; }
        if (ctx->pc != 0x44483Cu) { return; }
    }
    ctx->pc = 0x44483Cu;
label_44483c:
    // 0x44483c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44483cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_444840:
    // 0x444840: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x444840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_444844:
    // 0x444844: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x444844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_444848:
    // 0x444848: 0xc08914c  jal         func_224530
label_44484c:
    if (ctx->pc == 0x44484Cu) {
        ctx->pc = 0x44484Cu;
            // 0x44484c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x444850u;
        goto label_444850;
    }
    ctx->pc = 0x444848u;
    SET_GPR_U32(ctx, 31, 0x444850u);
    ctx->pc = 0x44484Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444848u;
            // 0x44484c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444850u; }
        if (ctx->pc != 0x444850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444850u; }
        if (ctx->pc != 0x444850u) { return; }
    }
    ctx->pc = 0x444850u;
label_444850:
    // 0x444850: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x444850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_444854:
    // 0x444854: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x444854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_444858:
    // 0x444858: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x444858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_44485c:
    // 0x44485c: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x44485cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_444860:
    // 0x444860: 0x8e500050  lw          $s0, 0x50($s2)
    ctx->pc = 0x444860u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_444864:
    // 0x444864: 0xc088b74  jal         func_222DD0
label_444868:
    if (ctx->pc == 0x444868u) {
        ctx->pc = 0x444868u;
            // 0x444868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44486Cu;
        goto label_44486c;
    }
    ctx->pc = 0x444864u;
    SET_GPR_U32(ctx, 31, 0x44486Cu);
    ctx->pc = 0x444868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444864u;
            // 0x444868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44486Cu; }
        if (ctx->pc != 0x44486Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44486Cu; }
        if (ctx->pc != 0x44486Cu) { return; }
    }
    ctx->pc = 0x44486Cu;
label_44486c:
    // 0x44486c: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x44486cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_444870:
    // 0x444870: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x444870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_444874:
    // 0x444874: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x444874u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_444878:
    // 0x444878: 0x320f809  jalr        $t9
label_44487c:
    if (ctx->pc == 0x44487Cu) {
        ctx->pc = 0x44487Cu;
            // 0x44487c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x444880u;
        goto label_444880;
    }
    ctx->pc = 0x444878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x444880u);
        ctx->pc = 0x44487Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x444878u;
            // 0x44487c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x444880u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x444880u; }
            if (ctx->pc != 0x444880u) { return; }
        }
        }
    }
    ctx->pc = 0x444880u;
label_444880:
    // 0x444880: 0x3c024402  lui         $v0, 0x4402
    ctx->pc = 0x444880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17410 << 16));
label_444884:
    // 0x444884: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x444884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
label_444888:
    // 0x444888: 0x3442e652  ori         $v0, $v0, 0xE652
    ctx->pc = 0x444888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58962);
label_44488c:
    // 0x44488c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44488cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_444890:
    // 0x444890: 0xc088b74  jal         func_222DD0
label_444894:
    if (ctx->pc == 0x444894u) {
        ctx->pc = 0x444894u;
            // 0x444894: 0xae020154  sw          $v0, 0x154($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
        ctx->pc = 0x444898u;
        goto label_444898;
    }
    ctx->pc = 0x444890u;
    SET_GPR_U32(ctx, 31, 0x444898u);
    ctx->pc = 0x444894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444890u;
            // 0x444894: 0xae020154  sw          $v0, 0x154($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444898u; }
        if (ctx->pc != 0x444898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444898u; }
        if (ctx->pc != 0x444898u) { return; }
    }
    ctx->pc = 0x444898u;
label_444898:
    // 0x444898: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x444898u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_44489c:
    // 0x44489c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x44489cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_4448a0:
    // 0x4448a0: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4448a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4448a4:
    // 0x4448a4: 0x320f809  jalr        $t9
label_4448a8:
    if (ctx->pc == 0x4448A8u) {
        ctx->pc = 0x4448A8u;
            // 0x4448a8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4448ACu;
        goto label_4448ac;
    }
    ctx->pc = 0x4448A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4448ACu);
        ctx->pc = 0x4448A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4448A4u;
            // 0x4448a8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4448ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4448ACu; }
            if (ctx->pc != 0x4448ACu) { return; }
        }
        }
    }
    ctx->pc = 0x4448ACu;
label_4448ac:
    // 0x4448ac: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x4448acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_4448b0:
    // 0x4448b0: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x4448b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
label_4448b4:
    // 0x4448b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x4448b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_4448b8:
    // 0x4448b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4448b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4448bc:
    // 0x4448bc: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x4448bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
label_4448c0:
    // 0x4448c0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4448c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4448c4:
    // 0x4448c4: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x4448c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4448c8:
    // 0x4448c8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x4448c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4448cc:
    // 0x4448cc: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x4448ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4448d0:
    // 0x4448d0: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x4448d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4448d4:
    // 0x4448d4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4448d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4448d8:
    // 0x4448d8: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4448d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_4448dc:
    // 0x4448dc: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x4448dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4448e0:
    // 0x4448e0: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x4448e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4448e4:
    // 0x4448e4: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x4448e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4448e8:
    // 0x4448e8: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x4448e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4448ec:
    // 0x4448ec: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x4448ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4448f0:
    // 0x4448f0: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x4448f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4448f4:
    // 0x4448f4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4448f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4448f8:
    // 0x4448f8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4448f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4448fc:
    // 0x4448fc: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4448fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_444900:
    // 0x444900: 0xc0892b0  jal         func_224AC0
label_444904:
    if (ctx->pc == 0x444904u) {
        ctx->pc = 0x444904u;
            // 0x444904: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x444908u;
        goto label_444908;
    }
    ctx->pc = 0x444900u;
    SET_GPR_U32(ctx, 31, 0x444908u);
    ctx->pc = 0x444904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444900u;
            // 0x444904: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444908u; }
        if (ctx->pc != 0x444908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444908u; }
        if (ctx->pc != 0x444908u) { return; }
    }
    ctx->pc = 0x444908u;
label_444908:
    // 0x444908: 0x8e4302f0  lw          $v1, 0x2F0($s2)
    ctx->pc = 0x444908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 752)));
label_44490c:
    // 0x44490c: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x44490cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_444910:
    // 0x444910: 0x24a50260  addiu       $a1, $a1, 0x260
    ctx->pc = 0x444910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 608));
label_444914:
    // 0x444914: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x444914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_444918:
    // 0x444918: 0x248402a0  addiu       $a0, $a0, 0x2A0
    ctx->pc = 0x444918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 672));
label_44491c:
    // 0x44491c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44491cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_444920:
    // 0x444920: 0xac6500cc  sw          $a1, 0xCC($v1)
    ctx->pc = 0x444920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 5));
label_444924:
    // 0x444924: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x444924u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_444928:
    // 0x444928: 0x8e4302f4  lw          $v1, 0x2F4($s2)
    ctx->pc = 0x444928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 756)));
label_44492c:
    // 0x44492c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x44492cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_444930:
    // 0x444930: 0x264602b0  addiu       $a2, $s2, 0x2B0
    ctx->pc = 0x444930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 688));
label_444934:
    // 0x444934: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x444934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_444938:
    // 0x444938: 0xac6400cc  sw          $a0, 0xCC($v1)
    ctx->pc = 0x444938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 4));
label_44493c:
    // 0x44493c: 0x8c427528  lw          $v0, 0x7528($v0)
    ctx->pc = 0x44493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29992)));
label_444940:
    // 0x444940: 0x8c470094  lw          $a3, 0x94($v0)
    ctx->pc = 0x444940u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_444944:
    // 0x444944: 0x8d0302f0  lw          $v1, 0x2F0($t0)
    ctx->pc = 0x444944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 752)));
label_444948:
    // 0x444948: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x444948u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_44494c:
    // 0x44494c: 0x29220002  slti        $v0, $t1, 0x2
    ctx->pc = 0x44494cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
label_444950:
    // 0x444950: 0xac670080  sw          $a3, 0x80($v1)
    ctx->pc = 0x444950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 7));
label_444954:
    // 0x444954: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x444954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
label_444958:
    // 0x444958: 0xac660088  sw          $a2, 0x88($v1)
    ctx->pc = 0x444958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 6));
label_44495c:
    // 0x44495c: 0xac60008c  sw          $zero, 0x8C($v1)
    ctx->pc = 0x44495cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 0));
label_444960:
    // 0x444960: 0xac650090  sw          $a1, 0x90($v1)
    ctx->pc = 0x444960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 5));
label_444964:
    // 0x444964: 0x8d0402f0  lw          $a0, 0x2F0($t0)
    ctx->pc = 0x444964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 752)));
label_444968:
    // 0x444968: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x444968u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_44496c:
    // 0x44496c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x44496cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_444970:
    // 0x444970: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x444970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_444974:
    // 0x444974: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_444978:
    if (ctx->pc == 0x444978u) {
        ctx->pc = 0x444978u;
            // 0x444978: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x44497Cu;
        goto label_44497c;
    }
    ctx->pc = 0x444974u;
    {
        const bool branch_taken_0x444974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x444978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x444974u;
            // 0x444978: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444974) {
            ctx->pc = 0x444944u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_444944;
        }
    }
    ctx->pc = 0x44497Cu;
label_44497c:
    // 0x44497c: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x44497cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_444980:
    // 0x444980: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x444980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_444984:
    // 0x444984: 0x8c427528  lw          $v0, 0x7528($v0)
    ctx->pc = 0x444984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29992)));
label_444988:
    // 0x444988: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x444988u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44498c:
    // 0x44498c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x44498cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_444990:
    // 0x444990: 0x320f809  jalr        $t9
label_444994:
    if (ctx->pc == 0x444994u) {
        ctx->pc = 0x444994u;
            // 0x444994: 0x8c450060  lw          $a1, 0x60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
        ctx->pc = 0x444998u;
        goto label_444998;
    }
    ctx->pc = 0x444990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x444998u);
        ctx->pc = 0x444994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x444990u;
            // 0x444994: 0x8c450060  lw          $a1, 0x60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x444998u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x444998u; }
            if (ctx->pc != 0x444998u) { return; }
        }
        }
    }
    ctx->pc = 0x444998u;
label_444998:
    // 0x444998: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x444998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_44499c:
    // 0x44499c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44499cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4449a0:
    // 0x4449a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4449a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4449a4:
    // 0x4449a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4449a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4449a8:
    // 0x4449a8: 0x3e00008  jr          $ra
label_4449ac:
    if (ctx->pc == 0x4449ACu) {
        ctx->pc = 0x4449ACu;
            // 0x4449ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4449B0u;
        goto label_4449b0;
    }
    ctx->pc = 0x4449A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4449ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4449A8u;
            // 0x4449ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4449B0u;
label_4449b0:
    // 0x4449b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4449b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4449b4:
    // 0x4449b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4449b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4449b8:
    // 0x4449b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4449b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4449bc:
    // 0x4449bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4449bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4449c0:
    // 0x4449c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4449c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4449c4:
    // 0x4449c4: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x4449c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_4449c8:
    // 0x4449c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4449c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4449cc:
    // 0x4449cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4449ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4449d0:
    // 0x4449d0: 0xac8600d0  sw          $a2, 0xD0($a0)
    ctx->pc = 0x4449d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 6));
label_4449d4:
    // 0x4449d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4449d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4449d8:
    // 0x4449d8: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x4449d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
label_4449dc:
    // 0x4449dc: 0xac8300d8  sw          $v1, 0xD8($a0)
    ctx->pc = 0x4449dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 3));
label_4449e0:
    // 0x4449e0: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x4449e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4449e4:
    // 0x4449e4: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x4449e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_4449e8:
    // 0x4449e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4449e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4449ec:
    // 0x4449ec: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x4449ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_4449f0:
    // 0x4449f0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4449f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4449f4:
    // 0x4449f4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4449f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4449f8:
    // 0x4449f8: 0xc08bff0  jal         func_22FFC0
label_4449fc:
    if (ctx->pc == 0x4449FCu) {
        ctx->pc = 0x4449FCu;
            // 0x4449fc: 0x263000e0  addiu       $s0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->pc = 0x444A00u;
        goto label_444a00;
    }
    ctx->pc = 0x4449F8u;
    SET_GPR_U32(ctx, 31, 0x444A00u);
    ctx->pc = 0x4449FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4449F8u;
            // 0x4449fc: 0x263000e0  addiu       $s0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444A00u; }
        if (ctx->pc != 0x444A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444A00u; }
        if (ctx->pc != 0x444A00u) { return; }
    }
    ctx->pc = 0x444A00u;
label_444a00:
    // 0x444a00: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x444a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_444a04:
    // 0x444a04: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x444a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_444a08:
    // 0x444a08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x444a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_444a0c:
    // 0x444a0c: 0xc08914c  jal         func_224530
label_444a10:
    if (ctx->pc == 0x444A10u) {
        ctx->pc = 0x444A10u;
            // 0x444a10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x444A14u;
        goto label_444a14;
    }
    ctx->pc = 0x444A0Cu;
    SET_GPR_U32(ctx, 31, 0x444A14u);
    ctx->pc = 0x444A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444A0Cu;
            // 0x444a10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444A14u; }
        if (ctx->pc != 0x444A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444A14u; }
        if (ctx->pc != 0x444A14u) { return; }
    }
    ctx->pc = 0x444A14u;
label_444a14:
    // 0x444a14: 0xc0e393c  jal         func_38E4F0
label_444a18:
    if (ctx->pc == 0x444A18u) {
        ctx->pc = 0x444A18u;
            // 0x444a18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x444A1Cu;
        goto label_444a1c;
    }
    ctx->pc = 0x444A14u;
    SET_GPR_U32(ctx, 31, 0x444A1Cu);
    ctx->pc = 0x444A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444A14u;
            // 0x444a18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444A1Cu; }
        if (ctx->pc != 0x444A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444A1Cu; }
        if (ctx->pc != 0x444A1Cu) { return; }
    }
    ctx->pc = 0x444A1Cu;
label_444a1c:
    // 0x444a1c: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x444a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_444a20:
    // 0x444a20: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x444a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_444a24:
    // 0x444a24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x444a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_444a28:
    // 0x444a28: 0x0  nop
    ctx->pc = 0x444a28u;
    // NOP
label_444a2c:
    // 0x444a2c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x444a2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_444a30:
    // 0x444a30: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_444a34:
    if (ctx->pc == 0x444A34u) {
        ctx->pc = 0x444A34u;
            // 0x444a34: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x444A38u;
        goto label_444a38;
    }
    ctx->pc = 0x444A30u;
    {
        const bool branch_taken_0x444a30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x444a30) {
            ctx->pc = 0x444A34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x444A30u;
            // 0x444a34: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x444A48u;
            goto label_444a48;
        }
    }
    ctx->pc = 0x444A38u;
label_444a38:
    // 0x444a38: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x444a38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_444a3c:
    // 0x444a3c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x444a3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_444a40:
    // 0x444a40: 0x10000007  b           . + 4 + (0x7 << 2)
label_444a44:
    if (ctx->pc == 0x444A44u) {
        ctx->pc = 0x444A44u;
            // 0x444a44: 0xc6210034  lwc1        $f1, 0x34($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x444A48u;
        goto label_444a48;
    }
    ctx->pc = 0x444A40u;
    {
        const bool branch_taken_0x444a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x444A40u;
            // 0x444a44: 0xc6210034  lwc1        $f1, 0x34($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x444a40) {
            ctx->pc = 0x444A60u;
            goto label_444a60;
        }
    }
    ctx->pc = 0x444A48u;
label_444a48:
    // 0x444a48: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x444a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_444a4c:
    // 0x444a4c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x444a4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_444a50:
    // 0x444a50: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x444a50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_444a54:
    // 0x444a54: 0x0  nop
    ctx->pc = 0x444a54u;
    // NOP
label_444a58:
    // 0x444a58: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x444a58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_444a5c:
    // 0x444a5c: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x444a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_444a60:
    // 0x444a60: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x444a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_444a64:
    // 0x444a64: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x444a64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_444a68:
    // 0x444a68: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x444a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_444a6c:
    // 0x444a6c: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x444a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_444a70:
    // 0x444a70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x444a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_444a74:
    // 0x444a74: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x444a74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_444a78:
    // 0x444a78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x444a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_444a7c:
    // 0x444a7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x444a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_444a80:
    // 0x444a80: 0x0  nop
    ctx->pc = 0x444a80u;
    // NOP
label_444a84:
    // 0x444a84: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x444a84u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_444a88:
    // 0x444a88: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x444a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_444a8c:
    // 0x444a8c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x444a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_444a90:
    // 0x444a90: 0xc62e0038  lwc1        $f14, 0x38($s1)
    ctx->pc = 0x444a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_444a94:
    // 0x444a94: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x444a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_444a98:
    // 0x444a98: 0x0  nop
    ctx->pc = 0x444a98u;
    // NOP
label_444a9c:
    // 0x444a9c: 0x0  nop
    ctx->pc = 0x444a9cu;
    // NOP
label_444aa0:
    // 0x444aa0: 0xc0d8aac  jal         func_362AB0
label_444aa4:
    if (ctx->pc == 0x444AA4u) {
        ctx->pc = 0x444AA8u;
        goto label_444aa8;
    }
    ctx->pc = 0x444AA0u;
    SET_GPR_U32(ctx, 31, 0x444AA8u);
    ctx->pc = 0x362AB0u;
    if (runtime->hasFunction(0x362AB0u)) {
        auto targetFn = runtime->lookupFunction(0x362AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444AA8u; }
        if (ctx->pc != 0x444AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362AB0_0x362ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444AA8u; }
        if (ctx->pc != 0x444AA8u) { return; }
    }
    ctx->pc = 0x444AA8u;
label_444aa8:
    // 0x444aa8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x444aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_444aac:
    // 0x444aac: 0xc04cc04  jal         func_133010
label_444ab0:
    if (ctx->pc == 0x444AB0u) {
        ctx->pc = 0x444AB0u;
            // 0x444ab0: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->pc = 0x444AB4u;
        goto label_444ab4;
    }
    ctx->pc = 0x444AACu;
    SET_GPR_U32(ctx, 31, 0x444AB4u);
    ctx->pc = 0x444AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444AACu;
            // 0x444ab0: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444AB4u; }
        if (ctx->pc != 0x444AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444AB4u; }
        if (ctx->pc != 0x444AB4u) { return; }
    }
    ctx->pc = 0x444AB4u;
label_444ab4:
    // 0x444ab4: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x444ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_444ab8:
    // 0x444ab8: 0x260600c0  addiu       $a2, $s0, 0xC0
    ctx->pc = 0x444ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_444abc:
    // 0x444abc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x444abcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_444ac0:
    // 0x444ac0: 0xc04cc7c  jal         func_1331F0
label_444ac4:
    if (ctx->pc == 0x444AC4u) {
        ctx->pc = 0x444AC4u;
            // 0x444ac4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x444AC8u;
        goto label_444ac8;
    }
    ctx->pc = 0x444AC0u;
    SET_GPR_U32(ctx, 31, 0x444AC8u);
    ctx->pc = 0x444AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444AC0u;
            // 0x444ac4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444AC8u; }
        if (ctx->pc != 0x444AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444AC8u; }
        if (ctx->pc != 0x444AC8u) { return; }
    }
    ctx->pc = 0x444AC8u;
label_444ac8:
    // 0x444ac8: 0x26050134  addiu       $a1, $s0, 0x134
    ctx->pc = 0x444ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 308));
label_444acc:
    // 0x444acc: 0xc04c720  jal         func_131C80
label_444ad0:
    if (ctx->pc == 0x444AD0u) {
        ctx->pc = 0x444AD0u;
            // 0x444ad0: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x444AD4u;
        goto label_444ad4;
    }
    ctx->pc = 0x444ACCu;
    SET_GPR_U32(ctx, 31, 0x444AD4u);
    ctx->pc = 0x444AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444ACCu;
            // 0x444ad0: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444AD4u; }
        if (ctx->pc != 0x444AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444AD4u; }
        if (ctx->pc != 0x444AD4u) { return; }
    }
    ctx->pc = 0x444AD4u;
label_444ad4:
    // 0x444ad4: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x444ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_444ad8:
    // 0x444ad8: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x444ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_444adc:
    // 0x444adc: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x444adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_444ae0:
    // 0x444ae0: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x444ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_444ae4:
    // 0x444ae4: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x444ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_444ae8:
    // 0x444ae8: 0xc088b74  jal         func_222DD0
label_444aec:
    if (ctx->pc == 0x444AECu) {
        ctx->pc = 0x444AECu;
            // 0x444aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x444AF0u;
        goto label_444af0;
    }
    ctx->pc = 0x444AE8u;
    SET_GPR_U32(ctx, 31, 0x444AF0u);
    ctx->pc = 0x444AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444AE8u;
            // 0x444aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444AF0u; }
        if (ctx->pc != 0x444AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444AF0u; }
        if (ctx->pc != 0x444AF0u) { return; }
    }
    ctx->pc = 0x444AF0u;
label_444af0:
    // 0x444af0: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x444af0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_444af4:
    // 0x444af4: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x444af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_444af8:
    // 0x444af8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x444af8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_444afc:
    // 0x444afc: 0x320f809  jalr        $t9
label_444b00:
    if (ctx->pc == 0x444B00u) {
        ctx->pc = 0x444B00u;
            // 0x444b00: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x444B04u;
        goto label_444b04;
    }
    ctx->pc = 0x444AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x444B04u);
        ctx->pc = 0x444B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x444AFCu;
            // 0x444b00: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x444B04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x444B04u; }
            if (ctx->pc != 0x444B04u) { return; }
        }
        }
    }
    ctx->pc = 0x444B04u;
label_444b04:
    // 0x444b04: 0x3c024402  lui         $v0, 0x4402
    ctx->pc = 0x444b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17410 << 16));
label_444b08:
    // 0x444b08: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x444b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
label_444b0c:
    // 0x444b0c: 0x3442e652  ori         $v0, $v0, 0xE652
    ctx->pc = 0x444b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58962);
label_444b10:
    // 0x444b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x444b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_444b14:
    // 0x444b14: 0xc088b74  jal         func_222DD0
label_444b18:
    if (ctx->pc == 0x444B18u) {
        ctx->pc = 0x444B18u;
            // 0x444b18: 0xae020154  sw          $v0, 0x154($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
        ctx->pc = 0x444B1Cu;
        goto label_444b1c;
    }
    ctx->pc = 0x444B14u;
    SET_GPR_U32(ctx, 31, 0x444B1Cu);
    ctx->pc = 0x444B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444B14u;
            // 0x444b18: 0xae020154  sw          $v0, 0x154($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444B1Cu; }
        if (ctx->pc != 0x444B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444B1Cu; }
        if (ctx->pc != 0x444B1Cu) { return; }
    }
    ctx->pc = 0x444B1Cu;
label_444b1c:
    // 0x444b1c: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x444b1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_444b20:
    // 0x444b20: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x444b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_444b24:
    // 0x444b24: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x444b24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_444b28:
    // 0x444b28: 0x320f809  jalr        $t9
label_444b2c:
    if (ctx->pc == 0x444B2Cu) {
        ctx->pc = 0x444B2Cu;
            // 0x444b2c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x444B30u;
        goto label_444b30;
    }
    ctx->pc = 0x444B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x444B30u);
        ctx->pc = 0x444B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x444B28u;
            // 0x444b2c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x444B30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x444B30u; }
            if (ctx->pc != 0x444B30u) { return; }
        }
        }
    }
    ctx->pc = 0x444B30u;
label_444b30:
    // 0x444b30: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x444b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_444b34:
    // 0x444b34: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x444b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
label_444b38:
    // 0x444b38: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x444b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_444b3c:
    // 0x444b3c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x444b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_444b40:
    // 0x444b40: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x444b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
label_444b44:
    // 0x444b44: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x444b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_444b48:
    // 0x444b48: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x444b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_444b4c:
    // 0x444b4c: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x444b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_444b50:
    // 0x444b50: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x444b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_444b54:
    // 0x444b54: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x444b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_444b58:
    // 0x444b58: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x444b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_444b5c:
    // 0x444b5c: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x444b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_444b60:
    // 0x444b60: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x444b60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_444b64:
    // 0x444b64: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x444b64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_444b68:
    // 0x444b68: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x444b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_444b6c:
    // 0x444b6c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x444b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_444b70:
    // 0x444b70: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x444b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_444b74:
    // 0x444b74: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x444b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_444b78:
    // 0x444b78: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x444b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_444b7c:
    // 0x444b7c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x444b7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_444b80:
    // 0x444b80: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x444b80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_444b84:
    // 0x444b84: 0xc0892b0  jal         func_224AC0
label_444b88:
    if (ctx->pc == 0x444B88u) {
        ctx->pc = 0x444B88u;
            // 0x444b88: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x444B8Cu;
        goto label_444b8c;
    }
    ctx->pc = 0x444B84u;
    SET_GPR_U32(ctx, 31, 0x444B8Cu);
    ctx->pc = 0x444B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444B84u;
            // 0x444b88: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444B8Cu; }
        if (ctx->pc != 0x444B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444B8Cu; }
        if (ctx->pc != 0x444B8Cu) { return; }
    }
    ctx->pc = 0x444B8Cu;
label_444b8c:
    // 0x444b8c: 0xae200290  sw          $zero, 0x290($s1)
    ctx->pc = 0x444b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 0));
label_444b90:
    // 0x444b90: 0xc122c94  jal         func_48B250
label_444b94:
    if (ctx->pc == 0x444B94u) {
        ctx->pc = 0x444B94u;
            // 0x444b94: 0x8e24029c  lw          $a0, 0x29C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 668)));
        ctx->pc = 0x444B98u;
        goto label_444b98;
    }
    ctx->pc = 0x444B90u;
    SET_GPR_U32(ctx, 31, 0x444B98u);
    ctx->pc = 0x444B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444B90u;
            // 0x444b94: 0x8e24029c  lw          $a0, 0x29C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 668)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B250u;
    if (runtime->hasFunction(0x48B250u)) {
        auto targetFn = runtime->lookupFunction(0x48B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444B98u; }
        if (ctx->pc != 0x444B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B250_0x48b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444B98u; }
        if (ctx->pc != 0x444B98u) { return; }
    }
    ctx->pc = 0x444B98u;
label_444b98:
    // 0x444b98: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x444b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_444b9c:
    // 0x444b9c: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x444b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_444ba0:
    // 0x444ba0: 0xa222004c  sb          $v0, 0x4C($s1)
    ctx->pc = 0x444ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 76), (uint8_t)GPR_U32(ctx, 2));
label_444ba4:
    // 0x444ba4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x444ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_444ba8:
    // 0x444ba8: 0x8e2202f0  lw          $v0, 0x2F0($s1)
    ctx->pc = 0x444ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 752)));
label_444bac:
    // 0x444bac: 0x24840260  addiu       $a0, $a0, 0x260
    ctx->pc = 0x444bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 608));
label_444bb0:
    // 0x444bb0: 0x246302a0  addiu       $v1, $v1, 0x2A0
    ctx->pc = 0x444bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 672));
label_444bb4:
    // 0x444bb4: 0xac4400cc  sw          $a0, 0xCC($v0)
    ctx->pc = 0x444bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 4));
label_444bb8:
    // 0x444bb8: 0x8e2202f4  lw          $v0, 0x2F4($s1)
    ctx->pc = 0x444bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 756)));
label_444bbc:
    // 0x444bbc: 0xac4300cc  sw          $v1, 0xCC($v0)
    ctx->pc = 0x444bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 3));
label_444bc0:
    // 0x444bc0: 0x8e2402f0  lw          $a0, 0x2F0($s1)
    ctx->pc = 0x444bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 752)));
label_444bc4:
    // 0x444bc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x444bc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_444bc8:
    // 0x444bc8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x444bc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_444bcc:
    // 0x444bcc: 0x320f809  jalr        $t9
label_444bd0:
    if (ctx->pc == 0x444BD0u) {
        ctx->pc = 0x444BD4u;
        goto label_444bd4;
    }
    ctx->pc = 0x444BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x444BD4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x444BD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x444BD4u; }
            if (ctx->pc != 0x444BD4u) { return; }
        }
        }
    }
    ctx->pc = 0x444BD4u;
label_444bd4:
    // 0x444bd4: 0x8e2402f4  lw          $a0, 0x2F4($s1)
    ctx->pc = 0x444bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 756)));
label_444bd8:
    // 0x444bd8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x444bd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_444bdc:
    // 0x444bdc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x444bdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_444be0:
    // 0x444be0: 0x320f809  jalr        $t9
label_444be4:
    if (ctx->pc == 0x444BE4u) {
        ctx->pc = 0x444BE8u;
        goto label_444be8;
    }
    ctx->pc = 0x444BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x444BE8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x444BE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x444BE8u; }
            if (ctx->pc != 0x444BE8u) { return; }
        }
        }
    }
    ctx->pc = 0x444BE8u;
label_444be8:
    // 0x444be8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x444be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_444bec:
    // 0x444bec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x444becu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_444bf0:
    // 0x444bf0: 0x8c427528  lw          $v0, 0x7528($v0)
    ctx->pc = 0x444bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29992)));
label_444bf4:
    // 0x444bf4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x444bf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_444bf8:
    // 0x444bf8: 0x262602b0  addiu       $a2, $s1, 0x2B0
    ctx->pc = 0x444bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 688));
label_444bfc:
    // 0x444bfc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x444bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_444c00:
    // 0x444c00: 0x8c470094  lw          $a3, 0x94($v0)
    ctx->pc = 0x444c00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_444c04:
    // 0x444c04: 0x8d0302f0  lw          $v1, 0x2F0($t0)
    ctx->pc = 0x444c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 752)));
label_444c08:
    // 0x444c08: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x444c08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_444c0c:
    // 0x444c0c: 0x29220002  slti        $v0, $t1, 0x2
    ctx->pc = 0x444c0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
label_444c10:
    // 0x444c10: 0xac670080  sw          $a3, 0x80($v1)
    ctx->pc = 0x444c10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 7));
label_444c14:
    // 0x444c14: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x444c14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
label_444c18:
    // 0x444c18: 0xac660088  sw          $a2, 0x88($v1)
    ctx->pc = 0x444c18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 6));
label_444c1c:
    // 0x444c1c: 0xac60008c  sw          $zero, 0x8C($v1)
    ctx->pc = 0x444c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 0));
label_444c20:
    // 0x444c20: 0xac650090  sw          $a1, 0x90($v1)
    ctx->pc = 0x444c20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 5));
label_444c24:
    // 0x444c24: 0x8d0402f0  lw          $a0, 0x2F0($t0)
    ctx->pc = 0x444c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 752)));
label_444c28:
    // 0x444c28: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x444c28u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_444c2c:
    // 0x444c2c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x444c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_444c30:
    // 0x444c30: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x444c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_444c34:
    // 0x444c34: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_444c38:
    if (ctx->pc == 0x444C38u) {
        ctx->pc = 0x444C38u;
            // 0x444c38: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x444C3Cu;
        goto label_444c3c;
    }
    ctx->pc = 0x444C34u;
    {
        const bool branch_taken_0x444c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x444C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x444C34u;
            // 0x444c38: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444c34) {
            ctx->pc = 0x444C04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_444c04;
        }
    }
    ctx->pc = 0x444C3Cu;
label_444c3c:
    // 0x444c3c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x444c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_444c40:
    // 0x444c40: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x444c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_444c44:
    // 0x444c44: 0xa2220064  sb          $v0, 0x64($s1)
    ctx->pc = 0x444c44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 2));
label_444c48:
    // 0x444c48: 0xa2200065  sb          $zero, 0x65($s1)
    ctx->pc = 0x444c48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 0));
label_444c4c:
    // 0x444c4c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x444c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_444c50:
    // 0x444c50: 0xa2200068  sb          $zero, 0x68($s1)
    ctx->pc = 0x444c50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 0));
label_444c54:
    // 0x444c54: 0xa2230069  sb          $v1, 0x69($s1)
    ctx->pc = 0x444c54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 3));
label_444c58:
    // 0x444c58: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x444c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_444c5c:
    // 0x444c5c: 0x8c427528  lw          $v0, 0x7528($v0)
    ctx->pc = 0x444c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29992)));
label_444c60:
    // 0x444c60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x444c60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_444c64:
    // 0x444c64: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x444c64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_444c68:
    // 0x444c68: 0x320f809  jalr        $t9
label_444c6c:
    if (ctx->pc == 0x444C6Cu) {
        ctx->pc = 0x444C6Cu;
            // 0x444c6c: 0x8c450060  lw          $a1, 0x60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
        ctx->pc = 0x444C70u;
        goto label_444c70;
    }
    ctx->pc = 0x444C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x444C70u);
        ctx->pc = 0x444C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x444C68u;
            // 0x444c6c: 0x8c450060  lw          $a1, 0x60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x444C70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x444C70u; }
            if (ctx->pc != 0x444C70u) { return; }
        }
        }
    }
    ctx->pc = 0x444C70u;
label_444c70:
    // 0x444c70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x444c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_444c74:
    // 0x444c74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x444c74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_444c78:
    // 0x444c78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x444c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_444c7c:
    // 0x444c7c: 0x3e00008  jr          $ra
label_444c80:
    if (ctx->pc == 0x444C80u) {
        ctx->pc = 0x444C80u;
            // 0x444c80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x444C84u;
        goto label_444c84;
    }
    ctx->pc = 0x444C7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x444C7Cu;
            // 0x444c80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x444C84u;
label_444c84:
    // 0x444c84: 0x0  nop
    ctx->pc = 0x444c84u;
    // NOP
label_444c88:
    // 0x444c88: 0x0  nop
    ctx->pc = 0x444c88u;
    // NOP
label_444c8c:
    // 0x444c8c: 0x0  nop
    ctx->pc = 0x444c8cu;
    // NOP
}
