#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00464850
// Address: 0x464850 - 0x464e50
void sub_00464850_0x464850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00464850_0x464850");
#endif

    switch (ctx->pc) {
        case 0x464850u: goto label_464850;
        case 0x464854u: goto label_464854;
        case 0x464858u: goto label_464858;
        case 0x46485cu: goto label_46485c;
        case 0x464860u: goto label_464860;
        case 0x464864u: goto label_464864;
        case 0x464868u: goto label_464868;
        case 0x46486cu: goto label_46486c;
        case 0x464870u: goto label_464870;
        case 0x464874u: goto label_464874;
        case 0x464878u: goto label_464878;
        case 0x46487cu: goto label_46487c;
        case 0x464880u: goto label_464880;
        case 0x464884u: goto label_464884;
        case 0x464888u: goto label_464888;
        case 0x46488cu: goto label_46488c;
        case 0x464890u: goto label_464890;
        case 0x464894u: goto label_464894;
        case 0x464898u: goto label_464898;
        case 0x46489cu: goto label_46489c;
        case 0x4648a0u: goto label_4648a0;
        case 0x4648a4u: goto label_4648a4;
        case 0x4648a8u: goto label_4648a8;
        case 0x4648acu: goto label_4648ac;
        case 0x4648b0u: goto label_4648b0;
        case 0x4648b4u: goto label_4648b4;
        case 0x4648b8u: goto label_4648b8;
        case 0x4648bcu: goto label_4648bc;
        case 0x4648c0u: goto label_4648c0;
        case 0x4648c4u: goto label_4648c4;
        case 0x4648c8u: goto label_4648c8;
        case 0x4648ccu: goto label_4648cc;
        case 0x4648d0u: goto label_4648d0;
        case 0x4648d4u: goto label_4648d4;
        case 0x4648d8u: goto label_4648d8;
        case 0x4648dcu: goto label_4648dc;
        case 0x4648e0u: goto label_4648e0;
        case 0x4648e4u: goto label_4648e4;
        case 0x4648e8u: goto label_4648e8;
        case 0x4648ecu: goto label_4648ec;
        case 0x4648f0u: goto label_4648f0;
        case 0x4648f4u: goto label_4648f4;
        case 0x4648f8u: goto label_4648f8;
        case 0x4648fcu: goto label_4648fc;
        case 0x464900u: goto label_464900;
        case 0x464904u: goto label_464904;
        case 0x464908u: goto label_464908;
        case 0x46490cu: goto label_46490c;
        case 0x464910u: goto label_464910;
        case 0x464914u: goto label_464914;
        case 0x464918u: goto label_464918;
        case 0x46491cu: goto label_46491c;
        case 0x464920u: goto label_464920;
        case 0x464924u: goto label_464924;
        case 0x464928u: goto label_464928;
        case 0x46492cu: goto label_46492c;
        case 0x464930u: goto label_464930;
        case 0x464934u: goto label_464934;
        case 0x464938u: goto label_464938;
        case 0x46493cu: goto label_46493c;
        case 0x464940u: goto label_464940;
        case 0x464944u: goto label_464944;
        case 0x464948u: goto label_464948;
        case 0x46494cu: goto label_46494c;
        case 0x464950u: goto label_464950;
        case 0x464954u: goto label_464954;
        case 0x464958u: goto label_464958;
        case 0x46495cu: goto label_46495c;
        case 0x464960u: goto label_464960;
        case 0x464964u: goto label_464964;
        case 0x464968u: goto label_464968;
        case 0x46496cu: goto label_46496c;
        case 0x464970u: goto label_464970;
        case 0x464974u: goto label_464974;
        case 0x464978u: goto label_464978;
        case 0x46497cu: goto label_46497c;
        case 0x464980u: goto label_464980;
        case 0x464984u: goto label_464984;
        case 0x464988u: goto label_464988;
        case 0x46498cu: goto label_46498c;
        case 0x464990u: goto label_464990;
        case 0x464994u: goto label_464994;
        case 0x464998u: goto label_464998;
        case 0x46499cu: goto label_46499c;
        case 0x4649a0u: goto label_4649a0;
        case 0x4649a4u: goto label_4649a4;
        case 0x4649a8u: goto label_4649a8;
        case 0x4649acu: goto label_4649ac;
        case 0x4649b0u: goto label_4649b0;
        case 0x4649b4u: goto label_4649b4;
        case 0x4649b8u: goto label_4649b8;
        case 0x4649bcu: goto label_4649bc;
        case 0x4649c0u: goto label_4649c0;
        case 0x4649c4u: goto label_4649c4;
        case 0x4649c8u: goto label_4649c8;
        case 0x4649ccu: goto label_4649cc;
        case 0x4649d0u: goto label_4649d0;
        case 0x4649d4u: goto label_4649d4;
        case 0x4649d8u: goto label_4649d8;
        case 0x4649dcu: goto label_4649dc;
        case 0x4649e0u: goto label_4649e0;
        case 0x4649e4u: goto label_4649e4;
        case 0x4649e8u: goto label_4649e8;
        case 0x4649ecu: goto label_4649ec;
        case 0x4649f0u: goto label_4649f0;
        case 0x4649f4u: goto label_4649f4;
        case 0x4649f8u: goto label_4649f8;
        case 0x4649fcu: goto label_4649fc;
        case 0x464a00u: goto label_464a00;
        case 0x464a04u: goto label_464a04;
        case 0x464a08u: goto label_464a08;
        case 0x464a0cu: goto label_464a0c;
        case 0x464a10u: goto label_464a10;
        case 0x464a14u: goto label_464a14;
        case 0x464a18u: goto label_464a18;
        case 0x464a1cu: goto label_464a1c;
        case 0x464a20u: goto label_464a20;
        case 0x464a24u: goto label_464a24;
        case 0x464a28u: goto label_464a28;
        case 0x464a2cu: goto label_464a2c;
        case 0x464a30u: goto label_464a30;
        case 0x464a34u: goto label_464a34;
        case 0x464a38u: goto label_464a38;
        case 0x464a3cu: goto label_464a3c;
        case 0x464a40u: goto label_464a40;
        case 0x464a44u: goto label_464a44;
        case 0x464a48u: goto label_464a48;
        case 0x464a4cu: goto label_464a4c;
        case 0x464a50u: goto label_464a50;
        case 0x464a54u: goto label_464a54;
        case 0x464a58u: goto label_464a58;
        case 0x464a5cu: goto label_464a5c;
        case 0x464a60u: goto label_464a60;
        case 0x464a64u: goto label_464a64;
        case 0x464a68u: goto label_464a68;
        case 0x464a6cu: goto label_464a6c;
        case 0x464a70u: goto label_464a70;
        case 0x464a74u: goto label_464a74;
        case 0x464a78u: goto label_464a78;
        case 0x464a7cu: goto label_464a7c;
        case 0x464a80u: goto label_464a80;
        case 0x464a84u: goto label_464a84;
        case 0x464a88u: goto label_464a88;
        case 0x464a8cu: goto label_464a8c;
        case 0x464a90u: goto label_464a90;
        case 0x464a94u: goto label_464a94;
        case 0x464a98u: goto label_464a98;
        case 0x464a9cu: goto label_464a9c;
        case 0x464aa0u: goto label_464aa0;
        case 0x464aa4u: goto label_464aa4;
        case 0x464aa8u: goto label_464aa8;
        case 0x464aacu: goto label_464aac;
        case 0x464ab0u: goto label_464ab0;
        case 0x464ab4u: goto label_464ab4;
        case 0x464ab8u: goto label_464ab8;
        case 0x464abcu: goto label_464abc;
        case 0x464ac0u: goto label_464ac0;
        case 0x464ac4u: goto label_464ac4;
        case 0x464ac8u: goto label_464ac8;
        case 0x464accu: goto label_464acc;
        case 0x464ad0u: goto label_464ad0;
        case 0x464ad4u: goto label_464ad4;
        case 0x464ad8u: goto label_464ad8;
        case 0x464adcu: goto label_464adc;
        case 0x464ae0u: goto label_464ae0;
        case 0x464ae4u: goto label_464ae4;
        case 0x464ae8u: goto label_464ae8;
        case 0x464aecu: goto label_464aec;
        case 0x464af0u: goto label_464af0;
        case 0x464af4u: goto label_464af4;
        case 0x464af8u: goto label_464af8;
        case 0x464afcu: goto label_464afc;
        case 0x464b00u: goto label_464b00;
        case 0x464b04u: goto label_464b04;
        case 0x464b08u: goto label_464b08;
        case 0x464b0cu: goto label_464b0c;
        case 0x464b10u: goto label_464b10;
        case 0x464b14u: goto label_464b14;
        case 0x464b18u: goto label_464b18;
        case 0x464b1cu: goto label_464b1c;
        case 0x464b20u: goto label_464b20;
        case 0x464b24u: goto label_464b24;
        case 0x464b28u: goto label_464b28;
        case 0x464b2cu: goto label_464b2c;
        case 0x464b30u: goto label_464b30;
        case 0x464b34u: goto label_464b34;
        case 0x464b38u: goto label_464b38;
        case 0x464b3cu: goto label_464b3c;
        case 0x464b40u: goto label_464b40;
        case 0x464b44u: goto label_464b44;
        case 0x464b48u: goto label_464b48;
        case 0x464b4cu: goto label_464b4c;
        case 0x464b50u: goto label_464b50;
        case 0x464b54u: goto label_464b54;
        case 0x464b58u: goto label_464b58;
        case 0x464b5cu: goto label_464b5c;
        case 0x464b60u: goto label_464b60;
        case 0x464b64u: goto label_464b64;
        case 0x464b68u: goto label_464b68;
        case 0x464b6cu: goto label_464b6c;
        case 0x464b70u: goto label_464b70;
        case 0x464b74u: goto label_464b74;
        case 0x464b78u: goto label_464b78;
        case 0x464b7cu: goto label_464b7c;
        case 0x464b80u: goto label_464b80;
        case 0x464b84u: goto label_464b84;
        case 0x464b88u: goto label_464b88;
        case 0x464b8cu: goto label_464b8c;
        case 0x464b90u: goto label_464b90;
        case 0x464b94u: goto label_464b94;
        case 0x464b98u: goto label_464b98;
        case 0x464b9cu: goto label_464b9c;
        case 0x464ba0u: goto label_464ba0;
        case 0x464ba4u: goto label_464ba4;
        case 0x464ba8u: goto label_464ba8;
        case 0x464bacu: goto label_464bac;
        case 0x464bb0u: goto label_464bb0;
        case 0x464bb4u: goto label_464bb4;
        case 0x464bb8u: goto label_464bb8;
        case 0x464bbcu: goto label_464bbc;
        case 0x464bc0u: goto label_464bc0;
        case 0x464bc4u: goto label_464bc4;
        case 0x464bc8u: goto label_464bc8;
        case 0x464bccu: goto label_464bcc;
        case 0x464bd0u: goto label_464bd0;
        case 0x464bd4u: goto label_464bd4;
        case 0x464bd8u: goto label_464bd8;
        case 0x464bdcu: goto label_464bdc;
        case 0x464be0u: goto label_464be0;
        case 0x464be4u: goto label_464be4;
        case 0x464be8u: goto label_464be8;
        case 0x464becu: goto label_464bec;
        case 0x464bf0u: goto label_464bf0;
        case 0x464bf4u: goto label_464bf4;
        case 0x464bf8u: goto label_464bf8;
        case 0x464bfcu: goto label_464bfc;
        case 0x464c00u: goto label_464c00;
        case 0x464c04u: goto label_464c04;
        case 0x464c08u: goto label_464c08;
        case 0x464c0cu: goto label_464c0c;
        case 0x464c10u: goto label_464c10;
        case 0x464c14u: goto label_464c14;
        case 0x464c18u: goto label_464c18;
        case 0x464c1cu: goto label_464c1c;
        case 0x464c20u: goto label_464c20;
        case 0x464c24u: goto label_464c24;
        case 0x464c28u: goto label_464c28;
        case 0x464c2cu: goto label_464c2c;
        case 0x464c30u: goto label_464c30;
        case 0x464c34u: goto label_464c34;
        case 0x464c38u: goto label_464c38;
        case 0x464c3cu: goto label_464c3c;
        case 0x464c40u: goto label_464c40;
        case 0x464c44u: goto label_464c44;
        case 0x464c48u: goto label_464c48;
        case 0x464c4cu: goto label_464c4c;
        case 0x464c50u: goto label_464c50;
        case 0x464c54u: goto label_464c54;
        case 0x464c58u: goto label_464c58;
        case 0x464c5cu: goto label_464c5c;
        case 0x464c60u: goto label_464c60;
        case 0x464c64u: goto label_464c64;
        case 0x464c68u: goto label_464c68;
        case 0x464c6cu: goto label_464c6c;
        case 0x464c70u: goto label_464c70;
        case 0x464c74u: goto label_464c74;
        case 0x464c78u: goto label_464c78;
        case 0x464c7cu: goto label_464c7c;
        case 0x464c80u: goto label_464c80;
        case 0x464c84u: goto label_464c84;
        case 0x464c88u: goto label_464c88;
        case 0x464c8cu: goto label_464c8c;
        case 0x464c90u: goto label_464c90;
        case 0x464c94u: goto label_464c94;
        case 0x464c98u: goto label_464c98;
        case 0x464c9cu: goto label_464c9c;
        case 0x464ca0u: goto label_464ca0;
        case 0x464ca4u: goto label_464ca4;
        case 0x464ca8u: goto label_464ca8;
        case 0x464cacu: goto label_464cac;
        case 0x464cb0u: goto label_464cb0;
        case 0x464cb4u: goto label_464cb4;
        case 0x464cb8u: goto label_464cb8;
        case 0x464cbcu: goto label_464cbc;
        case 0x464cc0u: goto label_464cc0;
        case 0x464cc4u: goto label_464cc4;
        case 0x464cc8u: goto label_464cc8;
        case 0x464cccu: goto label_464ccc;
        case 0x464cd0u: goto label_464cd0;
        case 0x464cd4u: goto label_464cd4;
        case 0x464cd8u: goto label_464cd8;
        case 0x464cdcu: goto label_464cdc;
        case 0x464ce0u: goto label_464ce0;
        case 0x464ce4u: goto label_464ce4;
        case 0x464ce8u: goto label_464ce8;
        case 0x464cecu: goto label_464cec;
        case 0x464cf0u: goto label_464cf0;
        case 0x464cf4u: goto label_464cf4;
        case 0x464cf8u: goto label_464cf8;
        case 0x464cfcu: goto label_464cfc;
        case 0x464d00u: goto label_464d00;
        case 0x464d04u: goto label_464d04;
        case 0x464d08u: goto label_464d08;
        case 0x464d0cu: goto label_464d0c;
        case 0x464d10u: goto label_464d10;
        case 0x464d14u: goto label_464d14;
        case 0x464d18u: goto label_464d18;
        case 0x464d1cu: goto label_464d1c;
        case 0x464d20u: goto label_464d20;
        case 0x464d24u: goto label_464d24;
        case 0x464d28u: goto label_464d28;
        case 0x464d2cu: goto label_464d2c;
        case 0x464d30u: goto label_464d30;
        case 0x464d34u: goto label_464d34;
        case 0x464d38u: goto label_464d38;
        case 0x464d3cu: goto label_464d3c;
        case 0x464d40u: goto label_464d40;
        case 0x464d44u: goto label_464d44;
        case 0x464d48u: goto label_464d48;
        case 0x464d4cu: goto label_464d4c;
        case 0x464d50u: goto label_464d50;
        case 0x464d54u: goto label_464d54;
        case 0x464d58u: goto label_464d58;
        case 0x464d5cu: goto label_464d5c;
        case 0x464d60u: goto label_464d60;
        case 0x464d64u: goto label_464d64;
        case 0x464d68u: goto label_464d68;
        case 0x464d6cu: goto label_464d6c;
        case 0x464d70u: goto label_464d70;
        case 0x464d74u: goto label_464d74;
        case 0x464d78u: goto label_464d78;
        case 0x464d7cu: goto label_464d7c;
        case 0x464d80u: goto label_464d80;
        case 0x464d84u: goto label_464d84;
        case 0x464d88u: goto label_464d88;
        case 0x464d8cu: goto label_464d8c;
        case 0x464d90u: goto label_464d90;
        case 0x464d94u: goto label_464d94;
        case 0x464d98u: goto label_464d98;
        case 0x464d9cu: goto label_464d9c;
        case 0x464da0u: goto label_464da0;
        case 0x464da4u: goto label_464da4;
        case 0x464da8u: goto label_464da8;
        case 0x464dacu: goto label_464dac;
        case 0x464db0u: goto label_464db0;
        case 0x464db4u: goto label_464db4;
        case 0x464db8u: goto label_464db8;
        case 0x464dbcu: goto label_464dbc;
        case 0x464dc0u: goto label_464dc0;
        case 0x464dc4u: goto label_464dc4;
        case 0x464dc8u: goto label_464dc8;
        case 0x464dccu: goto label_464dcc;
        case 0x464dd0u: goto label_464dd0;
        case 0x464dd4u: goto label_464dd4;
        case 0x464dd8u: goto label_464dd8;
        case 0x464ddcu: goto label_464ddc;
        case 0x464de0u: goto label_464de0;
        case 0x464de4u: goto label_464de4;
        case 0x464de8u: goto label_464de8;
        case 0x464decu: goto label_464dec;
        case 0x464df0u: goto label_464df0;
        case 0x464df4u: goto label_464df4;
        case 0x464df8u: goto label_464df8;
        case 0x464dfcu: goto label_464dfc;
        case 0x464e00u: goto label_464e00;
        case 0x464e04u: goto label_464e04;
        case 0x464e08u: goto label_464e08;
        case 0x464e0cu: goto label_464e0c;
        case 0x464e10u: goto label_464e10;
        case 0x464e14u: goto label_464e14;
        case 0x464e18u: goto label_464e18;
        case 0x464e1cu: goto label_464e1c;
        case 0x464e20u: goto label_464e20;
        case 0x464e24u: goto label_464e24;
        case 0x464e28u: goto label_464e28;
        case 0x464e2cu: goto label_464e2c;
        case 0x464e30u: goto label_464e30;
        case 0x464e34u: goto label_464e34;
        case 0x464e38u: goto label_464e38;
        case 0x464e3cu: goto label_464e3c;
        case 0x464e40u: goto label_464e40;
        case 0x464e44u: goto label_464e44;
        case 0x464e48u: goto label_464e48;
        case 0x464e4cu: goto label_464e4c;
        default: break;
    }

    ctx->pc = 0x464850u;

