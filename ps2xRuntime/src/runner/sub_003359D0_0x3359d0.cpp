#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003359D0
// Address: 0x3359d0 - 0x335e80
void sub_003359D0_0x3359d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003359D0_0x3359d0");
#endif

    switch (ctx->pc) {
        case 0x3359d0u: goto label_3359d0;
        case 0x3359d4u: goto label_3359d4;
        case 0x3359d8u: goto label_3359d8;
        case 0x3359dcu: goto label_3359dc;
        case 0x3359e0u: goto label_3359e0;
        case 0x3359e4u: goto label_3359e4;
        case 0x3359e8u: goto label_3359e8;
        case 0x3359ecu: goto label_3359ec;
        case 0x3359f0u: goto label_3359f0;
        case 0x3359f4u: goto label_3359f4;
        case 0x3359f8u: goto label_3359f8;
        case 0x3359fcu: goto label_3359fc;
        case 0x335a00u: goto label_335a00;
        case 0x335a04u: goto label_335a04;
        case 0x335a08u: goto label_335a08;
        case 0x335a0cu: goto label_335a0c;
        case 0x335a10u: goto label_335a10;
        case 0x335a14u: goto label_335a14;
        case 0x335a18u: goto label_335a18;
        case 0x335a1cu: goto label_335a1c;
        case 0x335a20u: goto label_335a20;
        case 0x335a24u: goto label_335a24;
        case 0x335a28u: goto label_335a28;
        case 0x335a2cu: goto label_335a2c;
        case 0x335a30u: goto label_335a30;
        case 0x335a34u: goto label_335a34;
        case 0x335a38u: goto label_335a38;
        case 0x335a3cu: goto label_335a3c;
        case 0x335a40u: goto label_335a40;
        case 0x335a44u: goto label_335a44;
        case 0x335a48u: goto label_335a48;
        case 0x335a4cu: goto label_335a4c;
        case 0x335a50u: goto label_335a50;
        case 0x335a54u: goto label_335a54;
        case 0x335a58u: goto label_335a58;
        case 0x335a5cu: goto label_335a5c;
        case 0x335a60u: goto label_335a60;
        case 0x335a64u: goto label_335a64;
        case 0x335a68u: goto label_335a68;
        case 0x335a6cu: goto label_335a6c;
        case 0x335a70u: goto label_335a70;
        case 0x335a74u: goto label_335a74;
        case 0x335a78u: goto label_335a78;
        case 0x335a7cu: goto label_335a7c;
        case 0x335a80u: goto label_335a80;
        case 0x335a84u: goto label_335a84;
        case 0x335a88u: goto label_335a88;
        case 0x335a8cu: goto label_335a8c;
        case 0x335a90u: goto label_335a90;
        case 0x335a94u: goto label_335a94;
        case 0x335a98u: goto label_335a98;
        case 0x335a9cu: goto label_335a9c;
        case 0x335aa0u: goto label_335aa0;
        case 0x335aa4u: goto label_335aa4;
        case 0x335aa8u: goto label_335aa8;
        case 0x335aacu: goto label_335aac;
        case 0x335ab0u: goto label_335ab0;
        case 0x335ab4u: goto label_335ab4;
        case 0x335ab8u: goto label_335ab8;
        case 0x335abcu: goto label_335abc;
        case 0x335ac0u: goto label_335ac0;
        case 0x335ac4u: goto label_335ac4;
        case 0x335ac8u: goto label_335ac8;
        case 0x335accu: goto label_335acc;
        case 0x335ad0u: goto label_335ad0;
        case 0x335ad4u: goto label_335ad4;
        case 0x335ad8u: goto label_335ad8;
        case 0x335adcu: goto label_335adc;
        case 0x335ae0u: goto label_335ae0;
        case 0x335ae4u: goto label_335ae4;
        case 0x335ae8u: goto label_335ae8;
        case 0x335aecu: goto label_335aec;
        case 0x335af0u: goto label_335af0;
        case 0x335af4u: goto label_335af4;
        case 0x335af8u: goto label_335af8;
        case 0x335afcu: goto label_335afc;
        case 0x335b00u: goto label_335b00;
        case 0x335b04u: goto label_335b04;
        case 0x335b08u: goto label_335b08;
        case 0x335b0cu: goto label_335b0c;
        case 0x335b10u: goto label_335b10;
        case 0x335b14u: goto label_335b14;
        case 0x335b18u: goto label_335b18;
        case 0x335b1cu: goto label_335b1c;
        case 0x335b20u: goto label_335b20;
        case 0x335b24u: goto label_335b24;
        case 0x335b28u: goto label_335b28;
        case 0x335b2cu: goto label_335b2c;
        case 0x335b30u: goto label_335b30;
        case 0x335b34u: goto label_335b34;
        case 0x335b38u: goto label_335b38;
        case 0x335b3cu: goto label_335b3c;
        case 0x335b40u: goto label_335b40;
        case 0x335b44u: goto label_335b44;
        case 0x335b48u: goto label_335b48;
        case 0x335b4cu: goto label_335b4c;
        case 0x335b50u: goto label_335b50;
        case 0x335b54u: goto label_335b54;
        case 0x335b58u: goto label_335b58;
        case 0x335b5cu: goto label_335b5c;
        case 0x335b60u: goto label_335b60;
        case 0x335b64u: goto label_335b64;
        case 0x335b68u: goto label_335b68;
        case 0x335b6cu: goto label_335b6c;
        case 0x335b70u: goto label_335b70;
        case 0x335b74u: goto label_335b74;
        case 0x335b78u: goto label_335b78;
        case 0x335b7cu: goto label_335b7c;
        case 0x335b80u: goto label_335b80;
        case 0x335b84u: goto label_335b84;
        case 0x335b88u: goto label_335b88;
        case 0x335b8cu: goto label_335b8c;
        case 0x335b90u: goto label_335b90;
        case 0x335b94u: goto label_335b94;
        case 0x335b98u: goto label_335b98;
        case 0x335b9cu: goto label_335b9c;
        case 0x335ba0u: goto label_335ba0;
        case 0x335ba4u: goto label_335ba4;
        case 0x335ba8u: goto label_335ba8;
        case 0x335bacu: goto label_335bac;
        case 0x335bb0u: goto label_335bb0;
        case 0x335bb4u: goto label_335bb4;
        case 0x335bb8u: goto label_335bb8;
        case 0x335bbcu: goto label_335bbc;
        case 0x335bc0u: goto label_335bc0;
        case 0x335bc4u: goto label_335bc4;
        case 0x335bc8u: goto label_335bc8;
        case 0x335bccu: goto label_335bcc;
        case 0x335bd0u: goto label_335bd0;
        case 0x335bd4u: goto label_335bd4;
        case 0x335bd8u: goto label_335bd8;
        case 0x335bdcu: goto label_335bdc;
        case 0x335be0u: goto label_335be0;
        case 0x335be4u: goto label_335be4;
        case 0x335be8u: goto label_335be8;
        case 0x335becu: goto label_335bec;
        case 0x335bf0u: goto label_335bf0;
        case 0x335bf4u: goto label_335bf4;
        case 0x335bf8u: goto label_335bf8;
        case 0x335bfcu: goto label_335bfc;
        case 0x335c00u: goto label_335c00;
        case 0x335c04u: goto label_335c04;
        case 0x335c08u: goto label_335c08;
        case 0x335c0cu: goto label_335c0c;
        case 0x335c10u: goto label_335c10;
        case 0x335c14u: goto label_335c14;
        case 0x335c18u: goto label_335c18;
        case 0x335c1cu: goto label_335c1c;
        case 0x335c20u: goto label_335c20;
        case 0x335c24u: goto label_335c24;
        case 0x335c28u: goto label_335c28;
        case 0x335c2cu: goto label_335c2c;
        case 0x335c30u: goto label_335c30;
        case 0x335c34u: goto label_335c34;
        case 0x335c38u: goto label_335c38;
        case 0x335c3cu: goto label_335c3c;
        case 0x335c40u: goto label_335c40;
        case 0x335c44u: goto label_335c44;
        case 0x335c48u: goto label_335c48;
        case 0x335c4cu: goto label_335c4c;
        case 0x335c50u: goto label_335c50;
        case 0x335c54u: goto label_335c54;
        case 0x335c58u: goto label_335c58;
        case 0x335c5cu: goto label_335c5c;
        case 0x335c60u: goto label_335c60;
        case 0x335c64u: goto label_335c64;
        case 0x335c68u: goto label_335c68;
        case 0x335c6cu: goto label_335c6c;
        case 0x335c70u: goto label_335c70;
        case 0x335c74u: goto label_335c74;
        case 0x335c78u: goto label_335c78;
        case 0x335c7cu: goto label_335c7c;
        case 0x335c80u: goto label_335c80;
        case 0x335c84u: goto label_335c84;
        case 0x335c88u: goto label_335c88;
        case 0x335c8cu: goto label_335c8c;
        case 0x335c90u: goto label_335c90;
        case 0x335c94u: goto label_335c94;
        case 0x335c98u: goto label_335c98;
        case 0x335c9cu: goto label_335c9c;
        case 0x335ca0u: goto label_335ca0;
        case 0x335ca4u: goto label_335ca4;
        case 0x335ca8u: goto label_335ca8;
        case 0x335cacu: goto label_335cac;
        case 0x335cb0u: goto label_335cb0;
        case 0x335cb4u: goto label_335cb4;
        case 0x335cb8u: goto label_335cb8;
        case 0x335cbcu: goto label_335cbc;
        case 0x335cc0u: goto label_335cc0;
        case 0x335cc4u: goto label_335cc4;
        case 0x335cc8u: goto label_335cc8;
        case 0x335cccu: goto label_335ccc;
        case 0x335cd0u: goto label_335cd0;
        case 0x335cd4u: goto label_335cd4;
        case 0x335cd8u: goto label_335cd8;
        case 0x335cdcu: goto label_335cdc;
        case 0x335ce0u: goto label_335ce0;
        case 0x335ce4u: goto label_335ce4;
        case 0x335ce8u: goto label_335ce8;
        case 0x335cecu: goto label_335cec;
        case 0x335cf0u: goto label_335cf0;
        case 0x335cf4u: goto label_335cf4;
        case 0x335cf8u: goto label_335cf8;
        case 0x335cfcu: goto label_335cfc;
        case 0x335d00u: goto label_335d00;
        case 0x335d04u: goto label_335d04;
        case 0x335d08u: goto label_335d08;
        case 0x335d0cu: goto label_335d0c;
        case 0x335d10u: goto label_335d10;
        case 0x335d14u: goto label_335d14;
        case 0x335d18u: goto label_335d18;
        case 0x335d1cu: goto label_335d1c;
        case 0x335d20u: goto label_335d20;
        case 0x335d24u: goto label_335d24;
        case 0x335d28u: goto label_335d28;
        case 0x335d2cu: goto label_335d2c;
        case 0x335d30u: goto label_335d30;
        case 0x335d34u: goto label_335d34;
        case 0x335d38u: goto label_335d38;
        case 0x335d3cu: goto label_335d3c;
        case 0x335d40u: goto label_335d40;
        case 0x335d44u: goto label_335d44;
        case 0x335d48u: goto label_335d48;
        case 0x335d4cu: goto label_335d4c;
        case 0x335d50u: goto label_335d50;
        case 0x335d54u: goto label_335d54;
        case 0x335d58u: goto label_335d58;
        case 0x335d5cu: goto label_335d5c;
        case 0x335d60u: goto label_335d60;
        case 0x335d64u: goto label_335d64;
        case 0x335d68u: goto label_335d68;
        case 0x335d6cu: goto label_335d6c;
        case 0x335d70u: goto label_335d70;
        case 0x335d74u: goto label_335d74;
        case 0x335d78u: goto label_335d78;
        case 0x335d7cu: goto label_335d7c;
        case 0x335d80u: goto label_335d80;
        case 0x335d84u: goto label_335d84;
        case 0x335d88u: goto label_335d88;
        case 0x335d8cu: goto label_335d8c;
        case 0x335d90u: goto label_335d90;
        case 0x335d94u: goto label_335d94;
        case 0x335d98u: goto label_335d98;
        case 0x335d9cu: goto label_335d9c;
        case 0x335da0u: goto label_335da0;
        case 0x335da4u: goto label_335da4;
        case 0x335da8u: goto label_335da8;
        case 0x335dacu: goto label_335dac;
        case 0x335db0u: goto label_335db0;
        case 0x335db4u: goto label_335db4;
        case 0x335db8u: goto label_335db8;
        case 0x335dbcu: goto label_335dbc;
        case 0x335dc0u: goto label_335dc0;
        case 0x335dc4u: goto label_335dc4;
        case 0x335dc8u: goto label_335dc8;
        case 0x335dccu: goto label_335dcc;
        case 0x335dd0u: goto label_335dd0;
        case 0x335dd4u: goto label_335dd4;
        case 0x335dd8u: goto label_335dd8;
        case 0x335ddcu: goto label_335ddc;
        case 0x335de0u: goto label_335de0;
        case 0x335de4u: goto label_335de4;
        case 0x335de8u: goto label_335de8;
        case 0x335decu: goto label_335dec;
        case 0x335df0u: goto label_335df0;
        case 0x335df4u: goto label_335df4;
        case 0x335df8u: goto label_335df8;
        case 0x335dfcu: goto label_335dfc;
        case 0x335e00u: goto label_335e00;
        case 0x335e04u: goto label_335e04;
        case 0x335e08u: goto label_335e08;
        case 0x335e0cu: goto label_335e0c;
        case 0x335e10u: goto label_335e10;
        case 0x335e14u: goto label_335e14;
        case 0x335e18u: goto label_335e18;
        case 0x335e1cu: goto label_335e1c;
        case 0x335e20u: goto label_335e20;
        case 0x335e24u: goto label_335e24;
        case 0x335e28u: goto label_335e28;
        case 0x335e2cu: goto label_335e2c;
        case 0x335e30u: goto label_335e30;
        case 0x335e34u: goto label_335e34;
        case 0x335e38u: goto label_335e38;
        case 0x335e3cu: goto label_335e3c;
        case 0x335e40u: goto label_335e40;
        case 0x335e44u: goto label_335e44;
        case 0x335e48u: goto label_335e48;
        case 0x335e4cu: goto label_335e4c;
        case 0x335e50u: goto label_335e50;
        case 0x335e54u: goto label_335e54;
        case 0x335e58u: goto label_335e58;
        case 0x335e5cu: goto label_335e5c;
        case 0x335e60u: goto label_335e60;
        case 0x335e64u: goto label_335e64;
        case 0x335e68u: goto label_335e68;
        case 0x335e6cu: goto label_335e6c;
        case 0x335e70u: goto label_335e70;
        case 0x335e74u: goto label_335e74;
        case 0x335e78u: goto label_335e78;
        case 0x335e7cu: goto label_335e7c;
        default: break;
    }

    ctx->pc = 0x3359d0u;

