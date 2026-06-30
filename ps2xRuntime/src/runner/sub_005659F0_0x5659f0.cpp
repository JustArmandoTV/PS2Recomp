#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005659F0
// Address: 0x5659f0 - 0x565d50
void sub_005659F0_0x5659f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005659F0_0x5659f0");
#endif

    switch (ctx->pc) {
        case 0x5659f0u: goto label_5659f0;
        case 0x5659f4u: goto label_5659f4;
        case 0x5659f8u: goto label_5659f8;
        case 0x5659fcu: goto label_5659fc;
        case 0x565a00u: goto label_565a00;
        case 0x565a04u: goto label_565a04;
        case 0x565a08u: goto label_565a08;
        case 0x565a0cu: goto label_565a0c;
        case 0x565a10u: goto label_565a10;
        case 0x565a14u: goto label_565a14;
        case 0x565a18u: goto label_565a18;
        case 0x565a1cu: goto label_565a1c;
        case 0x565a20u: goto label_565a20;
        case 0x565a24u: goto label_565a24;
        case 0x565a28u: goto label_565a28;
        case 0x565a2cu: goto label_565a2c;
        case 0x565a30u: goto label_565a30;
        case 0x565a34u: goto label_565a34;
        case 0x565a38u: goto label_565a38;
        case 0x565a3cu: goto label_565a3c;
        case 0x565a40u: goto label_565a40;
        case 0x565a44u: goto label_565a44;
        case 0x565a48u: goto label_565a48;
        case 0x565a4cu: goto label_565a4c;
        case 0x565a50u: goto label_565a50;
        case 0x565a54u: goto label_565a54;
        case 0x565a58u: goto label_565a58;
        case 0x565a5cu: goto label_565a5c;
        case 0x565a60u: goto label_565a60;
        case 0x565a64u: goto label_565a64;
        case 0x565a68u: goto label_565a68;
        case 0x565a6cu: goto label_565a6c;
        case 0x565a70u: goto label_565a70;
        case 0x565a74u: goto label_565a74;
        case 0x565a78u: goto label_565a78;
        case 0x565a7cu: goto label_565a7c;
        case 0x565a80u: goto label_565a80;
        case 0x565a84u: goto label_565a84;
        case 0x565a88u: goto label_565a88;
        case 0x565a8cu: goto label_565a8c;
        case 0x565a90u: goto label_565a90;
        case 0x565a94u: goto label_565a94;
        case 0x565a98u: goto label_565a98;
        case 0x565a9cu: goto label_565a9c;
        case 0x565aa0u: goto label_565aa0;
        case 0x565aa4u: goto label_565aa4;
        case 0x565aa8u: goto label_565aa8;
        case 0x565aacu: goto label_565aac;
        case 0x565ab0u: goto label_565ab0;
        case 0x565ab4u: goto label_565ab4;
        case 0x565ab8u: goto label_565ab8;
        case 0x565abcu: goto label_565abc;
        case 0x565ac0u: goto label_565ac0;
        case 0x565ac4u: goto label_565ac4;
        case 0x565ac8u: goto label_565ac8;
        case 0x565accu: goto label_565acc;
        case 0x565ad0u: goto label_565ad0;
        case 0x565ad4u: goto label_565ad4;
        case 0x565ad8u: goto label_565ad8;
        case 0x565adcu: goto label_565adc;
        case 0x565ae0u: goto label_565ae0;
        case 0x565ae4u: goto label_565ae4;
        case 0x565ae8u: goto label_565ae8;
        case 0x565aecu: goto label_565aec;
        case 0x565af0u: goto label_565af0;
        case 0x565af4u: goto label_565af4;
        case 0x565af8u: goto label_565af8;
        case 0x565afcu: goto label_565afc;
        case 0x565b00u: goto label_565b00;
        case 0x565b04u: goto label_565b04;
        case 0x565b08u: goto label_565b08;
        case 0x565b0cu: goto label_565b0c;
        case 0x565b10u: goto label_565b10;
        case 0x565b14u: goto label_565b14;
        case 0x565b18u: goto label_565b18;
        case 0x565b1cu: goto label_565b1c;
        case 0x565b20u: goto label_565b20;
        case 0x565b24u: goto label_565b24;
        case 0x565b28u: goto label_565b28;
        case 0x565b2cu: goto label_565b2c;
        case 0x565b30u: goto label_565b30;
        case 0x565b34u: goto label_565b34;
        case 0x565b38u: goto label_565b38;
        case 0x565b3cu: goto label_565b3c;
        case 0x565b40u: goto label_565b40;
        case 0x565b44u: goto label_565b44;
        case 0x565b48u: goto label_565b48;
        case 0x565b4cu: goto label_565b4c;
        case 0x565b50u: goto label_565b50;
        case 0x565b54u: goto label_565b54;
        case 0x565b58u: goto label_565b58;
        case 0x565b5cu: goto label_565b5c;
        case 0x565b60u: goto label_565b60;
        case 0x565b64u: goto label_565b64;
        case 0x565b68u: goto label_565b68;
        case 0x565b6cu: goto label_565b6c;
        case 0x565b70u: goto label_565b70;
        case 0x565b74u: goto label_565b74;
        case 0x565b78u: goto label_565b78;
        case 0x565b7cu: goto label_565b7c;
        case 0x565b80u: goto label_565b80;
        case 0x565b84u: goto label_565b84;
        case 0x565b88u: goto label_565b88;
        case 0x565b8cu: goto label_565b8c;
        case 0x565b90u: goto label_565b90;
        case 0x565b94u: goto label_565b94;
        case 0x565b98u: goto label_565b98;
        case 0x565b9cu: goto label_565b9c;
        case 0x565ba0u: goto label_565ba0;
        case 0x565ba4u: goto label_565ba4;
        case 0x565ba8u: goto label_565ba8;
        case 0x565bacu: goto label_565bac;
        case 0x565bb0u: goto label_565bb0;
        case 0x565bb4u: goto label_565bb4;
        case 0x565bb8u: goto label_565bb8;
        case 0x565bbcu: goto label_565bbc;
        case 0x565bc0u: goto label_565bc0;
        case 0x565bc4u: goto label_565bc4;
        case 0x565bc8u: goto label_565bc8;
        case 0x565bccu: goto label_565bcc;
        case 0x565bd0u: goto label_565bd0;
        case 0x565bd4u: goto label_565bd4;
        case 0x565bd8u: goto label_565bd8;
        case 0x565bdcu: goto label_565bdc;
        case 0x565be0u: goto label_565be0;
        case 0x565be4u: goto label_565be4;
        case 0x565be8u: goto label_565be8;
        case 0x565becu: goto label_565bec;
        case 0x565bf0u: goto label_565bf0;
        case 0x565bf4u: goto label_565bf4;
        case 0x565bf8u: goto label_565bf8;
        case 0x565bfcu: goto label_565bfc;
        case 0x565c00u: goto label_565c00;
        case 0x565c04u: goto label_565c04;
        case 0x565c08u: goto label_565c08;
        case 0x565c0cu: goto label_565c0c;
        case 0x565c10u: goto label_565c10;
        case 0x565c14u: goto label_565c14;
        case 0x565c18u: goto label_565c18;
        case 0x565c1cu: goto label_565c1c;
        case 0x565c20u: goto label_565c20;
        case 0x565c24u: goto label_565c24;
        case 0x565c28u: goto label_565c28;
        case 0x565c2cu: goto label_565c2c;
        case 0x565c30u: goto label_565c30;
        case 0x565c34u: goto label_565c34;
        case 0x565c38u: goto label_565c38;
        case 0x565c3cu: goto label_565c3c;
        case 0x565c40u: goto label_565c40;
        case 0x565c44u: goto label_565c44;
        case 0x565c48u: goto label_565c48;
        case 0x565c4cu: goto label_565c4c;
        case 0x565c50u: goto label_565c50;
        case 0x565c54u: goto label_565c54;
        case 0x565c58u: goto label_565c58;
        case 0x565c5cu: goto label_565c5c;
        case 0x565c60u: goto label_565c60;
        case 0x565c64u: goto label_565c64;
        case 0x565c68u: goto label_565c68;
        case 0x565c6cu: goto label_565c6c;
        case 0x565c70u: goto label_565c70;
        case 0x565c74u: goto label_565c74;
        case 0x565c78u: goto label_565c78;
        case 0x565c7cu: goto label_565c7c;
        case 0x565c80u: goto label_565c80;
        case 0x565c84u: goto label_565c84;
        case 0x565c88u: goto label_565c88;
        case 0x565c8cu: goto label_565c8c;
        case 0x565c90u: goto label_565c90;
        case 0x565c94u: goto label_565c94;
        case 0x565c98u: goto label_565c98;
        case 0x565c9cu: goto label_565c9c;
        case 0x565ca0u: goto label_565ca0;
        case 0x565ca4u: goto label_565ca4;
        case 0x565ca8u: goto label_565ca8;
        case 0x565cacu: goto label_565cac;
        case 0x565cb0u: goto label_565cb0;
        case 0x565cb4u: goto label_565cb4;
        case 0x565cb8u: goto label_565cb8;
        case 0x565cbcu: goto label_565cbc;
        case 0x565cc0u: goto label_565cc0;
        case 0x565cc4u: goto label_565cc4;
        case 0x565cc8u: goto label_565cc8;
        case 0x565cccu: goto label_565ccc;
        case 0x565cd0u: goto label_565cd0;
        case 0x565cd4u: goto label_565cd4;
        case 0x565cd8u: goto label_565cd8;
        case 0x565cdcu: goto label_565cdc;
        case 0x565ce0u: goto label_565ce0;
        case 0x565ce4u: goto label_565ce4;
        case 0x565ce8u: goto label_565ce8;
        case 0x565cecu: goto label_565cec;
        case 0x565cf0u: goto label_565cf0;
        case 0x565cf4u: goto label_565cf4;
        case 0x565cf8u: goto label_565cf8;
        case 0x565cfcu: goto label_565cfc;
        case 0x565d00u: goto label_565d00;
        case 0x565d04u: goto label_565d04;
        case 0x565d08u: goto label_565d08;
        case 0x565d0cu: goto label_565d0c;
        case 0x565d10u: goto label_565d10;
        case 0x565d14u: goto label_565d14;
        case 0x565d18u: goto label_565d18;
        case 0x565d1cu: goto label_565d1c;
        case 0x565d20u: goto label_565d20;
        case 0x565d24u: goto label_565d24;
        case 0x565d28u: goto label_565d28;
        case 0x565d2cu: goto label_565d2c;
        case 0x565d30u: goto label_565d30;
        case 0x565d34u: goto label_565d34;
        case 0x565d38u: goto label_565d38;
        case 0x565d3cu: goto label_565d3c;
        case 0x565d40u: goto label_565d40;
        case 0x565d44u: goto label_565d44;
        case 0x565d48u: goto label_565d48;
        case 0x565d4cu: goto label_565d4c;
        default: break;
    }

    ctx->pc = 0x5659f0u;