label_464850:
    // 0x464850: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x464850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_464854:
    // 0x464854: 0x8c6375e8  lw          $v1, 0x75E8($v1)
    ctx->pc = 0x464854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30184)));
label_464858:
    // 0x464858: 0xc4800298  lwc1        $f0, 0x298($a0)
    ctx->pc = 0x464858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46485c:
    // 0x46485c: 0x8c63008c  lw          $v1, 0x8C($v1)
    ctx->pc = 0x46485cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_464860:
    // 0x464860: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x464860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_464864:
    // 0x464864: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x464864u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_464868:
    // 0x464868: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_46486c:
    if (ctx->pc == 0x46486Cu) {
        ctx->pc = 0x46486Cu;
            // 0x46486c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x464870u;
        goto label_464870;
    }
    ctx->pc = 0x464868u;
    {
        const bool branch_taken_0x464868 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x46486Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x464868u;
            // 0x46486c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464868) {
            ctx->pc = 0x464874u;
            goto label_464874;
        }
    }
    ctx->pc = 0x464870u;
label_464870:
    // 0x464870: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x464870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_464874:
    // 0x464874: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
label_464878:
    if (ctx->pc == 0x464878u) {
        ctx->pc = 0x464878u;
            // 0x464878: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x46487Cu;
        goto label_46487c;
    }
    ctx->pc = 0x464874u;
    {
        const bool branch_taken_0x464874 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x464874) {
            ctx->pc = 0x464878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x464874u;
            // 0x464878: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x464888u;
            goto label_464888;
        }
    }
    ctx->pc = 0x46487Cu;