label_3359d0:
    // 0x3359d0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3359d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3359d4:
    // 0x3359d4: 0x3c0a00af  lui         $t2, 0xAF
    ctx->pc = 0x3359d4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)175 << 16));
label_3359d8:
    // 0x3359d8: 0x8c640e80  lw          $a0, 0xE80($v1)
    ctx->pc = 0x3359d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3359dc:
    // 0x3359dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3359dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3359e0:
    // 0x3359e0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3359e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3359e4:
    // 0x3359e4: 0x254a0e80  addiu       $t2, $t2, 0xE80
    ctx->pc = 0x3359e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3712));
label_3359e8:
    // 0x3359e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3359e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3359ec:
    // 0x3359ec: 0x8c890780  lw          $t1, 0x780($a0)
    ctx->pc = 0x3359ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1920)));
label_3359f0:
    // 0x3359f0: 0x8c63a140  lw          $v1, -0x5EC0($v1)
    ctx->pc = 0x3359f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943040)));
label_3359f4:
    // 0x3359f4: 0x2468001c  addiu       $t0, $v1, 0x1C
    ctx->pc = 0x3359f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
label_3359f8:
    // 0x3359f8: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x3359f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_3359fc:
    // 0x3359fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3359fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_335a00:
    // 0x335a00: 0x24c69760  addiu       $a2, $a2, -0x68A0
    ctx->pc = 0x335a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940512));