label_5659f0:
    // 0x5659f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5659f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_5659f4:
    // 0x5659f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5659f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_5659f8:
    // 0x5659f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5659f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5659fc:
    // 0x5659fc: 0x9082007f  lbu         $v0, 0x7F($a0)
    ctx->pc = 0x5659fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 127)));
label_565a00:
    // 0x565a00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_565a04:
    if (ctx->pc == 0x565A04u) {
        ctx->pc = 0x565A04u;
            // 0x565a04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x565A08u;
        goto label_565a08;
    }
    ctx->pc = 0x565A00u;
    {
        const bool branch_taken_0x565a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x565A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565A00u;
            // 0x565a04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x565a00) {
            ctx->pc = 0x565A18u;
            goto label_565a18;
        }
    }
    ctx->pc = 0x565A08u;
label_565a08:
    // 0x565a08: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x565a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_565a0c:
    // 0x565a0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x565a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_565a10:
    // 0x565a10: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_565a14:
    if (ctx->pc == 0x565A14u) {
        ctx->pc = 0x565A18u;
        goto label_565a18;
    }
    ctx->pc = 0x565A10u;
    {
        const bool branch_taken_0x565a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x565a10) {
            ctx->pc = 0x565A20u;
            goto label_565a20;
        }
    }
    ctx->pc = 0x565A18u;