label_46487c:
    // 0x46487c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x46487cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_464880:
    // 0x464880: 0x10000007  b           . + 4 + (0x7 << 2)
label_464884:
    if (ctx->pc == 0x464884u) {
        ctx->pc = 0x464884u;
            // 0x464884: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x464888u;
        goto label_464888;
    }
    ctx->pc = 0x464880u;
    {
        const bool branch_taken_0x464880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x464884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x464880u;
            // 0x464884: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x464880) {
            ctx->pc = 0x4648A0u;
            goto label_4648a0;
        }
    }
    ctx->pc = 0x464888u;
label_464888:
    // 0x464888: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x464888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_46488c:
    // 0x46488c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x46488cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_464890:
    // 0x464890: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x464890u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_464894:
    // 0x464894: 0x0  nop
    ctx->pc = 0x464894u;
    // NOP
label_464898:
    // 0x464898: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x464898u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_46489c:
    // 0x46489c: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x46489cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_4648a0:
    // 0x4648a0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4648a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4648a4:
    // 0x4648a4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4648a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4648a8:
    // 0x4648a8: 0xc4810298  lwc1        $f1, 0x298($a0)
    ctx->pc = 0x4648a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4648ac:
    // 0x4648ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4648acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4648b0:
    // 0x4648b0: 0xc4820294  lwc1        $f2, 0x294($a0)
    ctx->pc = 0x4648b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4648b4:
    // 0x4648b4: 0xc4630018  lwc1        $f3, 0x18($v1)
    ctx->pc = 0x4648b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4648b8:
    // 0x4648b8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4648b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4648bc:
    // 0x4648bc: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x4648bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_4648c0:
    // 0x4648c0: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x4648c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
label_4648c4:
    // 0x4648c4: 0x3e00008  jr          $ra
label_4648c8:
    if (ctx->pc == 0x4648C8u) {
        ctx->pc = 0x4648C8u;
            // 0x4648c8: 0xe4800298  swc1        $f0, 0x298($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 664), bits); }
        ctx->pc = 0x4648CCu;
        goto label_4648cc;
    }
    ctx->pc = 0x4648C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4648C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4648C4u;
            // 0x4648c8: 0xe4800298  swc1        $f0, 0x298($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 664), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4648CCu;
label_4648cc:
    // 0x4648cc: 0x0  nop
    ctx->pc = 0x4648ccu;
    // NOP
label_4648d0:
    // 0x4648d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4648d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4648d4:
    // 0x4648d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4648d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4648d8:
    // 0x4648d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4648d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4648dc:
    // 0x4648dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4648dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4648e0:
    // 0x4648e0: 0x8c84029c  lw          $a0, 0x29C($a0)
    ctx->pc = 0x4648e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 668)));
label_4648e4:
    // 0x4648e4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4648e8:
    if (ctx->pc == 0x4648E8u) {
        ctx->pc = 0x4648E8u;
            // 0x4648e8: 0xae00029c  sw          $zero, 0x29C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 0));
        ctx->pc = 0x4648ECu;
        goto label_4648ec;
    }
    ctx->pc = 0x4648E4u;
    {
        const bool branch_taken_0x4648e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4648e4) {
            ctx->pc = 0x4648E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4648E4u;
            // 0x4648e8: 0xae00029c  sw          $zero, 0x29C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x464900u;
            goto label_464900;
        }
    }
    ctx->pc = 0x4648ECu;
label_4648ec:
    // 0x4648ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4648ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4648f0:
    // 0x4648f0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4648f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4648f4:
    // 0x4648f4: 0x320f809  jalr        $t9
label_4648f8:
    if (ctx->pc == 0x4648F8u) {
        ctx->pc = 0x4648F8u;
            // 0x4648f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4648FCu;
        goto label_4648fc;
    }
    ctx->pc = 0x4648F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4648FCu);
        ctx->pc = 0x4648F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4648F4u;
            // 0x4648f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4648FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4648FCu; }
            if (ctx->pc != 0x4648FCu) { return; }
        }
        }
    }
    ctx->pc = 0x4648FCu;
label_4648fc:
    // 0x4648fc: 0xae00029c  sw          $zero, 0x29C($s0)
    ctx->pc = 0x4648fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 0));
label_464900:
    // 0x464900: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x464900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_464904:
    // 0x464904: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_464908:
    if (ctx->pc == 0x464908u) {
        ctx->pc = 0x464908u;
            // 0x464908: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x46490Cu;
        goto label_46490c;
    }
    ctx->pc = 0x464904u;
    {
        const bool branch_taken_0x464904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x464904) {
            ctx->pc = 0x464908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x464904u;
            // 0x464908: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x464920u;
            goto label_464920;
        }
    }
    ctx->pc = 0x46490Cu;
label_46490c:
    // 0x46490c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x46490cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_464910:
    // 0x464910: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x464910u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_464914:
    // 0x464914: 0x320f809  jalr        $t9
label_464918:
    if (ctx->pc == 0x464918u) {
        ctx->pc = 0x464918u;
            // 0x464918: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x46491Cu;
        goto label_46491c;
    }
    ctx->pc = 0x464914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46491Cu);
        ctx->pc = 0x464918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x464914u;
            // 0x464918: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46491Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46491Cu; }
            if (ctx->pc != 0x46491Cu) { return; }
        }
        }
    }
    ctx->pc = 0x46491Cu;