label_335a04:
    // 0x335a04: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x335a04u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_335a08:
    // 0x335a08: 0x169082b  sltu        $at, $t3, $t1
    ctx->pc = 0x335a08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_335a0c:
    // 0x335a0c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_335a10:
    if (ctx->pc == 0x335A10u) {
        ctx->pc = 0x335A14u;
        goto label_335a14;
    }
    ctx->pc = 0x335A0Cu;
    {
        const bool branch_taken_0x335a0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x335a0c) {
            ctx->pc = 0x335A58u;
            goto label_335a58;
        }
    }
    ctx->pc = 0x335A14u;
label_335a14:
    // 0x335a14: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x335a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_335a18:
    // 0x335a18: 0x8c630d68  lw          $v1, 0xD68($v1)
    ctx->pc = 0x335a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3432)));
label_335a1c:
    // 0x335a1c: 0x8c670034  lw          $a3, 0x34($v1)
    ctx->pc = 0x335a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_335a20:
    // 0x335a20: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x335a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_335a24:
    // 0x335a24: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x335a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_335a28:
    // 0x335a28: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x335a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_335a2c:
    // 0x335a2c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x335a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_335a30:
    // 0x335a30: 0x9063001e  lbu         $v1, 0x1E($v1)
    ctx->pc = 0x335a30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 30)));
label_335a34:
    // 0x335a34: 0x10650002  beq         $v1, $a1, . + 4 + (0x2 << 2)
label_335a38:
    if (ctx->pc == 0x335A38u) {
        ctx->pc = 0x335A3Cu;
        goto label_335a3c;
    }
    ctx->pc = 0x335A34u;
    {
        const bool branch_taken_0x335a34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x335a34) {
            ctx->pc = 0x335A40u;
            goto label_335a40;
        }
    }
    ctx->pc = 0x335A3Cu;
label_335a3c:
    // 0x335a3c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x335a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_335a40:
    // 0x335a40: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x335a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_335a44:
    // 0x335a44: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x335a44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_335a48:
    // 0x335a48: 0x163182b  sltu        $v1, $t3, $v1
    ctx->pc = 0x335a48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_335a4c:
    // 0x335a4c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_335a50:
    if (ctx->pc == 0x335A50u) {
        ctx->pc = 0x335A50u;
            // 0x335a50: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->pc = 0x335A54u;
        goto label_335a54;
    }
    ctx->pc = 0x335A4Cu;
    {
        const bool branch_taken_0x335a4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x335A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335A4Cu;
            // 0x335a50: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335a4c) {
            ctx->pc = 0x335A08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_335a08;
        }
    }
    ctx->pc = 0x335A54u;
label_335a54:
    // 0x335a54: 0x0  nop
    ctx->pc = 0x335a54u;
    // NOP
label_335a58:
    // 0x335a58: 0x3e00008  jr          $ra
label_335a5c:
    if (ctx->pc == 0x335A5Cu) {
        ctx->pc = 0x335A60u;
        goto label_335a60;
    }
    ctx->pc = 0x335A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x335A60u;
label_335a60:
    // 0x335a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_335a64:
    // 0x335a64: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x335a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_335a68:
    // 0x335a68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x335a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_335a6c:
    // 0x335a6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x335a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_335a70:
    // 0x335a70: 0x8c860054  lw          $a2, 0x54($a0)
    ctx->pc = 0x335a70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_335a74:
    // 0x335a74: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x335a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_335a78:
    // 0x335a78: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_335a7c:
    if (ctx->pc == 0x335A7Cu) {
        ctx->pc = 0x335A7Cu;
            // 0x335a7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x335A80u;
        goto label_335a80;
    }
    ctx->pc = 0x335A78u;
    {
        const bool branch_taken_0x335a78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x335A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335A78u;
            // 0x335a7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335a78) {
            ctx->pc = 0x335AA4u;
            goto label_335aa4;
        }
    }
    ctx->pc = 0x335A80u;
label_335a80:
    // 0x335a80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x335a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_335a84:
    // 0x335a84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x335a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_335a88:
    // 0x335a88: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x335a88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_335a8c:
    // 0x335a8c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x335a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_335a90:
    // 0x335a90: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x335a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_335a94:
    // 0x335a94: 0xc057b7c  jal         func_15EDF0
label_335a98:
    if (ctx->pc == 0x335A98u) {
        ctx->pc = 0x335A98u;
            // 0x335a98: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x335A9Cu;
        goto label_335a9c;
    }
    ctx->pc = 0x335A94u;
    SET_GPR_U32(ctx, 31, 0x335A9Cu);
    ctx->pc = 0x335A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335A94u;
            // 0x335a98: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335A9Cu; }
        if (ctx->pc != 0x335A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335A9Cu; }
        if (ctx->pc != 0x335A9Cu) { return; }
    }
    ctx->pc = 0x335A9Cu;
