#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00245C80
// Address: 0x245c80 - 0x245e00
void sub_00245C80_0x245c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245C80_0x245c80");
#endif

    switch (ctx->pc) {
        case 0x245c80u: goto label_245c80;
        case 0x245c84u: goto label_245c84;
        case 0x245c88u: goto label_245c88;
        case 0x245c8cu: goto label_245c8c;
        case 0x245c90u: goto label_245c90;
        case 0x245c94u: goto label_245c94;
        case 0x245c98u: goto label_245c98;
        case 0x245c9cu: goto label_245c9c;
        case 0x245ca0u: goto label_245ca0;
        case 0x245ca4u: goto label_245ca4;
        case 0x245ca8u: goto label_245ca8;
        case 0x245cacu: goto label_245cac;
        case 0x245cb0u: goto label_245cb0;
        case 0x245cb4u: goto label_245cb4;
        case 0x245cb8u: goto label_245cb8;
        case 0x245cbcu: goto label_245cbc;
        case 0x245cc0u: goto label_245cc0;
        case 0x245cc4u: goto label_245cc4;
        case 0x245cc8u: goto label_245cc8;
        case 0x245cccu: goto label_245ccc;
        case 0x245cd0u: goto label_245cd0;
        case 0x245cd4u: goto label_245cd4;
        case 0x245cd8u: goto label_245cd8;
        case 0x245cdcu: goto label_245cdc;
        case 0x245ce0u: goto label_245ce0;
        case 0x245ce4u: goto label_245ce4;
        case 0x245ce8u: goto label_245ce8;
        case 0x245cecu: goto label_245cec;
        case 0x245cf0u: goto label_245cf0;
        case 0x245cf4u: goto label_245cf4;
        case 0x245cf8u: goto label_245cf8;
        case 0x245cfcu: goto label_245cfc;
        case 0x245d00u: goto label_245d00;
        case 0x245d04u: goto label_245d04;
        case 0x245d08u: goto label_245d08;
        case 0x245d0cu: goto label_245d0c;
        case 0x245d10u: goto label_245d10;
        case 0x245d14u: goto label_245d14;
        case 0x245d18u: goto label_245d18;
        case 0x245d1cu: goto label_245d1c;
        case 0x245d20u: goto label_245d20;
        case 0x245d24u: goto label_245d24;
        case 0x245d28u: goto label_245d28;
        case 0x245d2cu: goto label_245d2c;
        case 0x245d30u: goto label_245d30;
        case 0x245d34u: goto label_245d34;
        case 0x245d38u: goto label_245d38;
        case 0x245d3cu: goto label_245d3c;
        case 0x245d40u: goto label_245d40;
        case 0x245d44u: goto label_245d44;
        case 0x245d48u: goto label_245d48;
        case 0x245d4cu: goto label_245d4c;
        case 0x245d50u: goto label_245d50;
        case 0x245d54u: goto label_245d54;
        case 0x245d58u: goto label_245d58;
        case 0x245d5cu: goto label_245d5c;
        case 0x245d60u: goto label_245d60;
        case 0x245d64u: goto label_245d64;
        case 0x245d68u: goto label_245d68;
        case 0x245d6cu: goto label_245d6c;
        case 0x245d70u: goto label_245d70;
        case 0x245d74u: goto label_245d74;
        case 0x245d78u: goto label_245d78;
        case 0x245d7cu: goto label_245d7c;
        case 0x245d80u: goto label_245d80;
        case 0x245d84u: goto label_245d84;
        case 0x245d88u: goto label_245d88;
        case 0x245d8cu: goto label_245d8c;
        case 0x245d90u: goto label_245d90;
        case 0x245d94u: goto label_245d94;
        case 0x245d98u: goto label_245d98;
        case 0x245d9cu: goto label_245d9c;
        case 0x245da0u: goto label_245da0;
        case 0x245da4u: goto label_245da4;
        case 0x245da8u: goto label_245da8;
        case 0x245dacu: goto label_245dac;
        case 0x245db0u: goto label_245db0;
        case 0x245db4u: goto label_245db4;
        case 0x245db8u: goto label_245db8;
        case 0x245dbcu: goto label_245dbc;
        case 0x245dc0u: goto label_245dc0;
        case 0x245dc4u: goto label_245dc4;
        case 0x245dc8u: goto label_245dc8;
        case 0x245dccu: goto label_245dcc;
        case 0x245dd0u: goto label_245dd0;
        case 0x245dd4u: goto label_245dd4;
        case 0x245dd8u: goto label_245dd8;
        case 0x245ddcu: goto label_245ddc;
        case 0x245de0u: goto label_245de0;
        case 0x245de4u: goto label_245de4;
        case 0x245de8u: goto label_245de8;
        case 0x245decu: goto label_245dec;
        case 0x245df0u: goto label_245df0;
        case 0x245df4u: goto label_245df4;
        case 0x245df8u: goto label_245df8;
        case 0x245dfcu: goto label_245dfc;
        default: break;
    }

    ctx->pc = 0x245c80u;