label_46491c:
    // 0x46491c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x46491cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_464920:
    // 0x464920: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x464920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_464924:
    // 0x464924: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_464928:
    if (ctx->pc == 0x464928u) {
        ctx->pc = 0x464928u;
            // 0x464928: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x46492Cu;
        goto label_46492c;
    }
    ctx->pc = 0x464924u;
    {
        const bool branch_taken_0x464924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x464924) {
            ctx->pc = 0x464928u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x464924u;
            // 0x464928: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x464940u;
            goto label_464940;
        }
    }
    ctx->pc = 0x46492Cu;
label_46492c:
    // 0x46492c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46492cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_464930:
    // 0x464930: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x464930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_464934:
    // 0x464934: 0x320f809  jalr        $t9
label_464938:
    if (ctx->pc == 0x464938u) {
        ctx->pc = 0x464938u;
            // 0x464938: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x46493Cu;
        goto label_46493c;
    }
    ctx->pc = 0x464934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46493Cu);
        ctx->pc = 0x464938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x464934u;
            // 0x464938: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46493Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46493Cu; }
            if (ctx->pc != 0x46493Cu) { return; }
        }
        }
    }
    ctx->pc = 0x46493Cu;
label_46493c:
    // 0x46493c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x46493cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_464940:
    // 0x464940: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x464940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_464944:
    // 0x464944: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x464944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_464948:
    // 0x464948: 0x3e00008  jr          $ra
label_46494c:
    if (ctx->pc == 0x46494Cu) {
        ctx->pc = 0x46494Cu;
            // 0x46494c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x464950u;
        goto label_464950;
    }
    ctx->pc = 0x464948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46494Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x464948u;
            // 0x46494c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x464950u;
label_464950:
    // 0x464950: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x464950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_464954:
    // 0x464954: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x464954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_464958:
    // 0x464958: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x464958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_46495c:
    // 0x46495c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46495cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_464960:
    // 0x464960: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x464960u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_464964:
    // 0x464964: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x464964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_464968:
    // 0x464968: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x464968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_46496c:
    // 0x46496c: 0xc0892d0  jal         func_224B40
label_464970:
    if (ctx->pc == 0x464970u) {
        ctx->pc = 0x464970u;
            // 0x464970: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x464974u;
        goto label_464974;
    }
    ctx->pc = 0x46496Cu;
    SET_GPR_U32(ctx, 31, 0x464974u);
    ctx->pc = 0x464970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46496Cu;
            // 0x464970: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464974u; }
        if (ctx->pc != 0x464974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464974u; }
        if (ctx->pc != 0x464974u) { return; }
    }
    ctx->pc = 0x464974u;
label_464974:
    // 0x464974: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x464974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_464978:
    // 0x464978: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x464978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_46497c:
    // 0x46497c: 0x8c4275e8  lw          $v0, 0x75E8($v0)
    ctx->pc = 0x46497cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30184)));
label_464980:
    // 0x464980: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x464980u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_464984:
    // 0x464984: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x464984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_464988:
    // 0x464988: 0xc0b6e68  jal         func_2DB9A0
label_46498c:
    if (ctx->pc == 0x46498Cu) {
        ctx->pc = 0x46498Cu;
            // 0x46498c: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->pc = 0x464990u;
        goto label_464990;
    }
    ctx->pc = 0x464988u;
    SET_GPR_U32(ctx, 31, 0x464990u);
    ctx->pc = 0x46498Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464988u;
            // 0x46498c: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464990u; }
        if (ctx->pc != 0x464990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464990u; }
        if (ctx->pc != 0x464990u) { return; }
    }
    ctx->pc = 0x464990u;
label_464990:
    // 0x464990: 0xc0b6dac  jal         func_2DB6B0
label_464994:
    if (ctx->pc == 0x464994u) {
        ctx->pc = 0x464994u;
            // 0x464994: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x464998u;
        goto label_464998;
    }
    ctx->pc = 0x464990u;
    SET_GPR_U32(ctx, 31, 0x464998u);
    ctx->pc = 0x464994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464990u;
            // 0x464994: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464998u; }
        if (ctx->pc != 0x464998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464998u; }
        if (ctx->pc != 0x464998u) { return; }
    }
    ctx->pc = 0x464998u;
label_464998:
    // 0x464998: 0xc0cac94  jal         func_32B250
label_46499c:
    if (ctx->pc == 0x46499Cu) {
        ctx->pc = 0x46499Cu;
            // 0x46499c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4649A0u;
        goto label_4649a0;
    }
    ctx->pc = 0x464998u;
    SET_GPR_U32(ctx, 31, 0x4649A0u);
    ctx->pc = 0x46499Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464998u;
            // 0x46499c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4649A0u; }
        if (ctx->pc != 0x4649A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4649A0u; }
        if (ctx->pc != 0x4649A0u) { return; }
    }
    ctx->pc = 0x4649A0u;
label_4649a0:
    // 0x4649a0: 0xc0cac84  jal         func_32B210
label_4649a4:
    if (ctx->pc == 0x4649A4u) {
        ctx->pc = 0x4649A4u;
            // 0x4649a4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4649A8u;
        goto label_4649a8;
    }
    ctx->pc = 0x4649A0u;
    SET_GPR_U32(ctx, 31, 0x4649A8u);
    ctx->pc = 0x4649A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4649A0u;
            // 0x4649a4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4649A8u; }
        if (ctx->pc != 0x4649A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4649A8u; }
        if (ctx->pc != 0x4649A8u) { return; }
    }
    ctx->pc = 0x4649A8u;
label_4649a8:
    // 0x4649a8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4649a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4649ac:
    // 0x4649ac: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x4649acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4649b0:
    // 0x4649b0: 0xc44dc910  lwc1        $f13, -0x36F0($v0)
    ctx->pc = 0x4649b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4649b4:
    // 0x4649b4: 0xc0a562c  jal         func_2958B0
label_4649b8:
    if (ctx->pc == 0x4649B8u) {
        ctx->pc = 0x4649B8u;
            // 0x4649b8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4649BCu;
        goto label_4649bc;
    }
    ctx->pc = 0x4649B4u;
    SET_GPR_U32(ctx, 31, 0x4649BCu);
    ctx->pc = 0x4649B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4649B4u;
            // 0x4649b8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2958B0u;
    if (runtime->hasFunction(0x2958B0u)) {
        auto targetFn = runtime->lookupFunction(0x2958B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4649BCu; }
        if (ctx->pc != 0x4649BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002958B0_0x2958b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4649BCu; }
        if (ctx->pc != 0x4649BCu) { return; }
    }
    ctx->pc = 0x4649BCu;
label_4649bc:
    // 0x4649bc: 0xafb000d4  sw          $s0, 0xD4($sp)
    ctx->pc = 0x4649bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 16));
label_4649c0:
    // 0x4649c0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x4649c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_4649c4:
    // 0x4649c4: 0xc6670018  lwc1        $f7, 0x18($s3)
    ctx->pc = 0x4649c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_4649c8:
    // 0x4649c8: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x4649c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4649cc:
    // 0x4649cc: 0xc6660014  lwc1        $f6, 0x14($s3)
    ctx->pc = 0x4649ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4649d0:
    // 0x4649d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4649d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4649d4:
    // 0x4649d4: 0xc6650010  lwc1        $f5, 0x10($s3)
    ctx->pc = 0x4649d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4649d8:
    // 0x4649d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4649d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4649dc:
    // 0x4649dc: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x4649dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4649e0:
    // 0x4649e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4649e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4649e4:
    // 0x4649e4: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x4649e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4649e8:
    // 0x4649e8: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x4649e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4649ec:
    // 0x4649ec: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x4649ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4649f0:
    // 0x4649f0: 0xafa4017c  sw          $a0, 0x17C($sp)
    ctx->pc = 0x4649f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 4));
label_4649f4:
    // 0x4649f4: 0xe7a20128  swc1        $f2, 0x128($sp)
    ctx->pc = 0x4649f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_4649f8:
    // 0x4649f8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4649f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4649fc:
    // 0x4649fc: 0xe7a1012c  swc1        $f1, 0x12C($sp)
    ctx->pc = 0x4649fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_464a00:
    // 0x464a00: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x464a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_464a04:
    // 0x464a04: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x464a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_464a08:
    // 0x464a08: 0xa3a70180  sb          $a3, 0x180($sp)
    ctx->pc = 0x464a08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 7));