label_565a18:
    // 0x565a18: 0x10000058  b           . + 4 + (0x58 << 2)
label_565a1c:
    if (ctx->pc == 0x565A1Cu) {
        ctx->pc = 0x565A1Cu;
            // 0x565a1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x565A20u;
        goto label_565a20;
    }
    ctx->pc = 0x565A18u;
    {
        const bool branch_taken_0x565a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x565A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565A18u;
            // 0x565a1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x565a18) {
            ctx->pc = 0x565B7Cu;
            goto label_565b7c;
        }
    }
    ctx->pc = 0x565A20u;
label_565a20:
    // 0x565a20: 0x14a0004d  bnez        $a1, . + 4 + (0x4D << 2)
label_565a24:
    if (ctx->pc == 0x565A24u) {
        ctx->pc = 0x565A28u;
        goto label_565a28;
    }
    ctx->pc = 0x565A20u;
    {
        const bool branch_taken_0x565a20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x565a20) {
            ctx->pc = 0x565B58u;
            goto label_565b58;
        }
    }
    ctx->pc = 0x565A28u;
label_565a28:
    // 0x565a28: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x565a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_565a2c:
    // 0x565a2c: 0x8202007d  lb          $v0, 0x7D($s0)
    ctx->pc = 0x565a2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 125)));
label_565a30:
    // 0x565a30: 0x8c67976c  lw          $a3, -0x6894($v1)
    ctx->pc = 0x565a30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940524)));
label_565a34:
    // 0x565a34: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x565a34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
label_565a38:
    // 0x565a38: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x565a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_565a3c:
    // 0x565a3c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x565a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_565a40:
    // 0x565a40: 0x34660010  ori         $a2, $v1, 0x10
    ctx->pc = 0x565a40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_565a44:
    // 0x565a44: 0xe63824  and         $a3, $a3, $a2
    ctx->pc = 0x565a44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_565a48:
    // 0x565a48: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x565a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_565a4c:
    // 0x565a4c: 0x34a60020  ori         $a2, $a1, 0x20
    ctx->pc = 0x565a4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32);
label_565a50:
    // 0x565a50: 0x7282b  sltu        $a1, $zero, $a3
    ctx->pc = 0x565a50u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_565a54:
    // 0x565a54: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x565a54u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_565a58:
    // 0x565a58: 0xa205007d  sb          $a1, 0x7D($s0)
    ctx->pc = 0x565a58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 125), (uint8_t)GPR_U32(ctx, 5));
label_565a5c:
    // 0x565a5c: 0x8c84976c  lw          $a0, -0x6894($a0)
    ctx->pc = 0x565a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294940524)));
label_565a60:
    // 0x565a60: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x565a60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
label_565a64:
    // 0x565a64: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x565a64u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_565a68:
    // 0x565a68: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x565a68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_565a6c:
    // 0x565a6c: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x565a6cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_565a70:
    // 0x565a70: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x565a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_565a74:
    // 0x565a74: 0xa204007d  sb          $a0, 0x7D($s0)
    ctx->pc = 0x565a74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 125), (uint8_t)GPR_U32(ctx, 4));
label_565a78:
    // 0x565a78: 0x8c63df90  lw          $v1, -0x2070($v1)
    ctx->pc = 0x565a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958992)));
label_565a7c:
    // 0x565a7c: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x565a7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_565a80:
    // 0x565a80: 0x8205007c  lb          $a1, 0x7C($s0)
    ctx->pc = 0x565a80u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 124)));
label_565a84:
    // 0x565a84: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x565a84u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_565a88:
    // 0x565a88: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x565a88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_565a8c:
    // 0x565a8c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_565a90:
    if (ctx->pc == 0x565A90u) {
        ctx->pc = 0x565A90u;
            // 0x565a90: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->pc = 0x565A94u;
        goto label_565a94;
    }
    ctx->pc = 0x565A8Cu;
    {
        const bool branch_taken_0x565a8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x565A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565A8Cu;
            // 0x565a90: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x565a8c) {
            ctx->pc = 0x565A98u;
            goto label_565a98;
        }
    }
    ctx->pc = 0x565A94u;
label_565a94:
    // 0x565a94: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x565a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_565a98:
    // 0x565a98: 0xa204007d  sb          $a0, 0x7D($s0)
    ctx->pc = 0x565a98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 125), (uint8_t)GPR_U32(ctx, 4));
label_565a9c:
    // 0x565a9c: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x565a9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_565aa0:
    // 0x565aa0: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x565aa0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_565aa4:
    // 0x565aa4: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x565aa4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_565aa8:
    // 0x565aa8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_565aac:
    if (ctx->pc == 0x565AACu) {
        ctx->pc = 0x565AB0u;
        goto label_565ab0;
    }
    ctx->pc = 0x565AA8u;
    {
        const bool branch_taken_0x565aa8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x565aa8) {
            ctx->pc = 0x565AB8u;
            goto label_565ab8;
        }
    }
    ctx->pc = 0x565AB0u;
label_565ab0:
    // 0x565ab0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x565ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_565ab4:
    // 0x565ab4: 0x8c64df90  lw          $a0, -0x2070($v1)
    ctx->pc = 0x565ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958992)));
label_565ab8:
    // 0x565ab8: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x565ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_565abc:
    // 0x565abc: 0x4163c  dsll32      $v0, $a0, 24
    ctx->pc = 0x565abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 24));