label_245c80:
    // 0x245c80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x245c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_245c84:
    // 0x245c84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x245c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_245c88:
    // 0x245c88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x245c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_245c8c:
    // 0x245c8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x245c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_245c90:
    // 0x245c90: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x245c90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_245c94:
    // 0x245c94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x245c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_245c98:
    // 0x245c98: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x245c98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_245c9c:
    // 0x245c9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x245c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_245ca0:
    // 0x245ca0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x245ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_245ca4:
    // 0x245ca4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x245ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_245ca8:
    // 0x245ca8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x245ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_245cac:
    // 0x245cac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x245cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_245cb0:
    // 0x245cb0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x245cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_245cb4:
    // 0x245cb4: 0x24920010  addiu       $s2, $a0, 0x10
    ctx->pc = 0x245cb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_245cb8:
    // 0x245cb8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x245cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_245cbc:
    // 0x245cbc: 0x24710010  addiu       $s1, $v1, 0x10
    ctx->pc = 0x245cbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_245cc0:
    // 0x245cc0: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x245cc0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_245cc4:
    // 0x245cc4: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x245cc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_245cc8:
    // 0x245cc8: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
label_245ccc:
    if (ctx->pc == 0x245CCCu) {
        ctx->pc = 0x245CCCu;
            // 0x245ccc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245CD0u;
        goto label_245cd0;
    }
    ctx->pc = 0x245CC8u;
    {
        const bool branch_taken_0x245cc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x245CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245CC8u;
            // 0x245ccc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245cc8) {
            ctx->pc = 0x245DA0u;
            goto label_245da0;
        }
    }
    ctx->pc = 0x245CD0u;
label_245cd0:
    // 0x245cd0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x245cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_245cd4:
    // 0x245cd4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x245cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_245cd8:
    // 0x245cd8: 0x24a5f7c0  addiu       $a1, $a1, -0x840
    ctx->pc = 0x245cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965184));
label_245cdc:
    // 0x245cdc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x245cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_245ce0:
    // 0x245ce0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x245ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_245ce4:
    // 0x245ce4: 0x600008  jr          $v1
label_245ce8:
    if (ctx->pc == 0x245CE8u) {
        ctx->pc = 0x245CECu;
        goto label_245cec;
    }
    ctx->pc = 0x245CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x245CF0u: goto label_245cf0;
            case 0x245D38u: goto label_245d38;
            case 0x245D98u: goto label_245d98;
            case 0x245DD8u: goto label_245dd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x245CECu;
label_245cec:
    // 0x245cec: 0x0  nop
    ctx->pc = 0x245cecu;
    // NOP