label_335a9c:
    // 0x335a9c: 0x100000f0  b           . + 4 + (0xF0 << 2)
label_335aa0:
    if (ctx->pc == 0x335AA0u) {
        ctx->pc = 0x335AA0u;
            // 0x335aa0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x335AA4u;
        goto label_335aa4;
    }
    ctx->pc = 0x335A9Cu;
    {
        const bool branch_taken_0x335a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335A9Cu;
            // 0x335aa0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335a9c) {
            ctx->pc = 0x335E60u;
            goto label_335e60;
        }
    }
    ctx->pc = 0x335AA4u;
label_335aa4:
    // 0x335aa4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x335aa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_335aa8:
    // 0x335aa8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x335aa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_335aac:
    // 0x335aac: 0x320f809  jalr        $t9
label_335ab0:
    if (ctx->pc == 0x335AB0u) {
        ctx->pc = 0x335AB4u;
        goto label_335ab4;
    }
    ctx->pc = 0x335AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x335AB4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x335AB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x335AB4u; }
            if (ctx->pc != 0x335AB4u) { return; }
        }
        }
    }
    ctx->pc = 0x335AB4u;
label_335ab4:
    // 0x335ab4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x335ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_335ab8:
    // 0x335ab8: 0x3c0b006f  lui         $t3, 0x6F
    ctx->pc = 0x335ab8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)111 << 16));
label_335abc:
    // 0x335abc: 0x8c650e80  lw          $a1, 0xE80($v1)
    ctx->pc = 0x335abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_335ac0:
    // 0x335ac0: 0x256b976c  addiu       $t3, $t3, -0x6894
    ctx->pc = 0x335ac0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294940524));
label_335ac4:
    // 0x335ac4: 0x8e070054  lw          $a3, 0x54($s0)
    ctx->pc = 0x335ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_335ac8:
    // 0x335ac8: 0x92040058  lbu         $a0, 0x58($s0)
    ctx->pc = 0x335ac8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
label_335acc:
    // 0x335acc: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x335accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_335ad0:
    // 0x335ad0: 0x8ca5095c  lw          $a1, 0x95C($a1)
    ctx->pc = 0x335ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2396)));
label_335ad4:
    // 0x335ad4: 0x34690010  ori         $t1, $v1, 0x10
    ctx->pc = 0x335ad4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_335ad8:
    // 0x335ad8: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x335ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_335adc:
    // 0x335adc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x335adcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_335ae0:
    // 0x335ae0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x335ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_335ae4:
    // 0x335ae4: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x335ae4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_335ae8:
    // 0x335ae8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x335ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_335aec:
    // 0x335aec: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x335aecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
label_335af0:
    // 0x335af0: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x335af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_335af4:
    // 0x335af4: 0x34880020  ori         $t0, $a0, 0x20
    ctx->pc = 0x335af4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
label_335af8:
    // 0x335af8: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x335af8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_335afc:
    // 0x335afc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x335afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_335b00:
    // 0x335b00: 0x1494824  and         $t1, $t2, $t1
    ctx->pc = 0x335b00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
label_335b04:
    // 0x335b04: 0x2ca30001  sltiu       $v1, $a1, 0x1
    ctx->pc = 0x335b04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_335b08:
    // 0x335b08: 0x9482b  sltu        $t1, $zero, $t1
    ctx->pc = 0x335b08u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_335b0c:
    // 0x335b0c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x335b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_335b10:
    // 0x335b10: 0xc93023  subu        $a2, $a2, $t1
    ctx->pc = 0x335b10u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_335b14:
    // 0x335b14: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x335b14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_335b18:
    // 0x335b18: 0x92090058  lbu         $t1, 0x58($s0)
    ctx->pc = 0x335b18u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
label_335b1c:
    // 0x335b1c: 0x8e070054  lw          $a3, 0x54($s0)
    ctx->pc = 0x335b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_335b20:
    // 0x335b20: 0x93040  sll         $a2, $t1, 1
    ctx->pc = 0x335b20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_335b24:
    // 0x335b24: 0xc94821  addu        $t1, $a2, $t1
    ctx->pc = 0x335b24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_335b28:
    // 0x335b28: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x335b28u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_335b2c:
    // 0x335b2c: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x335b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_335b30:
    // 0x335b30: 0x1694821  addu        $t1, $t3, $t1
    ctx->pc = 0x335b30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
label_335b34:
    // 0x335b34: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x335b34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_335b38:
    // 0x335b38: 0x1284024  and         $t0, $t1, $t0
    ctx->pc = 0x335b38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
label_335b3c:
    // 0x335b3c: 0x8402b  sltu        $t0, $zero, $t0
    ctx->pc = 0x335b3cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_335b40:
    // 0x335b40: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x335b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_335b44:
    // 0x335b44: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x335b44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_335b48:
    // 0x335b48: 0x8c8489d0  lw          $a0, -0x7630($a0)
    ctx->pc = 0x335b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937040)));
label_335b4c:
    // 0x335b4c: 0x8c840084  lw          $a0, 0x84($a0)
    ctx->pc = 0x335b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_335b50:
    // 0x335b50: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
label_335b54:
    if (ctx->pc == 0x335B54u) {
        ctx->pc = 0x335B58u;
        goto label_335b58;
    }
    ctx->pc = 0x335B50u;
    {
        const bool branch_taken_0x335b50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x335b50) {
            ctx->pc = 0x335B60u;
            goto label_335b60;
        }
    }
    ctx->pc = 0x335B58u;
label_335b58:
    // 0x335b58: 0x1000002b  b           . + 4 + (0x2B << 2)
label_335b5c:
    if (ctx->pc == 0x335B5Cu) {
        ctx->pc = 0x335B5Cu;
            // 0x335b5c: 0x82050059  lb          $a1, 0x59($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 89)));
        ctx->pc = 0x335B60u;
        goto label_335b60;
    }
    ctx->pc = 0x335B58u;
    {
        const bool branch_taken_0x335b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335B58u;
            // 0x335b5c: 0x82050059  lb          $a1, 0x59($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 89)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335b58) {
            ctx->pc = 0x335C08u;
            goto label_335c08;
        }
    }
    ctx->pc = 0x335B60u;
label_335b60:
    // 0x335b60: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
label_335b64:
    if (ctx->pc == 0x335B64u) {
        ctx->pc = 0x335B64u;
            // 0x335b64: 0x82050059  lb          $a1, 0x59($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 89)));
        ctx->pc = 0x335B68u;
        goto label_335b68;
    }
    ctx->pc = 0x335B60u;
    {
        const bool branch_taken_0x335b60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x335b60) {
            ctx->pc = 0x335B64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x335B60u;
            // 0x335b64: 0x82050059  lb          $a1, 0x59($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 89)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335BB4u;
            goto label_335bb4;
        }
    }
    ctx->pc = 0x335B68u;
label_335b68:
    // 0x335b68: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x335b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_335b6c:
    // 0x335b6c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x335b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_335b70:
    // 0x335b70: 0x8c630770  lw          $v1, 0x770($v1)
    ctx->pc = 0x335b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1904)));