label_565ac0:
    // 0x565ac0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x565ac0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_565ac4:
    // 0x565ac4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x565ac4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_565ac8:
    // 0x565ac8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_565acc:
    if (ctx->pc == 0x565ACCu) {
        ctx->pc = 0x565ACCu;
            // 0x565acc: 0xa204007d  sb          $a0, 0x7D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 125), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x565AD0u;
        goto label_565ad0;
    }
    ctx->pc = 0x565AC8u;
    {
        const bool branch_taken_0x565ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x565ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565AC8u;
            // 0x565acc: 0xa204007d  sb          $a0, 0x7D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 125), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x565ac8) {
            ctx->pc = 0x565AD8u;
            goto label_565ad8;
        }
    }
    ctx->pc = 0x565AD0u;
label_565ad0:
    // 0x565ad0: 0xc073234  jal         func_1CC8D0
label_565ad4:
    if (ctx->pc == 0x565AD4u) {
        ctx->pc = 0x565AD4u;
            // 0x565ad4: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->pc = 0x565AD8u;
        goto label_565ad8;
    }
    ctx->pc = 0x565AD0u;
    SET_GPR_U32(ctx, 31, 0x565AD8u);
    ctx->pc = 0x565AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x565AD0u;
            // 0x565ad4: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565AD8u; }
        if (ctx->pc != 0x565AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565AD8u; }
        if (ctx->pc != 0x565AD8u) { return; }
    }
    ctx->pc = 0x565AD8u;
label_565ad8:
    // 0x565ad8: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x565ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_565adc:
    // 0x565adc: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
label_565ae0:
    if (ctx->pc == 0x565AE0u) {
        ctx->pc = 0x565AE4u;
        goto label_565ae4;
    }
    ctx->pc = 0x565ADCu;
    {
        const bool branch_taken_0x565adc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x565adc) {
            ctx->pc = 0x565B58u;
            goto label_565b58;
        }
    }
    ctx->pc = 0x565AE4u;
label_565ae4:
    // 0x565ae4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x565ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_565ae8:
    // 0x565ae8: 0x8c429764  lw          $v0, -0x689C($v0)
    ctx->pc = 0x565ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940516)));
label_565aec:
    // 0x565aec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x565aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_565af0:
    // 0x565af0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_565af4:
    if (ctx->pc == 0x565AF4u) {
        ctx->pc = 0x565AF8u;
        goto label_565af8;
    }
    ctx->pc = 0x565AF0u;
    {
        const bool branch_taken_0x565af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x565af0) {
            ctx->pc = 0x565B58u;
            goto label_565b58;
        }
    }
    ctx->pc = 0x565AF8u;
label_565af8:
    // 0x565af8: 0x8203007c  lb          $v1, 0x7C($s0)
    ctx->pc = 0x565af8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 124)));
label_565afc:
    // 0x565afc: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_565b00:
    if (ctx->pc == 0x565B00u) {
        ctx->pc = 0x565B00u;
            // 0x565b00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x565B04u;
        goto label_565b04;
    }
    ctx->pc = 0x565AFCu;
    {
        const bool branch_taken_0x565afc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x565B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565AFCu;
            // 0x565b00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x565afc) {
            ctx->pc = 0x565B30u;
            goto label_565b30;
        }
    }
    ctx->pc = 0x565B04u;
label_565b04:
    // 0x565b04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x565b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_565b08:
    // 0x565b08: 0x8ca2006c  lw          $v0, 0x6C($a1)
    ctx->pc = 0x565b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
label_565b0c:
    // 0x565b0c: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
label_565b10:
    if (ctx->pc == 0x565B10u) {
        ctx->pc = 0x565B10u;
            // 0x565b10: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x565B14u;
        goto label_565b14;
    }
    ctx->pc = 0x565B0Cu;
    {
        const bool branch_taken_0x565b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x565b0c) {
            ctx->pc = 0x565B10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x565B0Cu;
            // 0x565b10: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x565B20u;
            goto label_565b20;
        }
    }
    ctx->pc = 0x565B14u;
label_565b14:
    // 0x565b14: 0x6163c  dsll32      $v0, $a2, 24
    ctx->pc = 0x565b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 24));
label_565b18:
    // 0x565b18: 0x10000006  b           . + 4 + (0x6 << 2)
label_565b1c:
    if (ctx->pc == 0x565B1Cu) {
        ctx->pc = 0x565B1Cu;
            // 0x565b1c: 0x2163f  dsra32      $v0, $v0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
        ctx->pc = 0x565B20u;
        goto label_565b20;
    }
    ctx->pc = 0x565B18u;
    {
        const bool branch_taken_0x565b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x565B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565B18u;
            // 0x565b1c: 0x2163f  dsra32      $v0, $v0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x565b18) {
            ctx->pc = 0x565B34u;
            goto label_565b34;
        }
    }
    ctx->pc = 0x565B20u;
label_565b20:
    // 0x565b20: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x565b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_565b24:
    // 0x565b24: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_565b28:
    if (ctx->pc == 0x565B28u) {
        ctx->pc = 0x565B28u;
            // 0x565b28: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x565B2Cu;
        goto label_565b2c;
    }
    ctx->pc = 0x565B24u;
    {
        const bool branch_taken_0x565b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x565B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565B24u;
            // 0x565b28: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x565b24) {
            ctx->pc = 0x565B08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_565b08;
        }
    }
    ctx->pc = 0x565B2Cu;
label_565b2c:
    // 0x565b2c: 0x0  nop
    ctx->pc = 0x565b2cu;
    // NOP
label_565b30:
    // 0x565b30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x565b30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_565b34:
    // 0x565b34: 0xa202007d  sb          $v0, 0x7D($s0)
    ctx->pc = 0x565b34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 125), (uint8_t)GPR_U32(ctx, 2));
label_565b38:
    // 0x565b38: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x565b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_565b3c:
    // 0x565b3c: 0xc073234  jal         func_1CC8D0