label_464a0c:
    // 0x464a0c: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x464a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_464a10:
    // 0x464a10: 0xa3a30182  sb          $v1, 0x182($sp)
    ctx->pc = 0x464a10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 386), (uint8_t)GPR_U32(ctx, 3));
label_464a14:
    // 0x464a14: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x464a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_464a18:
    // 0x464a18: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x464a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_464a1c:
    // 0x464a1c: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x464a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_464a20:
    // 0x464a20: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x464a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_464a24:
    // 0x464a24: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x464a24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_464a28:
    // 0x464a28: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x464a28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_464a2c:
    // 0x464a2c: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x464a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_464a30:
    // 0x464a30: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x464a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_464a34:
    // 0x464a34: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x464a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_464a38:
    // 0x464a38: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x464a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_464a3c:
    // 0x464a3c: 0xe7a20140  swc1        $f2, 0x140($sp)
    ctx->pc = 0x464a3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_464a40:
    // 0x464a40: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x464a40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_464a44:
    // 0x464a44: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x464a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_464a48:
    // 0x464a48: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x464a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_464a4c:
    // 0x464a4c: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x464a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_464a50:
    // 0x464a50: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x464a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_464a54:
    // 0x464a54: 0xe7a2014c  swc1        $f2, 0x14C($sp)
    ctx->pc = 0x464a54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_464a58:
    // 0x464a58: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x464a58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_464a5c:
    // 0x464a5c: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x464a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_464a60:
    // 0x464a60: 0xc7a400a0  lwc1        $f4, 0xA0($sp)
    ctx->pc = 0x464a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_464a64:
    // 0x464a64: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x464a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_464a68:
    // 0x464a68: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x464a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_464a6c:
    // 0x464a6c: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x464a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_464a70:
    // 0x464a70: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x464a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_464a74:
    // 0x464a74: 0xe7a500e0  swc1        $f5, 0xE0($sp)
    ctx->pc = 0x464a74u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_464a78:
    // 0x464a78: 0xe7a600e4  swc1        $f6, 0xE4($sp)
    ctx->pc = 0x464a78u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_464a7c:
    // 0x464a7c: 0xe7a700e8  swc1        $f7, 0xE8($sp)
    ctx->pc = 0x464a7cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_464a80:
    // 0x464a80: 0xe7a40120  swc1        $f4, 0x120($sp)
    ctx->pc = 0x464a80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_464a84:
    // 0x464a84: 0xe7a30124  swc1        $f3, 0x124($sp)
    ctx->pc = 0x464a84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_464a88:
    // 0x464a88: 0xe7a20158  swc1        $f2, 0x158($sp)
    ctx->pc = 0x464a88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_464a8c:
    // 0x464a8c: 0xe7a1015c  swc1        $f1, 0x15C($sp)
    ctx->pc = 0x464a8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_464a90:
    // 0x464a90: 0xc0a7a88  jal         func_29EA20
label_464a94:
    if (ctx->pc == 0x464A94u) {
        ctx->pc = 0x464A94u;
            // 0x464a94: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->pc = 0x464A98u;
        goto label_464a98;
    }
    ctx->pc = 0x464A90u;
    SET_GPR_U32(ctx, 31, 0x464A98u);
    ctx->pc = 0x464A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464A90u;
            // 0x464a94: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464A98u; }
        if (ctx->pc != 0x464A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464A98u; }
        if (ctx->pc != 0x464A98u) { return; }
    }
    ctx->pc = 0x464A98u;
label_464a98:
    // 0x464a98: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x464a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_464a9c:
    // 0x464a9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x464a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_464aa0:
    // 0x464aa0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_464aa4:
    if (ctx->pc == 0x464AA4u) {
        ctx->pc = 0x464AA4u;
            // 0x464aa4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x464AA8u;
        goto label_464aa8;
    }
    ctx->pc = 0x464AA0u;
    {
        const bool branch_taken_0x464aa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x464AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x464AA0u;
            // 0x464aa4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464aa0) {
            ctx->pc = 0x464AF0u;
            goto label_464af0;
        }
    }
    ctx->pc = 0x464AA8u;
label_464aa8:
    // 0x464aa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x464aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_464aac:
    // 0x464aac: 0xc088ef4  jal         func_223BD0
label_464ab0:
    if (ctx->pc == 0x464AB0u) {
        ctx->pc = 0x464AB0u;
            // 0x464ab0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x464AB4u;
        goto label_464ab4;
    }
    ctx->pc = 0x464AACu;
    SET_GPR_U32(ctx, 31, 0x464AB4u);
    ctx->pc = 0x464AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464AACu;
            // 0x464ab0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464AB4u; }
        if (ctx->pc != 0x464AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464AB4u; }
        if (ctx->pc != 0x464AB4u) { return; }
    }
    ctx->pc = 0x464AB4u;
label_464ab4:
    // 0x464ab4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x464ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_464ab8:
    // 0x464ab8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x464ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_464abc:
    // 0x464abc: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x464abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_464ac0:
    // 0x464ac0: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x464ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_464ac4:
    // 0x464ac4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x464ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_464ac8:
    // 0x464ac8: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x464ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_464acc:
    // 0x464acc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x464accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_464ad0:
    // 0x464ad0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x464ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_464ad4:
    // 0x464ad4: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x464ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_464ad8:
    // 0x464ad8: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x464ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_464adc:
    // 0x464adc: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x464adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
label_464ae0:
    // 0x464ae0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x464ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_464ae4:
    // 0x464ae4: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x464ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_464ae8:
    // 0x464ae8: 0xc088b38  jal         func_222CE0
label_464aec:
    if (ctx->pc == 0x464AECu) {
        ctx->pc = 0x464AECu;
            // 0x464aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x464AF0u;
        goto label_464af0;
    }
    ctx->pc = 0x464AE8u;
    SET_GPR_U32(ctx, 31, 0x464AF0u);
    ctx->pc = 0x464AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464AE8u;
            // 0x464aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464AF0u; }
        if (ctx->pc != 0x464AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464AF0u; }
        if (ctx->pc != 0x464AF0u) { return; }
    }
    ctx->pc = 0x464AF0u;
label_464af0:
    // 0x464af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x464af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_464af4:
    // 0x464af4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x464af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_464af8:
    // 0x464af8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x464af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_464afc:
    // 0x464afc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x464afcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_464b00:
    // 0x464b00: 0xc08914c  jal         func_224530
label_464b04:
    if (ctx->pc == 0x464B04u) {
        ctx->pc = 0x464B04u;
            // 0x464b04: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x464B08u;
        goto label_464b08;
    }
    ctx->pc = 0x464B00u;
    SET_GPR_U32(ctx, 31, 0x464B08u);
    ctx->pc = 0x464B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464B00u;
            // 0x464b04: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464B08u; }
        if (ctx->pc != 0x464B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464B08u; }
        if (ctx->pc != 0x464B08u) { return; }
    }
    ctx->pc = 0x464B08u;
label_464b08:
    // 0x464b08: 0xc6620018  lwc1        $f2, 0x18($s3)
    ctx->pc = 0x464b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_464b0c:
    // 0x464b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x464b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_464b10:
    // 0x464b10: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x464b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_464b14:
    // 0x464b14: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x464b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_464b18:
    // 0x464b18: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x464b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_464b1c:
    // 0x464b1c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x464b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_464b20:
    // 0x464b20: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x464b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_464b24:
    // 0x464b24: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x464b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_464b28:
    // 0x464b28: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x464b28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_464b2c:
    // 0x464b2c: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x464b2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_464b30:
    // 0x464b30: 0xc663002c  lwc1        $f3, 0x2C($s3)
    ctx->pc = 0x464b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_464b34:
    // 0x464b34: 0xc6620028  lwc1        $f2, 0x28($s3)
    ctx->pc = 0x464b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_464b38:
    // 0x464b38: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x464b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_464b3c:
    // 0x464b3c: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x464b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_464b40:
    // 0x464b40: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x464b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_464b44:
    // 0x464b44: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x464b44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_464b48:
    // 0x464b48: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x464b48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_464b4c:
    // 0x464b4c: 0xc0892b0  jal         func_224AC0
label_464b50:
    if (ctx->pc == 0x464B50u) {
        ctx->pc = 0x464B50u;
            // 0x464b50: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x464B54u;
        goto label_464b54;
    }
    ctx->pc = 0x464B4Cu;
    SET_GPR_U32(ctx, 31, 0x464B54u);
    ctx->pc = 0x464B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464B4Cu;
            // 0x464b50: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464B54u; }
        if (ctx->pc != 0x464B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464B54u; }
        if (ctx->pc != 0x464B54u) { return; }
    }
    ctx->pc = 0x464B54u;