label_335b74:
    // 0x335b74: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x335b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_335b78:
    // 0x335b78: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x335b78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_335b7c:
    // 0x335b7c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_335b80:
    if (ctx->pc == 0x335B80u) {
        ctx->pc = 0x335B84u;
        goto label_335b84;
    }
    ctx->pc = 0x335B7Cu;
    {
        const bool branch_taken_0x335b7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x335b7c) {
            ctx->pc = 0x335B8Cu;
            goto label_335b8c;
        }
    }
    ctx->pc = 0x335B84u;
label_335b84:
    // 0x335b84: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x335b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_335b88:
    // 0x335b88: 0x8c640778  lw          $a0, 0x778($v1)
    ctx->pc = 0x335b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1912)));
label_335b8c:
    // 0x335b8c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x335b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_335b90:
    // 0x335b90: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x335b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_335b94:
    // 0x335b94: 0x8c630778  lw          $v1, 0x778($v1)
    ctx->pc = 0x335b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1912)));
label_335b98:
    // 0x335b98: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x335b98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_335b9c:
    // 0x335b9c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_335ba0:
    if (ctx->pc == 0x335BA0u) {
        ctx->pc = 0x335BA4u;
        goto label_335ba4;
    }
    ctx->pc = 0x335B9Cu;
    {
        const bool branch_taken_0x335b9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x335b9c) {
            ctx->pc = 0x335BACu;
            goto label_335bac;
        }
    }
    ctx->pc = 0x335BA4u;
label_335ba4:
    // 0x335ba4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x335ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_335ba8:
    // 0x335ba8: 0x8c640770  lw          $a0, 0x770($v1)
    ctx->pc = 0x335ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1904)));
label_335bac:
    // 0x335bac: 0x1000002a  b           . + 4 + (0x2A << 2)
label_335bb0:
    if (ctx->pc == 0x335BB0u) {
        ctx->pc = 0x335BB0u;
            // 0x335bb0: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x335BB4u;
        goto label_335bb4;
    }
    ctx->pc = 0x335BACu;
    {
        const bool branch_taken_0x335bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335BACu;
            // 0x335bb0: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335bac) {
            ctx->pc = 0x335C58u;
            goto label_335c58;
        }
    }
    ctx->pc = 0x335BB4u;
label_335bb4:
    // 0x335bb4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x335bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_335bb8:
    // 0x335bb8: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x335bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_335bbc:
    // 0x335bbc: 0xa0302a  slt         $a2, $a1, $zero
    ctx->pc = 0x335bbcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_335bc0:
    // 0x335bc0: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x335bc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
label_335bc4:
    // 0x335bc4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x335bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_335bc8:
    // 0x335bc8: 0x24c70002  addiu       $a3, $a2, 0x2
    ctx->pc = 0x335bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_335bcc:
    // 0x335bcc: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x335bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_335bd0:
    // 0x335bd0: 0x90860080  lbu         $a2, 0x80($a0)
    ctx->pc = 0x335bd0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 128)));
label_335bd4:
    // 0x335bd4: 0x8c630780  lw          $v1, 0x780($v1)
    ctx->pc = 0x335bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1920)));
label_335bd8:
    // 0x335bd8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x335bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_335bdc:
    // 0x335bdc: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x335bdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_335be0:
    // 0x335be0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_335be4:
    if (ctx->pc == 0x335BE4u) {
        ctx->pc = 0x335BE4u;
            // 0x335be4: 0xe63023  subu        $a2, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->pc = 0x335BE8u;
        goto label_335be8;
    }
    ctx->pc = 0x335BE0u;
    {
        const bool branch_taken_0x335be0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x335BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335BE0u;
            // 0x335be4: 0xe63023  subu        $a2, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335be0) {
            ctx->pc = 0x335BECu;
            goto label_335bec;
        }
    }
    ctx->pc = 0x335BE8u;
label_335be8:
    // 0x335be8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x335be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_335bec:
    // 0x335bec: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x335becu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_335bf0:
    // 0x335bf0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_335bf4:
    if (ctx->pc == 0x335BF4u) {
        ctx->pc = 0x335BF4u;
            // 0x335bf4: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x335BF8u;
        goto label_335bf8;
    }
    ctx->pc = 0x335BF0u;
    {
        const bool branch_taken_0x335bf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x335BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335BF0u;
            // 0x335bf4: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335bf0) {
            ctx->pc = 0x335C00u;
            goto label_335c00;
        }
    }
    ctx->pc = 0x335BF8u;
label_335bf8:
    // 0x335bf8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x335bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_335bfc:
    // 0x335bfc: 0x8c640780  lw          $a0, 0x780($v1)
    ctx->pc = 0x335bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1920)));
label_335c00:
    // 0x335c00: 0x10000015  b           . + 4 + (0x15 << 2)
label_335c04:
    if (ctx->pc == 0x335C04u) {
        ctx->pc = 0x335C04u;
            // 0x335c04: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x335C08u;
        goto label_335c08;
    }
    ctx->pc = 0x335C00u;
    {
        const bool branch_taken_0x335c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335C00u;
            // 0x335c04: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335c00) {
            ctx->pc = 0x335C58u;
            goto label_335c58;
        }
    }
    ctx->pc = 0x335C08u;
label_335c08:
    // 0x335c08: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x335c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_335c0c:
    // 0x335c0c: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x335c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_335c10:
    // 0x335c10: 0xa0302a  slt         $a2, $a1, $zero
    ctx->pc = 0x335c10u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_335c14:
    // 0x335c14: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x335c14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
label_335c18:
    // 0x335c18: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x335c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_335c1c:
    // 0x335c1c: 0x24c70002  addiu       $a3, $a2, 0x2
    ctx->pc = 0x335c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_335c20:
    // 0x335c20: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x335c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_335c24:
    // 0x335c24: 0x90860080  lbu         $a2, 0x80($a0)
    ctx->pc = 0x335c24u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 128)));
label_335c28:
    // 0x335c28: 0x8c630788  lw          $v1, 0x788($v1)
    ctx->pc = 0x335c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1928)));
label_335c2c:
    // 0x335c2c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x335c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_335c30:
    // 0x335c30: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x335c30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_335c34:
    // 0x335c34: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_335c38:
    if (ctx->pc == 0x335C38u) {
        ctx->pc = 0x335C38u;
            // 0x335c38: 0xe63023  subu        $a2, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->pc = 0x335C3Cu;
        goto label_335c3c;
    }
    ctx->pc = 0x335C34u;
    {
        const bool branch_taken_0x335c34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x335C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335C34u;
            // 0x335c38: 0xe63023  subu        $a2, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335c34) {
            ctx->pc = 0x335C40u;
            goto label_335c40;
        }
    }
    ctx->pc = 0x335C3Cu;