label_245cf0:
    // 0x245cf0: 0x90860003  lbu         $a2, 0x3($a0)
    ctx->pc = 0x245cf0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_245cf4:
    // 0x245cf4: 0x90870001  lbu         $a3, 0x1($a0)
    ctx->pc = 0x245cf4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_245cf8:
    // 0x245cf8: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x245cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_245cfc:
    // 0x245cfc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x245cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_245d00:
    // 0x245d00: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x245d00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_245d04:
    // 0x245d04: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x245d04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_245d08:
    // 0x245d08: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x245d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_245d0c:
    // 0x245d0c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x245d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_245d10:
    // 0x245d10: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x245d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_245d14:
    // 0x245d14: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x245d14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_245d18:
    // 0x245d18: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x245d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_245d1c:
    // 0x245d1c: 0x8c6316cc  lw          $v1, 0x16CC($v1)
    ctx->pc = 0x245d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5836)));
label_245d20:
    // 0x245d20: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_245d24:
    if (ctx->pc == 0x245D24u) {
        ctx->pc = 0x245D24u;
            // 0x245d24: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245D28u;
        goto label_245d28;
    }
    ctx->pc = 0x245D20u;
    {
        const bool branch_taken_0x245d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245D20u;
            // 0x245d24: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d20) {
            ctx->pc = 0x245DA0u;
            goto label_245da0;
        }
    }
    ctx->pc = 0x245D28u;
label_245d28:
    // 0x245d28: 0x60f809  jalr        $v1
label_245d2c:
    if (ctx->pc == 0x245D2Cu) {
        ctx->pc = 0x245D30u;
        goto label_245d30;
    }
    ctx->pc = 0x245D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x245D30u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x245D30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x245D30u; }
            if (ctx->pc != 0x245D30u) { return; }
        }
        }
    }
    ctx->pc = 0x245D30u;
label_245d30:
    // 0x245d30: 0x1000001b  b           . + 4 + (0x1B << 2)
label_245d34:
    if (ctx->pc == 0x245D34u) {
        ctx->pc = 0x245D38u;
        goto label_245d38;
    }
    ctx->pc = 0x245D30u;
    {
        const bool branch_taken_0x245d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245d30) {
            ctx->pc = 0x245DA0u;
            goto label_245da0;
        }
    }
    ctx->pc = 0x245D38u;
label_245d38:
    // 0x245d38: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x245d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_245d3c:
    // 0x245d3c: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x245d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_245d40:
    // 0x245d40: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x245d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_245d44:
    // 0x245d44: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x245d44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
label_245d48:
    // 0x245d48: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x245d48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_245d4c:
    // 0x245d4c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x245d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_245d50:
    // 0x245d50: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x245d50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_245d54:
    // 0x245d54: 0x90860003  lbu         $a2, 0x3($a0)
    ctx->pc = 0x245d54u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_245d58:
    // 0x245d58: 0x90870001  lbu         $a3, 0x1($a0)
    ctx->pc = 0x245d58u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_245d5c:
    // 0x245d5c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x245d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_245d60:
    // 0x245d60: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x245d60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_245d64:
    // 0x245d64: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x245d64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_245d68:
    // 0x245d68: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x245d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_245d6c:
    // 0x245d6c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x245d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_245d70:
    // 0x245d70: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x245d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_245d74:
    // 0x245d74: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x245d74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_245d78:
    // 0x245d78: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x245d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_245d7c:
    // 0x245d7c: 0x8c6316cc  lw          $v1, 0x16CC($v1)
    ctx->pc = 0x245d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5836)));
label_245d80:
    // 0x245d80: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_245d84:
    if (ctx->pc == 0x245D84u) {
        ctx->pc = 0x245D84u;
            // 0x245d84: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245D88u;
        goto label_245d88;
    }
    ctx->pc = 0x245D80u;
    {
        const bool branch_taken_0x245d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245D80u;
            // 0x245d84: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d80) {
            ctx->pc = 0x245DA0u;
            goto label_245da0;
        }
    }
    ctx->pc = 0x245D88u;