label_464b54:
    // 0x464b54: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x464b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_464b58:
    // 0x464b58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x464b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_464b5c:
    // 0x464b5c: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x464b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_464b60:
    // 0x464b60: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x464b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_464b64:
    // 0x464b64: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x464b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_464b68:
    // 0x464b68: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x464b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_464b6c:
    // 0x464b6c: 0xc0891d8  jal         func_224760
label_464b70:
    if (ctx->pc == 0x464B70u) {
        ctx->pc = 0x464B70u;
            // 0x464b70: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x464B74u;
        goto label_464b74;
    }
    ctx->pc = 0x464B6Cu;
    SET_GPR_U32(ctx, 31, 0x464B74u);
    ctx->pc = 0x464B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464B6Cu;
            // 0x464b70: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464B74u; }
        if (ctx->pc != 0x464B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464B74u; }
        if (ctx->pc != 0x464B74u) { return; }
    }
    ctx->pc = 0x464B74u;
label_464b74:
    // 0x464b74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x464b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_464b78:
    // 0x464b78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x464b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_464b7c:
    // 0x464b7c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x464b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_464b80:
    // 0x464b80: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x464b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_464b84:
    // 0x464b84: 0xc08c164  jal         func_230590
label_464b88:
    if (ctx->pc == 0x464B88u) {
        ctx->pc = 0x464B88u;
            // 0x464b88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x464B8Cu;
        goto label_464b8c;
    }
    ctx->pc = 0x464B84u;
    SET_GPR_U32(ctx, 31, 0x464B8Cu);
    ctx->pc = 0x464B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464B84u;
            // 0x464b88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464B8Cu; }
        if (ctx->pc != 0x464B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464B8Cu; }
        if (ctx->pc != 0x464B8Cu) { return; }
    }
    ctx->pc = 0x464B8Cu;
label_464b8c:
    // 0x464b8c: 0xae700050  sw          $s0, 0x50($s3)
    ctx->pc = 0x464b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 16));
label_464b90:
    // 0x464b90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x464b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_464b94:
    // 0x464b94: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x464b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_464b98:
    // 0x464b98: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x464b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_464b9c:
    // 0x464b9c: 0xc0a7a88  jal         func_29EA20
label_464ba0:
    if (ctx->pc == 0x464BA0u) {
        ctx->pc = 0x464BA0u;
            // 0x464ba0: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x464BA4u;
        goto label_464ba4;
    }
    ctx->pc = 0x464B9Cu;
    SET_GPR_U32(ctx, 31, 0x464BA4u);
    ctx->pc = 0x464BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464B9Cu;
            // 0x464ba0: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464BA4u; }
        if (ctx->pc != 0x464BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464BA4u; }
        if (ctx->pc != 0x464BA4u) { return; }
    }
    ctx->pc = 0x464BA4u;
label_464ba4:
    // 0x464ba4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x464ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_464ba8:
    // 0x464ba8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x464ba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_464bac:
    // 0x464bac: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_464bb0:
    if (ctx->pc == 0x464BB0u) {
        ctx->pc = 0x464BB0u;
            // 0x464bb0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x464BB4u;
        goto label_464bb4;
    }
    ctx->pc = 0x464BACu;
    {
        const bool branch_taken_0x464bac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x464BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x464BACu;
            // 0x464bb0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464bac) {
            ctx->pc = 0x464BD0u;
            goto label_464bd0;
        }
    }
    ctx->pc = 0x464BB4u;
label_464bb4:
    // 0x464bb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x464bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_464bb8:
    // 0x464bb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x464bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_464bbc:
    // 0x464bbc: 0xc0869d0  jal         func_21A740
label_464bc0:
    if (ctx->pc == 0x464BC0u) {
        ctx->pc = 0x464BC0u;
            // 0x464bc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x464BC4u;
        goto label_464bc4;
    }
    ctx->pc = 0x464BBCu;
    SET_GPR_U32(ctx, 31, 0x464BC4u);
    ctx->pc = 0x464BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464BBCu;
            // 0x464bc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464BC4u; }
        if (ctx->pc != 0x464BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464BC4u; }
        if (ctx->pc != 0x464BC4u) { return; }
    }
    ctx->pc = 0x464BC4u;
label_464bc4:
    // 0x464bc4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x464bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_464bc8:
    // 0x464bc8: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x464bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_464bcc:
    // 0x464bcc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x464bccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_464bd0:
    // 0x464bd0: 0xae110210  sw          $s1, 0x210($s0)
    ctx->pc = 0x464bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 17));
label_464bd4:
    // 0x464bd4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x464bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_464bd8:
    // 0x464bd8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x464bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_464bdc:
    // 0x464bdc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x464bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_464be0:
    // 0x464be0: 0xc08c650  jal         func_231940
label_464be4:
    if (ctx->pc == 0x464BE4u) {
        ctx->pc = 0x464BE4u;
            // 0x464be4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x464BE8u;
        goto label_464be8;
    }
    ctx->pc = 0x464BE0u;
    SET_GPR_U32(ctx, 31, 0x464BE8u);
    ctx->pc = 0x464BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464BE0u;
            // 0x464be4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464BE8u; }
        if (ctx->pc != 0x464BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464BE8u; }
        if (ctx->pc != 0x464BE8u) { return; }
    }
    ctx->pc = 0x464BE8u;
label_464be8:
    // 0x464be8: 0xc040180  jal         func_100600
label_464bec:
    if (ctx->pc == 0x464BECu) {
        ctx->pc = 0x464BECu;
            // 0x464bec: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x464BF0u;
        goto label_464bf0;
    }
    ctx->pc = 0x464BE8u;
    SET_GPR_U32(ctx, 31, 0x464BF0u);
    ctx->pc = 0x464BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464BE8u;
            // 0x464bec: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464BF0u; }
        if (ctx->pc != 0x464BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464BF0u; }
        if (ctx->pc != 0x464BF0u) { return; }
    }
    ctx->pc = 0x464BF0u;
label_464bf0:
    // 0x464bf0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_464bf4:
    if (ctx->pc == 0x464BF4u) {
        ctx->pc = 0x464BF4u;
            // 0x464bf4: 0xae6200a0  sw          $v0, 0xA0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x464BF8u;
        goto label_464bf8;
    }
    ctx->pc = 0x464BF0u;
    {
        const bool branch_taken_0x464bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x464bf0) {
            ctx->pc = 0x464BF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x464BF0u;
            // 0x464bf4: 0xae6200a0  sw          $v0, 0xA0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x464C40u;
            goto label_464c40;
        }
    }
    ctx->pc = 0x464BF8u;
label_464bf8:
    // 0x464bf8: 0x8e660050  lw          $a2, 0x50($s3)
    ctx->pc = 0x464bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_464bfc:
    // 0x464bfc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x464bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_464c00:
    // 0x464c00: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x464c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_464c04:
    // 0x464c04: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x464c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_464c08:
    // 0x464c08: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x464c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_464c0c:
    // 0x464c0c: 0x2463e6a0  addiu       $v1, $v1, -0x1960
    ctx->pc = 0x464c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960800));
label_464c10:
    // 0x464c10: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x464c10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_464c14:
    // 0x464c14: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x464c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_464c18:
    // 0x464c18: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x464c18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_464c1c:
    // 0x464c1c: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x464c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_464c20:
    // 0x464c20: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x464c20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_464c24:
    // 0x464c24: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x464c24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_464c28:
    // 0x464c28: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x464c28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_464c2c:
    // 0x464c2c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x464c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_464c30:
    // 0x464c30: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x464c30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_464c34:
    // 0x464c34: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x464c34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_464c38:
    // 0x464c38: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x464c38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_464c3c:
    // 0x464c3c: 0xae6200a0  sw          $v0, 0xA0($s3)
    ctx->pc = 0x464c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 2));
label_464c40:
    // 0x464c40: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x464c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_464c44:
    // 0x464c44: 0x8e6300b0  lw          $v1, 0xB0($s3)
    ctx->pc = 0x464c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_464c48:
    // 0x464c48: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x464c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_464c4c:
    // 0x464c4c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x464c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_464c50:
    // 0x464c50: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x464c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_464c54:
    // 0x464c54: 0xc040180  jal         func_100600
label_464c58:
    if (ctx->pc == 0x464C58u) {
        ctx->pc = 0x464C58u;
            // 0x464c58: 0xae6200b0  sw          $v0, 0xB0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x464C5Cu;
        goto label_464c5c;
    }
    ctx->pc = 0x464C54u;
    SET_GPR_U32(ctx, 31, 0x464C5Cu);
    ctx->pc = 0x464C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464C54u;
            // 0x464c58: 0xae6200b0  sw          $v0, 0xB0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464C5Cu; }
        if (ctx->pc != 0x464C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464C5Cu; }
        if (ctx->pc != 0x464C5Cu) { return; }
    }
    ctx->pc = 0x464C5Cu;