label_335c3c:
    // 0x335c3c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x335c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_335c40:
    // 0x335c40: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x335c40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_335c44:
    // 0x335c44: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_335c48:
    if (ctx->pc == 0x335C48u) {
        ctx->pc = 0x335C48u;
            // 0x335c48: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x335C4Cu;
        goto label_335c4c;
    }
    ctx->pc = 0x335C44u;
    {
        const bool branch_taken_0x335c44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x335C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335C44u;
            // 0x335c48: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335c44) {
            ctx->pc = 0x335C54u;
            goto label_335c54;
        }
    }
    ctx->pc = 0x335C4Cu;
label_335c4c:
    // 0x335c4c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x335c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_335c50:
    // 0x335c50: 0x8c640788  lw          $a0, 0x788($v1)
    ctx->pc = 0x335c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1928)));
label_335c54:
    // 0x335c54: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x335c54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_335c58:
    // 0x335c58: 0x9203005a  lbu         $v1, 0x5A($s0)
    ctx->pc = 0x335c58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
label_335c5c:
    // 0x335c5c: 0x54600011  bnel        $v1, $zero, . + 4 + (0x11 << 2)
label_335c60:
    if (ctx->pc == 0x335C60u) {
        ctx->pc = 0x335C60u;
            // 0x335c60: 0x92060058  lbu         $a2, 0x58($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->pc = 0x335C64u;
        goto label_335c64;
    }
    ctx->pc = 0x335C5Cu;
    {
        const bool branch_taken_0x335c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x335c5c) {
            ctx->pc = 0x335C60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x335C5Cu;
            // 0x335c60: 0x92060058  lbu         $a2, 0x58($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335CA4u;
            goto label_335ca4;
        }
    }
    ctx->pc = 0x335C64u;
label_335c64:
    // 0x335c64: 0x92060058  lbu         $a2, 0x58($s0)
    ctx->pc = 0x335c64u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
label_335c68:
    // 0x335c68: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x335c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_335c6c:
    // 0x335c6c: 0x3c030300  lui         $v1, 0x300
    ctx->pc = 0x335c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)768 << 16));
label_335c70:
    // 0x335c70: 0x2484976c  addiu       $a0, $a0, -0x6894
    ctx->pc = 0x335c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940524));
label_335c74:
    // 0x335c74: 0x34630030  ori         $v1, $v1, 0x30
    ctx->pc = 0x335c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48);
label_335c78:
    // 0x335c78: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x335c78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_335c7c:
    // 0x335c7c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x335c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_335c80:
    // 0x335c80: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x335c80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_335c84:
    // 0x335c84: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x335c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_335c88:
    // 0x335c88: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x335c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_335c8c:
    // 0x335c8c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x335c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_335c90:
    // 0x335c90: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_335c94:
    if (ctx->pc == 0x335C94u) {
        ctx->pc = 0x335C98u;
        goto label_335c98;
    }
    ctx->pc = 0x335C90u;
    {
        const bool branch_taken_0x335c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x335c90) {
            ctx->pc = 0x335CA0u;
            goto label_335ca0;
        }
    }
    ctx->pc = 0x335C98u;
label_335c98:
    // 0x335c98: 0xc073234  jal         func_1CC8D0
label_335c9c:
    if (ctx->pc == 0x335C9Cu) {
        ctx->pc = 0x335C9Cu;
            // 0x335c9c: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->pc = 0x335CA0u;
        goto label_335ca0;
    }
    ctx->pc = 0x335C98u;
    SET_GPR_U32(ctx, 31, 0x335CA0u);
    ctx->pc = 0x335C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335C98u;
            // 0x335c9c: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335CA0u; }
        if (ctx->pc != 0x335CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335CA0u; }
        if (ctx->pc != 0x335CA0u) { return; }
    }
    ctx->pc = 0x335CA0u;
label_335ca0:
    // 0x335ca0: 0x92060058  lbu         $a2, 0x58($s0)
    ctx->pc = 0x335ca0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
label_335ca4:
    // 0x335ca4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x335ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_335ca8:
    // 0x335ca8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x335ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_335cac:
    // 0x335cac: 0x24849764  addiu       $a0, $a0, -0x689C
    ctx->pc = 0x335cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940516));
label_335cb0:
    // 0x335cb0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x335cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_335cb4:
    // 0x335cb4: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x335cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_335cb8:
    // 0x335cb8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x335cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_335cbc:
    // 0x335cbc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x335cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_335cc0:
    // 0x335cc0: 0x90630080  lbu         $v1, 0x80($v1)
    ctx->pc = 0x335cc0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 128)));
label_335cc4:
    // 0x335cc4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x335cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_335cc8:
    // 0x335cc8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x335cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_335ccc:
    // 0x335ccc: 0x30a40002  andi        $a0, $a1, 0x2
    ctx->pc = 0x335cccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_335cd0:
    // 0x335cd0: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_335cd4:
    if (ctx->pc == 0x335CD4u) {
        ctx->pc = 0x335CD4u;
            // 0x335cd4: 0x4302b  sltu        $a2, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->pc = 0x335CD8u;
        goto label_335cd8;
    }
    ctx->pc = 0x335CD0u;
    {
        const bool branch_taken_0x335cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x335CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335CD0u;
            // 0x335cd4: 0x4302b  sltu        $a2, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x335cd0) {
            ctx->pc = 0x335D0Cu;
            goto label_335d0c;
        }
    }
    ctx->pc = 0x335CD8u;
label_335cd8:
    // 0x335cd8: 0x30a30400  andi        $v1, $a1, 0x400
    ctx->pc = 0x335cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
label_335cdc:
    // 0x335cdc: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
label_335ce0:
    if (ctx->pc == 0x335CE0u) {
        ctx->pc = 0x335CE0u;
            // 0x335ce0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x335CE4u;
        goto label_335ce4;
    }
    ctx->pc = 0x335CDCu;
    {
        const bool branch_taken_0x335cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x335cdc) {
            ctx->pc = 0x335CE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x335CDCu;
            // 0x335ce0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335D10u;
            goto label_335d10;
        }
    }
    ctx->pc = 0x335CE4u;
label_335ce4:
    // 0x335ce4: 0x82040059  lb          $a0, 0x59($s0)
    ctx->pc = 0x335ce4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 89)));
label_335ce8:
    // 0x335ce8: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x335ce8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_335cec:
    // 0x335cec: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x335cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_335cf0:
    // 0x335cf0: 0x80282a  slt         $a1, $a0, $zero
    ctx->pc = 0x335cf0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_335cf4:
    // 0x335cf4: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x335cf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_335cf8:
    // 0x335cf8: 0x28840003  slti        $a0, $a0, 0x3
    ctx->pc = 0x335cf8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_335cfc:
    // 0x335cfc: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x335cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_335d00:
    // 0x335d00: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x335d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_335d04:
    // 0x335d04: 0x10000002  b           . + 4 + (0x2 << 2)
label_335d08:
    if (ctx->pc == 0x335D08u) {
        ctx->pc = 0x335D08u;
            // 0x335d08: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x335D0Cu;
        goto label_335d0c;
    }
    ctx->pc = 0x335D04u;
    {
        const bool branch_taken_0x335d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335D04u;
            // 0x335d08: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335d04) {
            ctx->pc = 0x335D10u;
            goto label_335d10;
        }
    }
    ctx->pc = 0x335D0Cu;