label_565b40:
    if (ctx->pc == 0x565B40u) {
        ctx->pc = 0x565B40u;
            // 0x565b40: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x565B44u;
        goto label_565b44;
    }
    ctx->pc = 0x565B3Cu;
    SET_GPR_U32(ctx, 31, 0x565B44u);
    ctx->pc = 0x565B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x565B3Cu;
            // 0x565b40: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565B44u; }
        if (ctx->pc != 0x565B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565B44u; }
        if (ctx->pc != 0x565B44u) { return; }
    }
    ctx->pc = 0x565B44u;
label_565b44:
    // 0x565b44: 0x92020081  lbu         $v0, 0x81($s0)
    ctx->pc = 0x565b44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 129)));
label_565b48:
    // 0x565b48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_565b4c:
    if (ctx->pc == 0x565B4Cu) {
        ctx->pc = 0x565B50u;
        goto label_565b50;
    }
    ctx->pc = 0x565B48u;
    {
        const bool branch_taken_0x565b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x565b48) {
            ctx->pc = 0x565B58u;
            goto label_565b58;
        }
    }
    ctx->pc = 0x565B50u;
label_565b50:
    // 0x565b50: 0x1000000a  b           . + 4 + (0xA << 2)
label_565b54:
    if (ctx->pc == 0x565B54u) {
        ctx->pc = 0x565B54u;
            // 0x565b54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x565B58u;
        goto label_565b58;
    }
    ctx->pc = 0x565B50u;
    {
        const bool branch_taken_0x565b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x565B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565B50u;
            // 0x565b54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x565b50) {
            ctx->pc = 0x565B7Cu;
            goto label_565b7c;
        }
    }
    ctx->pc = 0x565B58u;
label_565b58:
    // 0x565b58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x565b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_565b5c:
    // 0x565b5c: 0x8c429764  lw          $v0, -0x689C($v0)
    ctx->pc = 0x565b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940516)));
label_565b60:
    // 0x565b60: 0x30420402  andi        $v0, $v0, 0x402
    ctx->pc = 0x565b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1026);
label_565b64:
    // 0x565b64: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_565b68:
    if (ctx->pc == 0x565B68u) {
        ctx->pc = 0x565B68u;
            // 0x565b68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x565B6Cu;
        goto label_565b6c;
    }
    ctx->pc = 0x565B64u;
    {
        const bool branch_taken_0x565b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x565b64) {
            ctx->pc = 0x565B68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x565B64u;
            // 0x565b68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x565B7Cu;
            goto label_565b7c;
        }
    }
    ctx->pc = 0x565B6Cu;
label_565b6c:
    // 0x565b6c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x565b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_565b70:
    // 0x565b70: 0xc073234  jal         func_1CC8D0
label_565b74:
    if (ctx->pc == 0x565B74u) {
        ctx->pc = 0x565B74u;
            // 0x565b74: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x565B78u;
        goto label_565b78;
    }
    ctx->pc = 0x565B70u;
    SET_GPR_U32(ctx, 31, 0x565B78u);
    ctx->pc = 0x565B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x565B70u;
            // 0x565b74: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565B78u; }
        if (ctx->pc != 0x565B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565B78u; }
        if (ctx->pc != 0x565B78u) { return; }
    }
    ctx->pc = 0x565B78u;
label_565b78:
    // 0x565b78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x565b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_565b7c:
    // 0x565b7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x565b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_565b80:
    // 0x565b80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x565b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_565b84:
    // 0x565b84: 0x3e00008  jr          $ra
label_565b88:
    if (ctx->pc == 0x565B88u) {
        ctx->pc = 0x565B88u;
            // 0x565b88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x565B8Cu;
        goto label_565b8c;
    }
    ctx->pc = 0x565B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x565B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565B84u;
            // 0x565b88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x565B8Cu;
label_565b8c:
    // 0x565b8c: 0x0  nop
    ctx->pc = 0x565b8cu;
    // NOP
label_565b90:
    // 0x565b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x565b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_565b94:
    // 0x565b94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x565b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_565b98:
    // 0x565b98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x565b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_565b9c:
    // 0x565b9c: 0x8085007c  lb          $a1, 0x7C($a0)
    ctx->pc = 0x565b9cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 124)));
label_565ba0:
    // 0x565ba0: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
label_565ba4:
    if (ctx->pc == 0x565BA4u) {
        ctx->pc = 0x565BA4u;
            // 0x565ba4: 0x24070104  addiu       $a3, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x565BA8u;
        goto label_565ba8;
    }
    ctx->pc = 0x565BA0u;
    {
        const bool branch_taken_0x565ba0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x565BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565BA0u;
            // 0x565ba4: 0x24070104  addiu       $a3, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x565ba0) {
            ctx->pc = 0x565BACu;
            goto label_565bac;
        }
    }
    ctx->pc = 0x565BA8u;
label_565ba8:
    // 0x565ba8: 0x240700f4  addiu       $a3, $zero, 0xF4
    ctx->pc = 0x565ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
label_565bac:
    // 0x565bac: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x565bacu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_565bb0:
    // 0x565bb0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x565bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_565bb4:
    // 0x565bb4: 0x50a30011  beql        $a1, $v1, . + 4 + (0x11 << 2)
label_565bb8:
    if (ctx->pc == 0x565BB8u) {
        ctx->pc = 0x565BB8u;
            // 0x565bb8: 0x8c830078  lw          $v1, 0x78($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
        ctx->pc = 0x565BBCu;
        goto label_565bbc;
    }
    ctx->pc = 0x565BB4u;
    {
        const bool branch_taken_0x565bb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x565bb4) {
            ctx->pc = 0x565BB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x565BB4u;
            // 0x565bb8: 0x8c830078  lw          $v1, 0x78($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x565BFCu;
            goto label_565bfc;
        }
    }
    ctx->pc = 0x565BBCu;
label_565bbc:
    // 0x565bbc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x565bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_565bc0:
    // 0x565bc0: 0x50a30007  beql        $a1, $v1, . + 4 + (0x7 << 2)