label_464c5c:
    // 0x464c5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x464c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_464c60:
    // 0x464c60: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_464c64:
    if (ctx->pc == 0x464C64u) {
        ctx->pc = 0x464C64u;
            // 0x464c64: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x464C68u;
        goto label_464c68;
    }
    ctx->pc = 0x464C60u;
    {
        const bool branch_taken_0x464c60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x464c60) {
            ctx->pc = 0x464C64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x464C60u;
            // 0x464c64: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x464CA0u;
            goto label_464ca0;
        }
    }
    ctx->pc = 0x464C68u;
label_464c68:
    // 0x464c68: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x464c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_464c6c:
    // 0x464c6c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x464c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_464c70:
    // 0x464c70: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x464c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_464c74:
    // 0x464c74: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x464c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_464c78:
    // 0x464c78: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x464c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_464c7c:
    // 0x464c7c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x464c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_464c80:
    // 0x464c80: 0xc040138  jal         func_1004E0
label_464c84:
    if (ctx->pc == 0x464C84u) {
        ctx->pc = 0x464C84u;
            // 0x464c84: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x464C88u;
        goto label_464c88;
    }
    ctx->pc = 0x464C80u;
    SET_GPR_U32(ctx, 31, 0x464C88u);
    ctx->pc = 0x464C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464C80u;
            // 0x464c84: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464C88u; }
        if (ctx->pc != 0x464C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464C88u; }
        if (ctx->pc != 0x464C88u) { return; }
    }
    ctx->pc = 0x464C88u;
label_464c88:
    // 0x464c88: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x464c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_464c8c:
    // 0x464c8c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x464c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_464c90:
    // 0x464c90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x464c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_464c94:
    // 0x464c94: 0xc04a576  jal         func_1295D8
label_464c98:
    if (ctx->pc == 0x464C98u) {
        ctx->pc = 0x464C98u;
            // 0x464c98: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x464C9Cu;
        goto label_464c9c;
    }
    ctx->pc = 0x464C94u;
    SET_GPR_U32(ctx, 31, 0x464C9Cu);
    ctx->pc = 0x464C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464C94u;
            // 0x464c98: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464C9Cu; }
        if (ctx->pc != 0x464C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464C9Cu; }
        if (ctx->pc != 0x464C9Cu) { return; }
    }
    ctx->pc = 0x464C9Cu;
label_464c9c:
    // 0x464c9c: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x464c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_464ca0:
    // 0x464ca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x464ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_464ca4:
    // 0x464ca4: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x464ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_464ca8:
    // 0x464ca8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x464ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_464cac:
    // 0x464cac: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x464cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_464cb0:
    // 0x464cb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x464cb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_464cb4:
    // 0x464cb4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x464cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_464cb8:
    // 0x464cb8: 0xae70029c  sw          $s0, 0x29C($s3)
    ctx->pc = 0x464cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 668), GPR_U32(ctx, 16));
label_464cbc:
    // 0x464cbc: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x464cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_464cc0:
    // 0x464cc0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x464cc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_464cc4:
    // 0x464cc4: 0xc122cd8  jal         func_48B360
label_464cc8:
    if (ctx->pc == 0x464CC8u) {
        ctx->pc = 0x464CC8u;
            // 0x464cc8: 0x344614ae  ori         $a2, $v0, 0x14AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5294);
        ctx->pc = 0x464CCCu;
        goto label_464ccc;
    }
    ctx->pc = 0x464CC4u;
    SET_GPR_U32(ctx, 31, 0x464CCCu);
    ctx->pc = 0x464CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464CC4u;
            // 0x464cc8: 0x344614ae  ori         $a2, $v0, 0x14AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5294);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464CCCu; }
        if (ctx->pc != 0x464CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464CCCu; }
        if (ctx->pc != 0x464CCCu) { return; }
    }
    ctx->pc = 0x464CCCu;
label_464ccc:
    // 0x464ccc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x464cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_464cd0:
    // 0x464cd0: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x464cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
label_464cd4:
    // 0x464cd4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x464cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_464cd8:
    // 0x464cd8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x464cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_464cdc:
    // 0x464cdc: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x464cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_464ce0:
    // 0x464ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x464ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_464ce4:
    // 0x464ce4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x464ce4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_464ce8:
    // 0x464ce8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x464ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_464cec:
    // 0x464cec: 0x344614ae  ori         $a2, $v0, 0x14AE
    ctx->pc = 0x464cecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5294);
label_464cf0:
    // 0x464cf0: 0xc122cd8  jal         func_48B360
label_464cf4:
    if (ctx->pc == 0x464CF4u) {
        ctx->pc = 0x464CF4u;
            // 0x464cf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x464CF8u;
        goto label_464cf8;
    }
    ctx->pc = 0x464CF0u;
    SET_GPR_U32(ctx, 31, 0x464CF8u);
    ctx->pc = 0x464CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464CF0u;
            // 0x464cf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464CF8u; }
        if (ctx->pc != 0x464CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464CF8u; }
        if (ctx->pc != 0x464CF8u) { return; }
    }
    ctx->pc = 0x464CF8u;
label_464cf8:
    // 0x464cf8: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x464cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_464cfc:
    // 0x464cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x464cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_464d00:
    // 0x464d00: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x464d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_464d04:
    // 0x464d04: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x464d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_464d08:
    // 0x464d08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x464d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_464d0c:
    // 0x464d0c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x464d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_464d10:
    // 0x464d10: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x464d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_464d14:
    // 0x464d14: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x464d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
label_464d18:
    // 0x464d18: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x464d18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_464d1c:
    // 0x464d1c: 0xc122cd8  jal         func_48B360
label_464d20:
    if (ctx->pc == 0x464D20u) {
        ctx->pc = 0x464D20u;
            // 0x464d20: 0x344614ae  ori         $a2, $v0, 0x14AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5294);
        ctx->pc = 0x464D24u;
        goto label_464d24;
    }
    ctx->pc = 0x464D1Cu;
    SET_GPR_U32(ctx, 31, 0x464D24u);
    ctx->pc = 0x464D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464D1Cu;
            // 0x464d20: 0x344614ae  ori         $a2, $v0, 0x14AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5294);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464D24u; }
        if (ctx->pc != 0x464D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464D24u; }
        if (ctx->pc != 0x464D24u) { return; }
    }
    ctx->pc = 0x464D24u;
label_464d24:
    // 0x464d24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x464d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_464d28:
    // 0x464d28: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x464d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
label_464d2c:
    // 0x464d2c: 0xae63008c  sw          $v1, 0x8C($s3)
    ctx->pc = 0x464d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 3));
label_464d30:
    // 0x464d30: 0xae640070  sw          $a0, 0x70($s3)
    ctx->pc = 0x464d30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 4));
label_464d34:
    // 0x464d34: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x464d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_464d38:
    // 0x464d38: 0xae640078  sw          $a0, 0x78($s3)
    ctx->pc = 0x464d38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 4));
label_464d3c:
    // 0x464d3c: 0xae640080  sw          $a0, 0x80($s3)
    ctx->pc = 0x464d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 4));
label_464d40:
    // 0x464d40: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x464d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_464d44:
    // 0x464d44: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x464d44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_464d48:
    // 0x464d48: 0x28630005  slti        $v1, $v1, 0x5
    ctx->pc = 0x464d48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_464d4c:
    // 0x464d4c: 0xa26302f8  sb          $v1, 0x2F8($s3)
    ctx->pc = 0x464d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 760), (uint8_t)GPR_U32(ctx, 3));
label_464d50:
    // 0x464d50: 0x926302f8  lbu         $v1, 0x2F8($s3)
    ctx->pc = 0x464d50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 760)));
label_464d54:
    // 0x464d54: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_464d58:
    if (ctx->pc == 0x464D58u) {
        ctx->pc = 0x464D5Cu;
        goto label_464d5c;
    }
    ctx->pc = 0x464D54u;
    {
        const bool branch_taken_0x464d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x464d54) {
            ctx->pc = 0x464DD8u;
            goto label_464dd8;
        }
    }
    ctx->pc = 0x464D5Cu;
label_464d5c:
    // 0x464d5c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x464d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_464d60:
    // 0x464d60: 0x266402b0  addiu       $a0, $s3, 0x2B0
    ctx->pc = 0x464d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 688));