label_335d0c:
    // 0x335d0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x335d0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_335d10:
    // 0x335d10: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x335d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_335d14:
    // 0x335d14: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x335d14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_335d18:
    // 0x335d18: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x335d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_335d1c:
    // 0x335d1c: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x335d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_335d20:
    // 0x335d20: 0x3302b  sltu        $a2, $zero, $v1
    ctx->pc = 0x335d20u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_335d24:
    // 0x335d24: 0x8ce7a140  lw          $a3, -0x5EC0($a3)
    ctx->pc = 0x335d24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294943040)));
label_335d28:
    // 0x335d28: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x335d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_335d2c:
    // 0x335d2c: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x335d2cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_335d30:
    // 0x335d30: 0x8c680e80  lw          $t0, 0xE80($v1)
    ctx->pc = 0x335d30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_335d34:
    // 0x335d34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x335d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_335d38:
    // 0x335d38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x335d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_335d3c:
    // 0x335d3c: 0x24ec001c  addiu       $t4, $a3, 0x1C
    ctx->pc = 0x335d3cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
label_335d40:
    // 0x335d40: 0x254a9760  addiu       $t2, $t2, -0x68A0
    ctx->pc = 0x335d40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294940512));
label_335d44:
    // 0x335d44: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x335d44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_335d48:
    // 0x335d48: 0x8d0d0780  lw          $t5, 0x780($t0)
    ctx->pc = 0x335d48u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1920)));
label_335d4c:
    // 0x335d4c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x335d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_335d50:
    // 0x335d50: 0x24630e80  addiu       $v1, $v1, 0xE80
    ctx->pc = 0x335d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3712));
label_335d54:
    // 0x335d54: 0x64080001  daddiu      $t0, $zero, 0x1
    ctx->pc = 0x335d54u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_335d58:
    // 0x335d58: 0x8d082b  sltu        $at, $a0, $t5
    ctx->pc = 0x335d58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
label_335d5c:
    // 0x335d5c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_335d60:
    if (ctx->pc == 0x335D60u) {
        ctx->pc = 0x335D64u;
        goto label_335d64;
    }
    ctx->pc = 0x335D5Cu;
    {
        const bool branch_taken_0x335d5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x335d5c) {
            ctx->pc = 0x335DA8u;
            goto label_335da8;
        }
    }
    ctx->pc = 0x335D64u;
label_335d64:
    // 0x335d64: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x335d64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_335d68:
    // 0x335d68: 0x8ce70d68  lw          $a3, 0xD68($a3)
    ctx->pc = 0x335d68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3432)));
label_335d6c:
    // 0x335d6c: 0x8ceb0034  lw          $t3, 0x34($a3)
    ctx->pc = 0x335d6cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_335d70:
    // 0x335d70: 0xb3840  sll         $a3, $t3, 1
    ctx->pc = 0x335d70u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
label_335d74:
    // 0x335d74: 0xeb3821  addu        $a3, $a3, $t3
    ctx->pc = 0x335d74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_335d78:
    // 0x335d78: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x335d78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_335d7c:
    // 0x335d7c: 0x1473821  addu        $a3, $t2, $a3
    ctx->pc = 0x335d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_335d80:
    // 0x335d80: 0x90e7001e  lbu         $a3, 0x1E($a3)
    ctx->pc = 0x335d80u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 30)));
label_335d84:
    // 0x335d84: 0x10e90002  beq         $a3, $t1, . + 4 + (0x2 << 2)
label_335d88:
    if (ctx->pc == 0x335D88u) {
        ctx->pc = 0x335D8Cu;
        goto label_335d8c;
    }
    ctx->pc = 0x335D84u;
    {
        const bool branch_taken_0x335d84 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x335d84) {
            ctx->pc = 0x335D90u;
            goto label_335d90;
        }
    }
    ctx->pc = 0x335D8Cu;
label_335d8c:
    // 0x335d8c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x335d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_335d90:
    // 0x335d90: 0x8d870000  lw          $a3, 0x0($t4)
    ctx->pc = 0x335d90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_335d94:
    // 0x335d94: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x335d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_335d98:
    // 0x335d98: 0x87382b  sltu        $a3, $a0, $a3
    ctx->pc = 0x335d98u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_335d9c:
    // 0x335d9c: 0x14e0ffee  bnez        $a3, . + 4 + (-0x12 << 2)
label_335da0:
    if (ctx->pc == 0x335DA0u) {
        ctx->pc = 0x335DA0u;
            // 0x335da0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x335DA4u;
        goto label_335da4;
    }
    ctx->pc = 0x335D9Cu;
    {
        const bool branch_taken_0x335d9c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x335DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335D9Cu;
            // 0x335da0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335d9c) {
            ctx->pc = 0x335D58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_335d58;
        }
    }
    ctx->pc = 0x335DA4u;
label_335da4:
    // 0x335da4: 0x0  nop
    ctx->pc = 0x335da4u;
    // NOP
label_335da8:
    // 0x335da8: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_335dac:
    if (ctx->pc == 0x335DACu) {
        ctx->pc = 0x335DB0u;
        goto label_335db0;
    }
    ctx->pc = 0x335DA8u;
    {
        const bool branch_taken_0x335da8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x335da8) {
            ctx->pc = 0x335DB4u;
            goto label_335db4;
        }
    }
    ctx->pc = 0x335DB0u;
label_335db0:
    // 0x335db0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x335db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_335db4:
    // 0x335db4: 0x10c00029  beqz        $a2, . + 4 + (0x29 << 2)
label_335db8:
    if (ctx->pc == 0x335DB8u) {
        ctx->pc = 0x335DBCu;
        goto label_335dbc;
    }
    ctx->pc = 0x335DB4u;
    {
        const bool branch_taken_0x335db4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x335db4) {
            ctx->pc = 0x335E5Cu;
            goto label_335e5c;
        }
    }
    ctx->pc = 0x335DBCu;
label_335dbc:
    // 0x335dbc: 0x82050059  lb          $a1, 0x59($s0)
    ctx->pc = 0x335dbcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 89)));
label_335dc0:
    // 0x335dc0: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_335dc4:
    if (ctx->pc == 0x335DC4u) {
        ctx->pc = 0x335DC8u;
        goto label_335dc8;
    }
    ctx->pc = 0x335DC0u;
    {
        const bool branch_taken_0x335dc0 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x335dc0) {
            ctx->pc = 0x335DF4u;
            goto label_335df4;
        }
    }
    ctx->pc = 0x335DC8u;
label_335dc8:
    // 0x335dc8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x335dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_335dcc:
    // 0x335dcc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x335dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_335dd0:
    // 0x335dd0: 0x54a30004  bnel        $a1, $v1, . + 4 + (0x4 << 2)
label_335dd4:
    if (ctx->pc == 0x335DD4u) {
        ctx->pc = 0x335DD4u;
            // 0x335dd4: 0xa3082a  slt         $at, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->pc = 0x335DD8u;
        goto label_335dd8;
    }
    ctx->pc = 0x335DD0u;
    {
        const bool branch_taken_0x335dd0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x335dd0) {
            ctx->pc = 0x335DD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x335DD0u;
            // 0x335dd4: 0xa3082a  slt         $at, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x335DE4u;
            goto label_335de4;
        }
    }
    ctx->pc = 0x335DD8u;