label_565bc4:
    if (ctx->pc == 0x565BC4u) {
        ctx->pc = 0x565BC4u;
            // 0x565bc4: 0x9083007e  lbu         $v1, 0x7E($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 126)));
        ctx->pc = 0x565BC8u;
        goto label_565bc8;
    }
    ctx->pc = 0x565BC0u;
    {
        const bool branch_taken_0x565bc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x565bc0) {
            ctx->pc = 0x565BC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x565BC0u;
            // 0x565bc4: 0x9083007e  lbu         $v1, 0x7E($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 126)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x565BE0u;
            goto label_565be0;
        }
    }
    ctx->pc = 0x565BC8u;
label_565bc8:
    // 0x565bc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x565bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_565bcc:
    // 0x565bcc: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_565bd0:
    if (ctx->pc == 0x565BD0u) {
        ctx->pc = 0x565BD4u;
        goto label_565bd4;
    }
    ctx->pc = 0x565BCCu;
    {
        const bool branch_taken_0x565bcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x565bcc) {
            ctx->pc = 0x565BDCu;
            goto label_565bdc;
        }
    }
    ctx->pc = 0x565BD4u;
label_565bd4:
    // 0x565bd4: 0x10000012  b           . + 4 + (0x12 << 2)
label_565bd8:
    if (ctx->pc == 0x565BD8u) {
        ctx->pc = 0x565BD8u;
            // 0x565bd8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x565BDCu;
        goto label_565bdc;
    }
    ctx->pc = 0x565BD4u;
    {
        const bool branch_taken_0x565bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x565BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565BD4u;
            // 0x565bd8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x565bd4) {
            ctx->pc = 0x565C20u;
            goto label_565c20;
        }
    }
    ctx->pc = 0x565BDCu;
label_565bdc:
    // 0x565bdc: 0x9083007e  lbu         $v1, 0x7E($a0)
    ctx->pc = 0x565bdcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 126)));
label_565be0:
    // 0x565be0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_565be4:
    if (ctx->pc == 0x565BE4u) {
        ctx->pc = 0x565BE8u;
        goto label_565be8;
    }
    ctx->pc = 0x565BE0u;
    {
        const bool branch_taken_0x565be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x565be0) {
            ctx->pc = 0x565C1Cu;
            goto label_565c1c;
        }
    }
    ctx->pc = 0x565BE8u;
label_565be8:
    // 0x565be8: 0x8c850064  lw          $a1, 0x64($a0)
    ctx->pc = 0x565be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_565bec:
    // 0x565bec: 0xc15943c  jal         func_5650F0
label_565bf0:
    if (ctx->pc == 0x565BF0u) {
        ctx->pc = 0x565BF0u;
            // 0x565bf0: 0x2406006a  addiu       $a2, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->pc = 0x565BF4u;
        goto label_565bf4;
    }
    ctx->pc = 0x565BECu;
    SET_GPR_U32(ctx, 31, 0x565BF4u);
    ctx->pc = 0x565BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x565BECu;
            // 0x565bf0: 0x2406006a  addiu       $a2, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5650F0u;
    if (runtime->hasFunction(0x5650F0u)) {
        auto targetFn = runtime->lookupFunction(0x5650F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565BF4u; }
        if (ctx->pc != 0x565BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005650F0_0x5650f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565BF4u; }
        if (ctx->pc != 0x565BF4u) { return; }
    }
    ctx->pc = 0x565BF4u;
label_565bf4:
    // 0x565bf4: 0x10000009  b           . + 4 + (0x9 << 2)
label_565bf8:
    if (ctx->pc == 0x565BF8u) {
        ctx->pc = 0x565BFCu;
        goto label_565bfc;
    }
    ctx->pc = 0x565BF4u;
    {
        const bool branch_taken_0x565bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x565bf4) {
            ctx->pc = 0x565C1Cu;
            goto label_565c1c;
        }
    }
    ctx->pc = 0x565BFCu;
label_565bfc:
    // 0x565bfc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_565c00:
    if (ctx->pc == 0x565C00u) {
        ctx->pc = 0x565C04u;
        goto label_565c04;
    }
    ctx->pc = 0x565BFCu;
    {
        const bool branch_taken_0x565bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x565bfc) {
            ctx->pc = 0x565C1Cu;
            goto label_565c1c;
        }
    }
    ctx->pc = 0x565C04u;
label_565c04:
    // 0x565c04: 0x9083007e  lbu         $v1, 0x7E($a0)
    ctx->pc = 0x565c04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 126)));
label_565c08:
    // 0x565c08: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_565c0c:
    if (ctx->pc == 0x565C0Cu) {
        ctx->pc = 0x565C10u;
        goto label_565c10;
    }
    ctx->pc = 0x565C08u;
    {
        const bool branch_taken_0x565c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x565c08) {
            ctx->pc = 0x565C1Cu;
            goto label_565c1c;
        }
    }
    ctx->pc = 0x565C10u;
label_565c10:
    // 0x565c10: 0x8c850064  lw          $a1, 0x64($a0)
    ctx->pc = 0x565c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_565c14:
    // 0x565c14: 0xc15943c  jal         func_5650F0
label_565c18:
    if (ctx->pc == 0x565C18u) {
        ctx->pc = 0x565C18u;
            // 0x565c18: 0x2406006a  addiu       $a2, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->pc = 0x565C1Cu;
        goto label_565c1c;
    }
    ctx->pc = 0x565C14u;
    SET_GPR_U32(ctx, 31, 0x565C1Cu);
    ctx->pc = 0x565C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x565C14u;
            // 0x565c18: 0x2406006a  addiu       $a2, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5650F0u;
    if (runtime->hasFunction(0x5650F0u)) {
        auto targetFn = runtime->lookupFunction(0x5650F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565C1Cu; }
        if (ctx->pc != 0x565C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005650F0_0x5650f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565C1Cu; }
        if (ctx->pc != 0x565C1Cu) { return; }
    }
    ctx->pc = 0x565C1Cu;
label_565c1c:
    // 0x565c1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x565c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_565c20:
    // 0x565c20: 0x3e00008  jr          $ra