label_245d88:
    // 0x245d88: 0x60f809  jalr        $v1
label_245d8c:
    if (ctx->pc == 0x245D8Cu) {
        ctx->pc = 0x245D90u;
        goto label_245d90;
    }
    ctx->pc = 0x245D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x245D90u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x245D90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x245D90u; }
            if (ctx->pc != 0x245D90u) { return; }
        }
        }
    }
    ctx->pc = 0x245D90u;
label_245d90:
    // 0x245d90: 0x10000003  b           . + 4 + (0x3 << 2)
label_245d94:
    if (ctx->pc == 0x245D94u) {
        ctx->pc = 0x245D98u;
        goto label_245d98;
    }
    ctx->pc = 0x245D90u;
    {
        const bool branch_taken_0x245d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245d90) {
            ctx->pc = 0x245DA0u;
            goto label_245da0;
        }
    }
    ctx->pc = 0x245D98u;
label_245d98:
    // 0x245d98: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x245d98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_245d9c:
    // 0x245d9c: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x245d9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_245da0:
    // 0x245da0: 0x251182b  sltu        $v1, $s2, $s1
    ctx->pc = 0x245da0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_245da4:
    // 0x245da4: 0x1460ffc6  bnez        $v1, . + 4 + (-0x3A << 2)
label_245da8:
    if (ctx->pc == 0x245DA8u) {
        ctx->pc = 0x245DACu;
        goto label_245dac;
    }
    ctx->pc = 0x245DA4u;
    {
        const bool branch_taken_0x245da4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x245da4) {
            ctx->pc = 0x245CC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_245cc0;
        }
    }
    ctx->pc = 0x245DACu;
label_245dac:
    // 0x245dac: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x245dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_245db0:
    // 0x245db0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x245db0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_245db4:
    // 0x245db4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x245db4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_245db8:
    // 0x245db8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x245db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_245dbc:
    // 0x245dbc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x245dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_245dc0:
    // 0x245dc0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x245dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_245dc4:
    // 0x245dc4: 0x24920010  addiu       $s2, $a0, 0x10
    ctx->pc = 0x245dc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_245dc8:
    // 0x245dc8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x245dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_245dcc:
    // 0x245dcc: 0x1000ffbc  b           . + 4 + (-0x44 << 2)
label_245dd0:
    if (ctx->pc == 0x245DD0u) {
        ctx->pc = 0x245DD0u;
            // 0x245dd0: 0x24710010  addiu       $s1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x245DD4u;
        goto label_245dd4;
    }
    ctx->pc = 0x245DCCu;
    {
        const bool branch_taken_0x245dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245DCCu;
            // 0x245dd0: 0x24710010  addiu       $s1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245dcc) {
            ctx->pc = 0x245CC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_245cc0;
        }
    }
    ctx->pc = 0x245DD4u;
label_245dd4:
    // 0x245dd4: 0x0  nop
    ctx->pc = 0x245dd4u;
    // NOP
label_245dd8:
    // 0x245dd8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x245dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_245ddc:
    // 0x245ddc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x245ddcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_245de0:
    // 0x245de0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x245de0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_245de4:
    // 0x245de4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x245de4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_245de8:
    // 0x245de8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x245de8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_245dec:
    // 0x245dec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x245decu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_245df0:
    // 0x245df0: 0x3e00008  jr          $ra
label_245df4:
    if (ctx->pc == 0x245DF4u) {
        ctx->pc = 0x245DF4u;
            // 0x245df4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x245DF8u;
        goto label_245df8;
    }
    ctx->pc = 0x245DF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245DF0u;
            // 0x245df4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x245DF8u;
label_245df8:
    // 0x245df8: 0x0  nop
    ctx->pc = 0x245df8u;
    // NOP
label_245dfc:
    // 0x245dfc: 0x0  nop
    ctx->pc = 0x245dfcu;
    // NOP
}