label_335dd8:
    // 0x335dd8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x335dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_335ddc:
    // 0x335ddc: 0x10000005  b           . + 4 + (0x5 << 2)
label_335de0:
    if (ctx->pc == 0x335DE0u) {
        ctx->pc = 0x335DE0u;
            // 0x335de0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x335DE4u;
        goto label_335de4;
    }
    ctx->pc = 0x335DDCu;
    {
        const bool branch_taken_0x335ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335DDCu;
            // 0x335de0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335ddc) {
            ctx->pc = 0x335DF4u;
            goto label_335df4;
        }
    }
    ctx->pc = 0x335DE4u;
label_335de4:
    // 0x335de4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_335de8:
    if (ctx->pc == 0x335DE8u) {
        ctx->pc = 0x335DECu;
        goto label_335dec;
    }
    ctx->pc = 0x335DE4u;
    {
        const bool branch_taken_0x335de4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x335de4) {
            ctx->pc = 0x335DF4u;
            goto label_335df4;
        }
    }
    ctx->pc = 0x335DECu;
label_335dec:
    // 0x335dec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x335decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_335df0:
    // 0x335df0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x335df0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_335df4:
    // 0x335df4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x335df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_335df8:
    // 0x335df8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x335df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_335dfc:
    // 0x335dfc: 0x90630080  lbu         $v1, 0x80($v1)
    ctx->pc = 0x335dfcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 128)));
label_335e00:
    // 0x335e00: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_335e04:
    if (ctx->pc == 0x335E04u) {
        ctx->pc = 0x335E08u;
        goto label_335e08;
    }
    ctx->pc = 0x335E00u;
    {
        const bool branch_taken_0x335e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x335e00) {
            ctx->pc = 0x335E1Cu;
            goto label_335e1c;
        }
    }
    ctx->pc = 0x335E08u;
label_335e08:
    // 0x335e08: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x335e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_335e0c:
    // 0x335e0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x335e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_335e10:
    // 0x335e10: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x335e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_335e14:
    // 0x335e14: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_335e18:
    if (ctx->pc == 0x335E18u) {
        ctx->pc = 0x335E1Cu;
        goto label_335e1c;
    }
    ctx->pc = 0x335E14u;
    {
        const bool branch_taken_0x335e14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x335e14) {
            ctx->pc = 0x335E5Cu;
            goto label_335e5c;
        }
    }
    ctx->pc = 0x335E1Cu;
label_335e1c:
    // 0x335e1c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x335e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_335e20:
    // 0x335e20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x335e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_335e24:
    // 0x335e24: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x335e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_335e28:
    // 0x335e28: 0xc057b7c  jal         func_15EDF0
label_335e2c:
    if (ctx->pc == 0x335E2Cu) {
        ctx->pc = 0x335E2Cu;
            // 0x335e2c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x335E30u;
        goto label_335e30;
    }
    ctx->pc = 0x335E28u;
    SET_GPR_U32(ctx, 31, 0x335E30u);
    ctx->pc = 0x335E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335E28u;
            // 0x335e2c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335E30u; }
        if (ctx->pc != 0x335E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335E30u; }
        if (ctx->pc != 0x335E30u) { return; }
    }
    ctx->pc = 0x335E30u;
label_335e30:
    // 0x335e30: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x335e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_335e34:
    // 0x335e34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x335e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_335e38:
    // 0x335e38: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_335e3c:
    if (ctx->pc == 0x335E3Cu) {
        ctx->pc = 0x335E3Cu;
            // 0x335e3c: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->pc = 0x335E40u;
        goto label_335e40;
    }
    ctx->pc = 0x335E38u;
    {
        const bool branch_taken_0x335e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x335e38) {
            ctx->pc = 0x335E3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x335E38u;
            // 0x335e3c: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335E54u;
            goto label_335e54;
        }
    }
    ctx->pc = 0x335E40u;
label_335e40:
    // 0x335e40: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x335e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_335e44:
    // 0x335e44: 0xc073234  jal         func_1CC8D0
label_335e48:
    if (ctx->pc == 0x335E48u) {
        ctx->pc = 0x335E48u;
            // 0x335e48: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x335E4Cu;
        goto label_335e4c;
    }
    ctx->pc = 0x335E44u;
    SET_GPR_U32(ctx, 31, 0x335E4Cu);
    ctx->pc = 0x335E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335E44u;
            // 0x335e48: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335E4Cu; }
        if (ctx->pc != 0x335E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335E4Cu; }
        if (ctx->pc != 0x335E4Cu) { return; }
    }
    ctx->pc = 0x335E4Cu;
label_335e4c:
    // 0x335e4c: 0x10000003  b           . + 4 + (0x3 << 2)
label_335e50:
    if (ctx->pc == 0x335E50u) {
        ctx->pc = 0x335E54u;
        goto label_335e54;
    }
    ctx->pc = 0x335E4Cu;
    {
        const bool branch_taken_0x335e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x335e4c) {
            ctx->pc = 0x335E5Cu;
            goto label_335e5c;
        }
    }
    ctx->pc = 0x335E54u;
label_335e54:
    // 0x335e54: 0xc073234  jal         func_1CC8D0
label_335e58:
    if (ctx->pc == 0x335E58u) {
        ctx->pc = 0x335E58u;
            // 0x335e58: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x335E5Cu;
        goto label_335e5c;
    }
    ctx->pc = 0x335E54u;
    SET_GPR_U32(ctx, 31, 0x335E5Cu);
    ctx->pc = 0x335E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335E54u;
            // 0x335e58: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335E5Cu; }
        if (ctx->pc != 0x335E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335E5Cu; }
        if (ctx->pc != 0x335E5Cu) { return; }
    }
    ctx->pc = 0x335E5Cu;
label_335e5c:
    // 0x335e5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x335e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_335e60:
    // 0x335e60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x335e60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_335e64:
    // 0x335e64: 0x3e00008  jr          $ra
label_335e68:
    if (ctx->pc == 0x335E68u) {
        ctx->pc = 0x335E68u;
            // 0x335e68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x335E6Cu;
        goto label_335e6c;
    }
    ctx->pc = 0x335E64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335E64u;
            // 0x335e68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x335E6Cu;
label_335e6c:
    // 0x335e6c: 0x0  nop
    ctx->pc = 0x335e6cu;
    // NOP
label_335e70:
    // 0x335e70: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x335e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_335e74:
    // 0x335e74: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x335e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_335e78:
    // 0x335e78: 0x3e00008  jr          $ra
label_335e7c:
    if (ctx->pc == 0x335E7Cu) {
        ctx->pc = 0x335E7Cu;
            // 0x335e7c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x335E80u;
        goto label_fallthrough_0x335e78;
    }
    ctx->pc = 0x335E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335E78u;
            // 0x335e7c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x335e78:
    ctx->pc = 0x335E80u;
}