label_565c24:
    if (ctx->pc == 0x565C24u) {
        ctx->pc = 0x565C24u;
            // 0x565c24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x565C28u;
        goto label_565c28;
    }
    ctx->pc = 0x565C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x565C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565C20u;
            // 0x565c24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x565C28u;
label_565c28:
    // 0x565c28: 0x0  nop
    ctx->pc = 0x565c28u;
    // NOP
label_565c2c:
    // 0x565c2c: 0x0  nop
    ctx->pc = 0x565c2cu;
    // NOP
label_565c30:
    // 0x565c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x565c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_565c34:
    // 0x565c34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x565c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_565c38:
    // 0x565c38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x565c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_565c3c:
    // 0x565c3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x565c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_565c40:
    // 0x565c40: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x565c40u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_565c44:
    // 0x565c44: 0x10a30021  beq         $a1, $v1, . + 4 + (0x21 << 2)
label_565c48:
    if (ctx->pc == 0x565C48u) {
        ctx->pc = 0x565C48u;
            // 0x565c48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x565C4Cu;
        goto label_565c4c;
    }
    ctx->pc = 0x565C44u;
    {
        const bool branch_taken_0x565c44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x565C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565C44u;
            // 0x565c48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x565c44) {
            ctx->pc = 0x565CCCu;
            goto label_565ccc;
        }
    }
    ctx->pc = 0x565C4Cu;
label_565c4c:
    // 0x565c4c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x565c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_565c50:
    // 0x565c50: 0x50a3000a  beql        $a1, $v1, . + 4 + (0xA << 2)
label_565c54:
    if (ctx->pc == 0x565C54u) {
        ctx->pc = 0x565C54u;
            // 0x565c54: 0x9203007e  lbu         $v1, 0x7E($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 126)));
        ctx->pc = 0x565C58u;
        goto label_565c58;
    }
    ctx->pc = 0x565C50u;
    {
        const bool branch_taken_0x565c50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x565c50) {
            ctx->pc = 0x565C54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x565C50u;
            // 0x565c54: 0x9203007e  lbu         $v1, 0x7E($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 126)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x565C7Cu;
            goto label_565c7c;
        }
    }
    ctx->pc = 0x565C58u;
label_565c58:
    // 0x565c58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x565c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_565c5c:
    // 0x565c5c: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_565c60:
    if (ctx->pc == 0x565C60u) {
        ctx->pc = 0x565C60u;
            // 0x565c60: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x565C64u;
        goto label_565c64;
    }
    ctx->pc = 0x565C5Cu;
    {
        const bool branch_taken_0x565c5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x565c5c) {
            ctx->pc = 0x565C60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x565C5Cu;
            // 0x565c60: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x565C6Cu;
            goto label_565c6c;
        }
    }
    ctx->pc = 0x565C64u;
label_565c64:
    // 0x565c64: 0x1000001a  b           . + 4 + (0x1A << 2)
label_565c68:
    if (ctx->pc == 0x565C68u) {
        ctx->pc = 0x565C68u;
            // 0x565c68: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x565C6Cu;
        goto label_565c6c;
    }
    ctx->pc = 0x565C64u;
    {
        const bool branch_taken_0x565c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x565C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565C64u;
            // 0x565c68: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x565c64) {
            ctx->pc = 0x565CD0u;
            goto label_565cd0;
        }
    }
    ctx->pc = 0x565C6Cu;
label_565c6c:
    // 0x565c6c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x565c6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_565c70:
    // 0x565c70: 0x320f809  jalr        $t9
label_565c74:
    if (ctx->pc == 0x565C74u) {
        ctx->pc = 0x565C78u;
        goto label_565c78;
    }
    ctx->pc = 0x565C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x565C78u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x565C78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x565C78u; }
            if (ctx->pc != 0x565C78u) { return; }
        }
        }
    }
    ctx->pc = 0x565C78u;
label_565c78:
    // 0x565c78: 0x9203007e  lbu         $v1, 0x7E($s0)
    ctx->pc = 0x565c78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 126)));
label_565c7c:
    // 0x565c7c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_565c80:
    if (ctx->pc == 0x565C80u) {
        ctx->pc = 0x565C84u;
        goto label_565c84;
    }
    ctx->pc = 0x565C7Cu;
    {
        const bool branch_taken_0x565c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x565c7c) {
            ctx->pc = 0x565CCCu;
            goto label_565ccc;
        }
    }
    ctx->pc = 0x565C84u;
label_565c84:
    // 0x565c84: 0x92050080  lbu         $a1, 0x80($s0)
    ctx->pc = 0x565c84u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
label_565c88:
    // 0x565c88: 0xc15967c  jal         func_5659F0
label_565c8c:
    if (ctx->pc == 0x565C8Cu) {
        ctx->pc = 0x565C8Cu;
            // 0x565c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x565C90u;
        goto label_565c90;
    }
    ctx->pc = 0x565C88u;
    SET_GPR_U32(ctx, 31, 0x565C90u);
    ctx->pc = 0x565C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x565C88u;
            // 0x565c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5659F0u;
    goto label_5659f0;
    ctx->pc = 0x565C90u;
label_565c90:
    // 0x565c90: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_565c94:
    if (ctx->pc == 0x565C94u) {
        ctx->pc = 0x565C98u;
        goto label_565c98;
    }
    ctx->pc = 0x565C90u;
    {
        const bool branch_taken_0x565c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x565c90) {
            ctx->pc = 0x565CCCu;
            goto label_565ccc;
        }
    }
    ctx->pc = 0x565C98u;
label_565c98:
    // 0x565c98: 0x8204007d  lb          $a0, 0x7D($s0)
    ctx->pc = 0x565c98u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 125)));