label_464d64:
    // 0x464d64: 0xc04cce8  jal         func_1333A0
label_464d68:
    if (ctx->pc == 0x464D68u) {
        ctx->pc = 0x464D68u;
            // 0x464d68: 0x24a5e760  addiu       $a1, $a1, -0x18A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960992));
        ctx->pc = 0x464D6Cu;
        goto label_464d6c;
    }
    ctx->pc = 0x464D64u;
    SET_GPR_U32(ctx, 31, 0x464D6Cu);
    ctx->pc = 0x464D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464D64u;
            // 0x464d68: 0x24a5e760  addiu       $a1, $a1, -0x18A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464D6Cu; }
        if (ctx->pc != 0x464D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464D6Cu; }
        if (ctx->pc != 0x464D6Cu) { return; }
    }
    ctx->pc = 0x464D6Cu;
label_464d6c:
    // 0x464d6c: 0x3c110061  lui         $s1, 0x61
    ctx->pc = 0x464d6cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)97 << 16));
label_464d70:
    // 0x464d70: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x464d70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
label_464d74:
    // 0x464d74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x464d74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_464d78:
    // 0x464d78: 0x26310510  addiu       $s1, $s1, 0x510
    ctx->pc = 0x464d78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1296));
label_464d7c:
    // 0x464d7c: 0x26100610  addiu       $s0, $s0, 0x610
    ctx->pc = 0x464d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
label_464d80:
    // 0x464d80: 0xc040180  jal         func_100600
label_464d84:
    if (ctx->pc == 0x464D84u) {
        ctx->pc = 0x464D84u;
            // 0x464d84: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->pc = 0x464D88u;
        goto label_464d88;
    }
    ctx->pc = 0x464D80u;
    SET_GPR_U32(ctx, 31, 0x464D88u);
    ctx->pc = 0x464D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464D80u;
            // 0x464d84: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464D88u; }
        if (ctx->pc != 0x464D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464D88u; }
        if (ctx->pc != 0x464D88u) { return; }
    }
    ctx->pc = 0x464D88u;
label_464d88:
    // 0x464d88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x464d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_464d8c:
    // 0x464d8c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_464d90:
    if (ctx->pc == 0x464D90u) {
        ctx->pc = 0x464D94u;
        goto label_464d94;
    }
    ctx->pc = 0x464D8Cu;
    {
        const bool branch_taken_0x464d8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x464d8c) {
            ctx->pc = 0x464DA8u;
            goto label_464da8;
        }
    }
    ctx->pc = 0x464D94u;
label_464d94:
    // 0x464d94: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x464d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_464d98:
    // 0x464d98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x464d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_464d9c:
    // 0x464d9c: 0xc0c3f60  jal         func_30FD80
label_464da0:
    if (ctx->pc == 0x464DA0u) {
        ctx->pc = 0x464DA0u;
            // 0x464da0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x464DA4u;
        goto label_464da4;
    }
    ctx->pc = 0x464D9Cu;
    SET_GPR_U32(ctx, 31, 0x464DA4u);
    ctx->pc = 0x464DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464D9Cu;
            // 0x464da0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FD80u;
    if (runtime->hasFunction(0x30FD80u)) {
        auto targetFn = runtime->lookupFunction(0x30FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464DA4u; }
        if (ctx->pc != 0x464DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FD80_0x30fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464DA4u; }
        if (ctx->pc != 0x464DA4u) { return; }
    }
    ctx->pc = 0x464DA4u;
label_464da4:
    // 0x464da4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x464da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_464da8:
    // 0x464da8: 0xae6402f0  sw          $a0, 0x2F0($s3)
    ctx->pc = 0x464da8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 752), GPR_U32(ctx, 4));
label_464dac:
    // 0x464dac: 0xac9000d4  sw          $s0, 0xD4($a0)
    ctx->pc = 0x464dacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 16));
label_464db0:
    // 0x464db0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x464db0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_464db4:
    // 0x464db4: 0x8e6502f0  lw          $a1, 0x2F0($s3)
    ctx->pc = 0x464db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 752)));
label_464db8:
    // 0x464db8: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x464db8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_464dbc:
    // 0x464dbc: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x464dbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_464dc0:
    // 0x464dc0: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x464dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_464dc4:
    // 0x464dc4: 0x94a40064  lhu         $a0, 0x64($a1)
    ctx->pc = 0x464dc4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 100)));
label_464dc8:
    // 0x464dc8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x464dc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_464dcc:
    // 0x464dcc: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x464dccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_464dd0:
    // 0x464dd0: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_464dd4:
    if (ctx->pc == 0x464DD4u) {
        ctx->pc = 0x464DD4u;
            // 0x464dd4: 0xa4a40064  sh          $a0, 0x64($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 100), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x464DD8u;
        goto label_464dd8;
    }
    ctx->pc = 0x464DD0u;
    {
        const bool branch_taken_0x464dd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x464DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x464DD0u;
            // 0x464dd4: 0xa4a40064  sh          $a0, 0x64($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 100), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464dd0) {
            ctx->pc = 0x464D80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_464d80;
        }
    }
    ctx->pc = 0x464DD8u;
label_464dd8:
    // 0x464dd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x464dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_464ddc:
    // 0x464ddc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x464ddcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_464de0:
    // 0x464de0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x464de0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_464de4:
    // 0x464de4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x464de4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_464de8:
    // 0x464de8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x464de8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_464dec:
    // 0x464dec: 0x3e00008  jr          $ra
label_464df0:
    if (ctx->pc == 0x464DF0u) {
        ctx->pc = 0x464DF0u;
            // 0x464df0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x464DF4u;
        goto label_464df4;
    }
    ctx->pc = 0x464DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x464DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x464DECu;
            // 0x464df0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x464DF4u;
label_464df4:
    // 0x464df4: 0x0  nop
    ctx->pc = 0x464df4u;
    // NOP
label_464df8:
    // 0x464df8: 0x0  nop
    ctx->pc = 0x464df8u;
    // NOP
label_464dfc:
    // 0x464dfc: 0x0  nop
    ctx->pc = 0x464dfcu;
    // NOP
label_464e00:
    // 0x464e00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x464e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_464e04:
    // 0x464e04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x464e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_464e08:
    // 0x464e08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x464e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_464e0c:
    // 0x464e0c: 0xc0e3580  jal         func_38D600
label_464e10:
    if (ctx->pc == 0x464E10u) {
        ctx->pc = 0x464E10u;
            // 0x464e10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x464E14u;
        goto label_464e14;
    }
    ctx->pc = 0x464E0Cu;
    SET_GPR_U32(ctx, 31, 0x464E14u);
    ctx->pc = 0x464E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464E0Cu;
            // 0x464e10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464E14u; }
        if (ctx->pc != 0x464E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464E14u; }
        if (ctx->pc != 0x464E14u) { return; }
    }
    ctx->pc = 0x464E14u;
label_464e14:
    // 0x464e14: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x464e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_464e18:
    // 0x464e18: 0x2404fdff  addiu       $a0, $zero, -0x201
    ctx->pc = 0x464e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
label_464e1c:
    // 0x464e1c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x464e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_464e20:
    // 0x464e20: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x464e20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_464e24:
    // 0x464e24: 0x34840200  ori         $a0, $a0, 0x200
    ctx->pc = 0x464e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
label_464e28:
    // 0x464e28: 0xae0400b0  sw          $a0, 0xB0($s0)
    ctx->pc = 0x464e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 4));
label_464e2c:
    // 0x464e2c: 0xa2030064  sb          $v1, 0x64($s0)
    ctx->pc = 0x464e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 3));
label_464e30:
    // 0x464e30: 0xa2000065  sb          $zero, 0x65($s0)
    ctx->pc = 0x464e30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 0));
label_464e34:
    // 0x464e34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x464e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_464e38:
    // 0x464e38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x464e38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_464e3c:
    // 0x464e3c: 0x3e00008  jr          $ra
label_464e40:
    if (ctx->pc == 0x464E40u) {
        ctx->pc = 0x464E40u;
            // 0x464e40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x464E44u;
        goto label_464e44;
    }
    ctx->pc = 0x464E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x464E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x464E3Cu;
            // 0x464e40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x464E44u;
label_464e44:
    // 0x464e44: 0x0  nop
    ctx->pc = 0x464e44u;
    // NOP
label_464e48:
    // 0x464e48: 0x0  nop
    ctx->pc = 0x464e48u;
    // NOP
label_464e4c:
    // 0x464e4c: 0x0  nop
    ctx->pc = 0x464e4cu;
    // NOP
}