label_565c9c:
    // 0x565c9c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x565c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_565ca0:
    // 0x565ca0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x565ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_565ca4:
    // 0x565ca4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x565ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_565ca8:
    // 0x565ca8: 0x8c84006c  lw          $a0, 0x6C($a0)
    ctx->pc = 0x565ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_565cac:
    // 0x565cac: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x565cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_565cb0:
    // 0x565cb0: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x565cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_565cb4:
    // 0x565cb4: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_565cb8:
    if (ctx->pc == 0x565CB8u) {
        ctx->pc = 0x565CBCu;
        goto label_565cbc;
    }
    ctx->pc = 0x565CB4u;
    {
        const bool branch_taken_0x565cb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x565cb4) {
            ctx->pc = 0x565CCCu;
            goto label_565ccc;
        }
    }
    ctx->pc = 0x565CBCu;
label_565cbc:
    // 0x565cbc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x565cbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_565cc0:
    // 0x565cc0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x565cc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_565cc4:
    // 0x565cc4: 0x320f809  jalr        $t9
label_565cc8:
    if (ctx->pc == 0x565CC8u) {
        ctx->pc = 0x565CC8u;
            // 0x565cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x565CCCu;
        goto label_565ccc;
    }
    ctx->pc = 0x565CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x565CCCu);
        ctx->pc = 0x565CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565CC4u;
            // 0x565cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x565CCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x565CCCu; }
            if (ctx->pc != 0x565CCCu) { return; }
        }
        }
    }
    ctx->pc = 0x565CCCu;
label_565ccc:
    // 0x565ccc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x565cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_565cd0:
    // 0x565cd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x565cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_565cd4:
    // 0x565cd4: 0x3e00008  jr          $ra
label_565cd8:
    if (ctx->pc == 0x565CD8u) {
        ctx->pc = 0x565CD8u;
            // 0x565cd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x565CDCu;
        goto label_565cdc;
    }
    ctx->pc = 0x565CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x565CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565CD4u;
            // 0x565cd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x565CDCu;
label_565cdc:
    // 0x565cdc: 0x0  nop
    ctx->pc = 0x565cdcu;
    // NOP
label_565ce0:
    // 0x565ce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x565ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_565ce4:
    // 0x565ce4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x565ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_565ce8:
    // 0x565ce8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x565ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_565cec:
    // 0x565cec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x565cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_565cf0:
    // 0x565cf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x565cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_565cf4:
    // 0x565cf4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_565cf8:
    if (ctx->pc == 0x565CF8u) {
        ctx->pc = 0x565CF8u;
            // 0x565cf8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x565CFCu;
        goto label_565cfc;
    }
    ctx->pc = 0x565CF4u;
    {
        const bool branch_taken_0x565cf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x565CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565CF4u;
            // 0x565cf8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x565cf4) {
            ctx->pc = 0x565D38u;
            goto label_565d38;
        }
    }
    ctx->pc = 0x565CFCu;
label_565cfc:
    // 0x565cfc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x565cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_565d00:
    // 0x565d00: 0x24427ef0  addiu       $v0, $v0, 0x7EF0
    ctx->pc = 0x565d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32496));
label_565d04:
    // 0x565d04: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_565d08:
    if (ctx->pc == 0x565D08u) {
        ctx->pc = 0x565D08u;
            // 0x565d08: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x565D0Cu;
        goto label_565d0c;
    }
    ctx->pc = 0x565D04u;
    {
        const bool branch_taken_0x565d04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x565D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565D04u;
            // 0x565d08: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x565d04) {
            ctx->pc = 0x565D20u;
            goto label_565d20;
        }
    }
    ctx->pc = 0x565D0Cu;
label_565d0c:
    // 0x565d0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x565d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_565d10:
    // 0x565d10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x565d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_565d14:
    // 0x565d14: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x565d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_565d18:
    // 0x565d18: 0xc057a68  jal         func_15E9A0
label_565d1c:
    if (ctx->pc == 0x565D1Cu) {
        ctx->pc = 0x565D1Cu;
            // 0x565d1c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x565D20u;
        goto label_565d20;
    }
    ctx->pc = 0x565D18u;
    SET_GPR_U32(ctx, 31, 0x565D20u);
    ctx->pc = 0x565D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x565D18u;
            // 0x565d1c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565D20u; }
        if (ctx->pc != 0x565D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565D20u; }
        if (ctx->pc != 0x565D20u) { return; }
    }
    ctx->pc = 0x565D20u;
label_565d20:
    // 0x565d20: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x565d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_565d24:
    // 0x565d24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x565d24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_565d28:
    // 0x565d28: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_565d2c:
    if (ctx->pc == 0x565D2Cu) {
        ctx->pc = 0x565D2Cu;
            // 0x565d2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x565D30u;
        goto label_565d30;
    }
    ctx->pc = 0x565D28u;
    {
        const bool branch_taken_0x565d28 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x565d28) {
            ctx->pc = 0x565D2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x565D28u;
            // 0x565d2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x565D3Cu;
            goto label_565d3c;
        }
    }
    ctx->pc = 0x565D30u;
label_565d30:
    // 0x565d30: 0xc0400a8  jal         func_1002A0
label_565d34:
    if (ctx->pc == 0x565D34u) {
        ctx->pc = 0x565D34u;
            // 0x565d34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x565D38u;
        goto label_565d38;
    }
    ctx->pc = 0x565D30u;
    SET_GPR_U32(ctx, 31, 0x565D38u);
    ctx->pc = 0x565D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x565D30u;
            // 0x565d34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565D38u; }
        if (ctx->pc != 0x565D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565D38u; }
        if (ctx->pc != 0x565D38u) { return; }
    }
    ctx->pc = 0x565D38u;
label_565d38:
    // 0x565d38: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x565d38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_565d3c:
    // 0x565d3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x565d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_565d40:
    // 0x565d40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x565d40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_565d44:
    // 0x565d44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x565d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_565d48:
    // 0x565d48: 0x3e00008  jr          $ra
label_565d4c:
    if (ctx->pc == 0x565D4Cu) {
        ctx->pc = 0x565D4Cu;
            // 0x565d4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x565D50u;
        goto label_fallthrough_0x565d48;
    }
    ctx->pc = 0x565D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x565D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565D48u;
            // 0x565d4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x565d48:
    ctx->pc = 0x565D50u;
}
