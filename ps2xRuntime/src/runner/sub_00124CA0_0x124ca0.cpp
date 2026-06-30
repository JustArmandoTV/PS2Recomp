#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00124CA0
// Address: 0x124ca0 - 0x125310
void sub_00124CA0_0x124ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124CA0_0x124ca0");
#endif

    switch (ctx->pc) {
        case 0x124cecu: goto label_124cec;
        case 0x124ddcu: goto label_124ddc;
        case 0x124e04u: goto label_124e04;
        case 0x124e08u: goto label_124e08;
        case 0x124e74u: goto label_124e74;
        case 0x124ea8u: goto label_124ea8;
        case 0x1250a4u: goto label_1250a4;
        case 0x125280u: goto label_125280;
        default: break;
    }

    ctx->pc = 0x124ca0u;

    // 0x124ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x124ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x124ca4: 0x5583f  dsra32      $t3, $a1, 0
    ctx->pc = 0x124ca4u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x124ca8: 0x4503f  dsra32      $t2, $a0, 0
    ctx->pc = 0x124ca8u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x124cac: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x124cacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x124cb0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x124cb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x124cb4: 0x3a0c82d  daddu       $t9, $sp, $zero
    ctx->pc = 0x124cb4u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124cb8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x124cb8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x124cbc: 0x156000e0  bnez        $t3, . + 4 + (0xE0 << 2)
    ctx->pc = 0x124CBCu;
    {
        const bool branch_taken_0x124cbc = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x124CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124CBCu;
            // 0x124cc0: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124cbc) {
            ctx->pc = 0x125040u;
            goto label_125040;
        }
    }
    ctx->pc = 0x124CC4u;
    // 0x124cc4: 0x145782b  sltu        $t7, $t2, $a1
    ctx->pc = 0x124cc4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x124cc8: 0x11e0005b  beqz        $t7, . + 4 + (0x5B << 2)
    ctx->pc = 0x124CC8u;
    {
        const bool branch_taken_0x124cc8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x124CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124CC8u;
            // 0x124ccc: 0x340fffff  ori         $t7, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124cc8) {
            ctx->pc = 0x124E38u;
            goto label_124e38;
        }
    }
    ctx->pc = 0x124CD0u;
    // 0x124cd0: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x124cd0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x124cd4: 0x15e00050  bnez        $t7, . + 4 + (0x50 << 2)
    ctx->pc = 0x124CD4u;
    {
        const bool branch_taken_0x124cd4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x124CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124CD4u;
            // 0x124cd8: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124cd4) {
            ctx->pc = 0x124E18u;
            goto label_124e18;
        }
    }
    ctx->pc = 0x124CDCu;
    // 0x124cdc: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x124cdcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x124ce0: 0x2cae0100  sltiu       $t6, $a1, 0x100
    ctx->pc = 0x124ce0u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x124ce4: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x124ce4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ce8: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x124ce8u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_124cec:
    // 0x124cec: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x124cecu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x124cf0: 0x1857806  srlv        $t7, $a1, $t4
    ctx->pc = 0x124cf0u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 12) & 0x1F));
    // 0x124cf4: 0x25ce05d0  addiu       $t6, $t6, 0x5D0
    ctx->pc = 0x124cf4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1488));
    // 0x124cf8: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x124cf8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x124cfc: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x124cfcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x124d00: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x124d00u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x124d04: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x124d04u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x124d08: 0x16d1823  subu        $v1, $t3, $t5
    ctx->pc = 0x124d08u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x124d0c: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x124D0Cu;
    {
        const bool branch_taken_0x124d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x124d0c) {
            ctx->pc = 0x124D10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124D0Cu;
            // 0x124d10: 0x55c02  srl         $t3, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124D30u;
            goto label_124d30;
        }
    }
    ctx->pc = 0x124D14u;
    // 0x124d14: 0x1637823  subu        $t7, $t3, $v1
    ctx->pc = 0x124d14u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x124d18: 0x6a7004  sllv        $t6, $t2, $v1
    ctx->pc = 0x124d18u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x124d1c: 0x1e47806  srlv        $t7, $a0, $t7
    ctx->pc = 0x124d1cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 15) & 0x1F));
    // 0x124d20: 0x652804  sllv        $a1, $a1, $v1
    ctx->pc = 0x124d20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x124d24: 0x1cf5025  or          $t2, $t6, $t7
    ctx->pc = 0x124d24u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x124d28: 0x642004  sllv        $a0, $a0, $v1
    ctx->pc = 0x124d28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x124d2c: 0x55c02  srl         $t3, $a1, 16
    ctx->pc = 0x124d2cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
label_124d30:
    // 0x124d30: 0x30a8ffff  andi        $t0, $a1, 0xFFFF
    ctx->pc = 0x124d30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x124d34: 0x14b001b  divu        $zero, $t2, $t3
    ctx->pc = 0x124d34u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x124d38: 0x46c02  srl         $t5, $a0, 16
    ctx->pc = 0x124d38u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x124d3c: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x124D3Cu;
    {
        const bool branch_taken_0x124d3c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x124d3c) {
            ctx->pc = 0x124D40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124D3Cu;
            // 0x124d40: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x124D44u;
            goto label_124d44;
        }
    }
    ctx->pc = 0x124D44u;
label_124d44:
    // 0x124d44: 0x7812  mflo        $t7
    ctx->pc = 0x124d44u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x124d48: 0x7010  mfhi        $t6
    ctx->pc = 0x124d48u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x124d4c: 0x1e85018  mult        $t2, $t7, $t0
    ctx->pc = 0x124d4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x124d50: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x124d50u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x124d54: 0x1cd6025  or          $t4, $t6, $t5
    ctx->pc = 0x124d54u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x124d58: 0x18a782b  sltu        $t7, $t4, $t2
    ctx->pc = 0x124d58u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x124d5c: 0x51e0000a  beql        $t7, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x124D5Cu;
    {
        const bool branch_taken_0x124d5c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x124d5c) {
            ctx->pc = 0x124D60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124D5Cu;
            // 0x124d60: 0x18a6023  subu        $t4, $t4, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124D88u;
            goto label_124d88;
        }
    }
    ctx->pc = 0x124D64u;
    // 0x124d64: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x124d64u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x124d68: 0x185782b  sltu        $t7, $t4, $a1
    ctx->pc = 0x124d68u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x124d6c: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x124D6Cu;
    {
        const bool branch_taken_0x124d6c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x124d6c) {
            ctx->pc = 0x124D70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124D6Cu;
            // 0x124d70: 0x18a6023  subu        $t4, $t4, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124D88u;
            goto label_124d88;
        }
    }
    ctx->pc = 0x124D74u;
    // 0x124d74: 0x18a782b  sltu        $t7, $t4, $t2
    ctx->pc = 0x124d74u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x124d78: 0x1857021  addu        $t6, $t4, $a1
    ctx->pc = 0x124d78u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x124d7c: 0x39ef0000  xori        $t7, $t7, 0x0
    ctx->pc = 0x124d7cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)0);
    // 0x124d80: 0x1cf600b  movn        $t4, $t6, $t7
    ctx->pc = 0x124d80u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 14));
    // 0x124d84: 0x18a6023  subu        $t4, $t4, $t2
    ctx->pc = 0x124d84u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
label_124d88:
    // 0x124d88: 0x308dffff  andi        $t5, $a0, 0xFFFF
    ctx->pc = 0x124d88u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x124d8c: 0x18b001b  divu        $zero, $t4, $t3
    ctx->pc = 0x124d8cu;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x124d90: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x124D90u;
    {
        const bool branch_taken_0x124d90 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x124d90) {
            ctx->pc = 0x124D94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124D90u;
            // 0x124d94: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x124D98u;
            goto label_124d98;
        }
    }
    ctx->pc = 0x124D98u;
label_124d98:
    // 0x124d98: 0x7812  mflo        $t7
    ctx->pc = 0x124d98u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x124d9c: 0x7010  mfhi        $t6
    ctx->pc = 0x124d9cu;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x124da0: 0x1e85018  mult        $t2, $t7, $t0
    ctx->pc = 0x124da0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x124da4: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x124da4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x124da8: 0x1cd2025  or          $a0, $t6, $t5
    ctx->pc = 0x124da8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x124dac: 0x8a782b  sltu        $t7, $a0, $t2
    ctx->pc = 0x124dacu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x124db0: 0x51e0000a  beql        $t7, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x124DB0u;
    {
        const bool branch_taken_0x124db0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x124db0) {
            ctx->pc = 0x124DB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124DB0u;
            // 0x124db4: 0x8a2023  subu        $a0, $a0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124DDCu;
            goto label_124ddc;
        }
    }
    ctx->pc = 0x124DB8u;
    // 0x124db8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x124db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x124dbc: 0x85782b  sltu        $t7, $a0, $a1
    ctx->pc = 0x124dbcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x124dc0: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x124DC0u;
    {
        const bool branch_taken_0x124dc0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x124dc0) {
            ctx->pc = 0x124DC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124DC0u;
            // 0x124dc4: 0x8a2023  subu        $a0, $a0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124DDCu;
            goto label_124ddc;
        }
    }
    ctx->pc = 0x124DC8u;
    // 0x124dc8: 0x8a782b  sltu        $t7, $a0, $t2
    ctx->pc = 0x124dc8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x124dcc: 0x857021  addu        $t6, $a0, $a1
    ctx->pc = 0x124dccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x124dd0: 0x39ef0000  xori        $t7, $t7, 0x0
    ctx->pc = 0x124dd0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)0);
    // 0x124dd4: 0x1cf200b  movn        $a0, $t6, $t7
    ctx->pc = 0x124dd4u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 14));
    // 0x124dd8: 0x8a2023  subu        $a0, $a0, $t2
    ctx->pc = 0x124dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_124ddc:
    // 0x124ddc: 0x1320000a  beqz        $t9, . + 4 + (0xA << 2)
    ctx->pc = 0x124DDCu;
    {
        const bool branch_taken_0x124ddc = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x124DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124DDCu;
            // 0x124de0: 0x647806  srlv        $t7, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ddc) {
            ctx->pc = 0x124E08u;
            goto label_124e08;
        }
    }
    ctx->pc = 0x124DE4u;
    // 0x124de4: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x124de4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x124de8: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x124de8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x124dec: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x124decu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x124df0: 0x12e4824  and         $t1, $t1, $t6
    ctx->pc = 0x124df0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 14));
    // 0x124df4: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x124df4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x124df8: 0x12f4825  or          $t1, $t1, $t7
    ctx->pc = 0x124df8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 15));
    // 0x124dfc: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x124dfcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x124e00: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x124e00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
label_124e04:
    // 0x124e04: 0xff290000  sd          $t1, 0x0($t9)
    ctx->pc = 0x124e04u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 9));
label_124e08:
    // 0x124e08: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x124e08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x124E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124E0Cu;
            // 0x124e10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x124E14u;
    // 0x124e14: 0x0  nop
    ctx->pc = 0x124e14u;
    // NOP
label_124e18:
    // 0x124e18: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x124e18u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x124e1c: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x124e1cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x124e20: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x124e20u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x124e24: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x124e24u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x124e28: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x124e28u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e2c: 0x1000ffaf  b           . + 4 + (-0x51 << 2)
    ctx->pc = 0x124E2Cu;
    {
        const bool branch_taken_0x124e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124E2Cu;
            // 0x124e30: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e2c) {
            ctx->pc = 0x124CECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124cec;
        }
    }
    ctx->pc = 0x124E34u;
    // 0x124e34: 0x0  nop
    ctx->pc = 0x124e34u;
    // NOP
label_124e38:
    // 0x124e38: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x124E38u;
    {
        const bool branch_taken_0x124e38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x124E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124E38u;
            // 0x124e3c: 0x1e5782b  sltu        $t7, $t7, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e38) {
            ctx->pc = 0x124E5Cu;
            goto label_124e5c;
        }
    }
    ctx->pc = 0x124E40u;
    // 0x124e40: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x124e40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124e44: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x124E44u;
    {
        const bool branch_taken_0x124e44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x124e44) {
            ctx->pc = 0x124E48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124E44u;
            // 0x124e48: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x124E4Cu;
            goto label_124e4c;
        }
    }
    ctx->pc = 0x124E4Cu;
label_124e4c:
    // 0x124e4c: 0x1eb001b  divu        $zero, $t7, $t3
    ctx->pc = 0x124e4cu;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x124e50: 0x2812  mflo        $a1
    ctx->pc = 0x124e50u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x124e54: 0x340fffff  ori         $t7, $zero, 0xFFFF
    ctx->pc = 0x124e54u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x124e58: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x124e58u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_124e5c:
    // 0x124e5c: 0x15e00070  bnez        $t7, . + 4 + (0x70 << 2)
    ctx->pc = 0x124E5Cu;
    {
        const bool branch_taken_0x124e5c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x124E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124E5Cu;
            // 0x124e60: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e5c) {
            ctx->pc = 0x125020u;
            goto label_125020;
        }
    }
    ctx->pc = 0x124E64u;
    // 0x124e64: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x124e64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x124e68: 0x2cae0100  sltiu       $t6, $a1, 0x100
    ctx->pc = 0x124e68u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x124e6c: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x124e6cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e70: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x124e70u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_124e74:
    // 0x124e74: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x124e74u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x124e78: 0x1857806  srlv        $t7, $a1, $t4
    ctx->pc = 0x124e78u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 12) & 0x1F));
    // 0x124e7c: 0x25ce05d0  addiu       $t6, $t6, 0x5D0
    ctx->pc = 0x124e7cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1488));
    // 0x124e80: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x124e80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x124e84: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x124e84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x124e88: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x124e88u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x124e8c: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x124e8cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x124e90: 0x16d1823  subu        $v1, $t3, $t5
    ctx->pc = 0x124e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x124e94: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x124E94u;
    {
        const bool branch_taken_0x124e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x124E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124E94u;
            // 0x124e98: 0x163c023  subu        $t8, $t3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e94) {
            ctx->pc = 0x124F58u;
            goto label_124f58;
        }
    }
    ctx->pc = 0x124E9Cu;
    // 0x124e9c: 0x1455023  subu        $t2, $t2, $a1
    ctx->pc = 0x124e9cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x124ea0: 0x54402  srl         $t0, $a1, 16
    ctx->pc = 0x124ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x124ea4: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x124ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_124ea8:
    // 0x124ea8: 0x148001b  divu        $zero, $t2, $t0
    ctx->pc = 0x124ea8u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x124eac: 0x46c02  srl         $t5, $a0, 16
    ctx->pc = 0x124eacu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x124eb0: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x124EB0u;
    {
        const bool branch_taken_0x124eb0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x124eb0) {
            ctx->pc = 0x124EB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124EB0u;
            // 0x124eb4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x124EB8u;
            goto label_124eb8;
        }
    }
    ctx->pc = 0x124EB8u;
label_124eb8:
    // 0x124eb8: 0x7812  mflo        $t7
    ctx->pc = 0x124eb8u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x124ebc: 0x7010  mfhi        $t6
    ctx->pc = 0x124ebcu;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x124ec0: 0x1e25818  mult        $t3, $t7, $v0
    ctx->pc = 0x124ec0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x124ec4: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x124ec4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x124ec8: 0x1cd6025  or          $t4, $t6, $t5
    ctx->pc = 0x124ec8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x124ecc: 0x18b782b  sltu        $t7, $t4, $t3
    ctx->pc = 0x124eccu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x124ed0: 0x51e0000a  beql        $t7, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x124ED0u;
    {
        const bool branch_taken_0x124ed0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x124ed0) {
            ctx->pc = 0x124ED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124ED0u;
            // 0x124ed4: 0x18b6023  subu        $t4, $t4, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124EFCu;
            goto label_124efc;
        }
    }
    ctx->pc = 0x124ED8u;
    // 0x124ed8: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x124ed8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x124edc: 0x185782b  sltu        $t7, $t4, $a1
    ctx->pc = 0x124edcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x124ee0: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x124EE0u;
    {
        const bool branch_taken_0x124ee0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x124ee0) {
            ctx->pc = 0x124EE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124EE0u;
            // 0x124ee4: 0x18b6023  subu        $t4, $t4, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124EFCu;
            goto label_124efc;
        }
    }
    ctx->pc = 0x124EE8u;
    // 0x124ee8: 0x18b782b  sltu        $t7, $t4, $t3
    ctx->pc = 0x124ee8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x124eec: 0x1857021  addu        $t6, $t4, $a1
    ctx->pc = 0x124eecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x124ef0: 0x39ef0000  xori        $t7, $t7, 0x0
    ctx->pc = 0x124ef0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)0);
    // 0x124ef4: 0x1cf600b  movn        $t4, $t6, $t7
    ctx->pc = 0x124ef4u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 14));
    // 0x124ef8: 0x18b6023  subu        $t4, $t4, $t3
    ctx->pc = 0x124ef8u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
label_124efc:
    // 0x124efc: 0x308dffff  andi        $t5, $a0, 0xFFFF
    ctx->pc = 0x124efcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x124f00: 0x188001b  divu        $zero, $t4, $t0
    ctx->pc = 0x124f00u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x124f04: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x124F04u;
    {
        const bool branch_taken_0x124f04 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x124f04) {
            ctx->pc = 0x124F08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124F04u;
            // 0x124f08: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x124F0Cu;
            goto label_124f0c;
        }
    }
    ctx->pc = 0x124F0Cu;
label_124f0c:
    // 0x124f0c: 0x7812  mflo        $t7
    ctx->pc = 0x124f0cu;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x124f10: 0x7010  mfhi        $t6
    ctx->pc = 0x124f10u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x124f14: 0x1e25818  mult        $t3, $t7, $v0
    ctx->pc = 0x124f14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x124f18: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x124f18u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x124f1c: 0x1cd2025  or          $a0, $t6, $t5
    ctx->pc = 0x124f1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x124f20: 0x8b782b  sltu        $t7, $a0, $t3
    ctx->pc = 0x124f20u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x124f24: 0x51e0ffad  beql        $t7, $zero, . + 4 + (-0x53 << 2)
    ctx->pc = 0x124F24u;
    {
        const bool branch_taken_0x124f24 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x124f24) {
            ctx->pc = 0x124F28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124F24u;
            // 0x124f28: 0x8b2023  subu        $a0, $a0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124DDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124ddc;
        }
    }
    ctx->pc = 0x124F2Cu;
    // 0x124f2c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x124f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x124f30: 0x85782b  sltu        $t7, $a0, $a1
    ctx->pc = 0x124f30u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x124f34: 0x55e0ffa9  bnel        $t7, $zero, . + 4 + (-0x57 << 2)
    ctx->pc = 0x124F34u;
    {
        const bool branch_taken_0x124f34 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x124f34) {
            ctx->pc = 0x124F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124F34u;
            // 0x124f38: 0x8b2023  subu        $a0, $a0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124DDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124ddc;
        }
    }
    ctx->pc = 0x124F3Cu;
    // 0x124f3c: 0x8b782b  sltu        $t7, $a0, $t3
    ctx->pc = 0x124f3cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x124f40: 0x857021  addu        $t6, $a0, $a1
    ctx->pc = 0x124f40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x124f44: 0x39ef0000  xori        $t7, $t7, 0x0
    ctx->pc = 0x124f44u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)0);
    // 0x124f48: 0x1cf200b  movn        $a0, $t6, $t7
    ctx->pc = 0x124f48u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 14));
    // 0x124f4c: 0x1000ffa3  b           . + 4 + (-0x5D << 2)
    ctx->pc = 0x124F4Cu;
    {
        const bool branch_taken_0x124f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124F4Cu;
            // 0x124f50: 0x8b2023  subu        $a0, $a0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f4c) {
            ctx->pc = 0x124DDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124ddc;
        }
    }
    ctx->pc = 0x124F54u;
    // 0x124f54: 0x0  nop
    ctx->pc = 0x124f54u;
    // NOP
label_124f58:
    // 0x124f58: 0x652804  sllv        $a1, $a1, $v1
    ctx->pc = 0x124f58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x124f5c: 0x30a6006  srlv        $t4, $t2, $t8
    ctx->pc = 0x124f5cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 24) & 0x1F));
    // 0x124f60: 0x54402  srl         $t0, $a1, 16
    ctx->pc = 0x124f60u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x124f64: 0x188001b  divu        $zero, $t4, $t0
    ctx->pc = 0x124f64u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x124f68: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x124f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x124f6c: 0x3047006  srlv        $t6, $a0, $t8
    ctx->pc = 0x124f6cu;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 24) & 0x1F));
    // 0x124f70: 0x6a7804  sllv        $t7, $t2, $v1
    ctx->pc = 0x124f70u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x124f74: 0x1ee5025  or          $t2, $t7, $t6
    ctx->pc = 0x124f74u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x124f78: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x124F78u;
    {
        const bool branch_taken_0x124f78 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x124f78) {
            ctx->pc = 0x124F7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124F78u;
            // 0x124f7c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x124F80u;
            goto label_124f80;
        }
    }
    ctx->pc = 0x124F80u;
label_124f80:
    // 0x124f80: 0xa7402  srl         $t6, $t2, 16
    ctx->pc = 0x124f80u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x124f84: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x124f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124f88: 0x642004  sllv        $a0, $a0, $v1
    ctx->pc = 0x124f88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x124f8c: 0x6012  mflo        $t4
    ctx->pc = 0x124f8cu;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x124f90: 0x6810  mfhi        $t5
    ctx->pc = 0x124f90u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x124f94: 0x1823818  mult        $a3, $t4, $v0
    ctx->pc = 0x124f94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x124f98: 0xd6c00  sll         $t5, $t5, 16
    ctx->pc = 0x124f98u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x124f9c: 0x1ae5825  or          $t3, $t5, $t6
    ctx->pc = 0x124f9cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x124fa0: 0x167782b  sltu        $t7, $t3, $a3
    ctx->pc = 0x124fa0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x124fa4: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x124FA4u;
    {
        const bool branch_taken_0x124fa4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x124FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124FA4u;
            // 0x124fa8: 0x40c02d  daddu       $t8, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124fa4) {
            ctx->pc = 0x124FC8u;
            goto label_124fc8;
        }
    }
    ctx->pc = 0x124FACu;
    // 0x124fac: 0x1655821  addu        $t3, $t3, $a1
    ctx->pc = 0x124facu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x124fb0: 0x165782b  sltu        $t7, $t3, $a1
    ctx->pc = 0x124fb0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x124fb4: 0x55e00005  bnel        $t7, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x124FB4u;
    {
        const bool branch_taken_0x124fb4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x124fb4) {
            ctx->pc = 0x124FB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124FB4u;
            // 0x124fb8: 0x1675823  subu        $t3, $t3, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124FCCu;
            goto label_124fcc;
        }
    }
    ctx->pc = 0x124FBCu;
    // 0x124fbc: 0x167702b  sltu        $t6, $t3, $a3
    ctx->pc = 0x124fbcu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x124fc0: 0x1657821  addu        $t7, $t3, $a1
    ctx->pc = 0x124fc0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x124fc4: 0x1ee580b  movn        $t3, $t7, $t6
    ctx->pc = 0x124fc4u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 15));
label_124fc8:
    // 0x124fc8: 0x1675823  subu        $t3, $t3, $a3
    ctx->pc = 0x124fc8u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
label_124fcc:
    // 0x124fcc: 0x314dffff  andi        $t5, $t2, 0xFFFF
    ctx->pc = 0x124fccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x124fd0: 0x166001b  divu        $zero, $t3, $a2
    ctx->pc = 0x124fd0u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
    // 0x124fd4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x124FD4u;
    {
        const bool branch_taken_0x124fd4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x124fd4) {
            ctx->pc = 0x124FD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124FD4u;
            // 0x124fd8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x124FDCu;
            goto label_124fdc;
        }
    }
    ctx->pc = 0x124FDCu;
label_124fdc:
    // 0x124fdc: 0x7812  mflo        $t7
    ctx->pc = 0x124fdcu;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x124fe0: 0x7010  mfhi        $t6
    ctx->pc = 0x124fe0u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x124fe4: 0x1f83818  mult        $a3, $t7, $t8
    ctx->pc = 0x124fe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x124fe8: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x124fe8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x124fec: 0x1cd6025  or          $t4, $t6, $t5
    ctx->pc = 0x124fecu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x124ff0: 0x187782b  sltu        $t7, $t4, $a3
    ctx->pc = 0x124ff0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x124ff4: 0x11e0ffac  beqz        $t7, . + 4 + (-0x54 << 2)
    ctx->pc = 0x124FF4u;
    {
        const bool branch_taken_0x124ff4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x124FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124FF4u;
            // 0x124ff8: 0x1875023  subu        $t2, $t4, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ff4) {
            ctx->pc = 0x124EA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124ea8;
        }
    }
    ctx->pc = 0x124FFCu;
    // 0x124ffc: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x124ffcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x125000: 0x185782b  sltu        $t7, $t4, $a1
    ctx->pc = 0x125000u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x125004: 0x55e0ffa8  bnel        $t7, $zero, . + 4 + (-0x58 << 2)
    ctx->pc = 0x125004u;
    {
        const bool branch_taken_0x125004 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x125004) {
            ctx->pc = 0x125008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125004u;
            // 0x125008: 0x1875023  subu        $t2, $t4, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124EA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124ea8;
        }
    }
    ctx->pc = 0x12500Cu;
    // 0x12500c: 0x187702b  sltu        $t6, $t4, $a3
    ctx->pc = 0x12500cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x125010: 0x1857821  addu        $t7, $t4, $a1
    ctx->pc = 0x125010u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x125014: 0x1ee600b  movn        $t4, $t7, $t6
    ctx->pc = 0x125014u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 15));
    // 0x125018: 0x1000ffa3  b           . + 4 + (-0x5D << 2)
    ctx->pc = 0x125018u;
    {
        const bool branch_taken_0x125018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12501Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125018u;
            // 0x12501c: 0x1875023  subu        $t2, $t4, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125018) {
            ctx->pc = 0x124EA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124ea8;
        }
    }
    ctx->pc = 0x125020u;
label_125020:
    // 0x125020: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x125020u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x125024: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x125024u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x125028: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x125028u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12502c: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x12502cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x125030: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x125030u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125034: 0x1000ff8f  b           . + 4 + (-0x71 << 2)
    ctx->pc = 0x125034u;
    {
        const bool branch_taken_0x125034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125034u;
            // 0x125038: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125034) {
            ctx->pc = 0x124E74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124e74;
        }
    }
    ctx->pc = 0x12503Cu;
    // 0x12503c: 0x0  nop
    ctx->pc = 0x12503cu;
    // NOP
label_125040:
    // 0x125040: 0x14b782b  sltu        $t7, $t2, $t3
    ctx->pc = 0x125040u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x125044: 0x11e00010  beqz        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x125044u;
    {
        const bool branch_taken_0x125044 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125044u;
            // 0x125048: 0x340fffff  ori         $t7, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125044) {
            ctx->pc = 0x125088u;
            goto label_125088;
        }
    }
    ctx->pc = 0x12504Cu;
    // 0x12504c: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12504cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x125050: 0x4703c  dsll32      $t6, $a0, 0
    ctx->pc = 0x125050u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) << (32 + 0));
    // 0x125054: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x125054u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x125058: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x125058u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x12505c: 0x12f4824  and         $t1, $t1, $t7
    ctx->pc = 0x12505cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 15));
    // 0x125060: 0xa783c  dsll32      $t7, $t2, 0
    ctx->pc = 0x125060u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) << (32 + 0));
    // 0x125064: 0x12e4825  or          $t1, $t1, $t6
    ctx->pc = 0x125064u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 14));
    // 0x125068: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x125068u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x12506c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x12506cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x125070: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x125070u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x125074: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x125074u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x125078: 0x12f4825  or          $t1, $t1, $t7
    ctx->pc = 0x125078u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 15));
    // 0x12507c: 0x1000ff62  b           . + 4 + (-0x9E << 2)
    ctx->pc = 0x12507Cu;
    {
        const bool branch_taken_0x12507c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12507Cu;
            // 0x125080: 0xffa90000  sd          $t1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12507c) {
            ctx->pc = 0x124E08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124e08;
        }
    }
    ctx->pc = 0x125084u;
    // 0x125084: 0x0  nop
    ctx->pc = 0x125084u;
    // NOP
label_125088:
    // 0x125088: 0x1eb782b  sltu        $t7, $t7, $t3
    ctx->pc = 0x125088u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12508c: 0x15e00098  bnez        $t7, . + 4 + (0x98 << 2)
    ctx->pc = 0x12508Cu;
    {
        const bool branch_taken_0x12508c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12508Cu;
            // 0x125090: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12508c) {
            ctx->pc = 0x1252F0u;
            goto label_1252f0;
        }
    }
    ctx->pc = 0x125094u;
    // 0x125094: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x125094u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x125098: 0x2d6e0100  sltiu       $t6, $t3, 0x100
    ctx->pc = 0x125098u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x12509c: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x12509cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1250a0: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x1250a0u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_1250a4:
    // 0x1250a4: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x1250a4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x1250a8: 0x18b7806  srlv        $t7, $t3, $t4
    ctx->pc = 0x1250a8u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 12) & 0x1F));
    // 0x1250ac: 0x25ce05d0  addiu       $t6, $t6, 0x5D0
    ctx->pc = 0x1250acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1488));
    // 0x1250b0: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1250b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1250b4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1250b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1250b8: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x1250b8u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1250bc: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x1250bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x1250c0: 0x10d1823  subu        $v1, $t0, $t5
    ctx->pc = 0x1250c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x1250c4: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1250C4u;
    {
        const bool branch_taken_0x1250c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1250C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1250C4u;
            // 0x1250c8: 0x103c023  subu        $t8, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1250c4) {
            ctx->pc = 0x125130u;
            goto label_125130;
        }
    }
    ctx->pc = 0x1250CCu;
    // 0x1250cc: 0x16a782b  sltu        $t7, $t3, $t2
    ctx->pc = 0x1250ccu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1250d0: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1250D0u;
    {
        const bool branch_taken_0x1250d0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1250D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1250D0u;
            // 0x1250d4: 0x857823  subu        $t7, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1250d0) {
            ctx->pc = 0x1250E4u;
            goto label_1250e4;
        }
    }
    ctx->pc = 0x1250D8u;
    // 0x1250d8: 0x85782b  sltu        $t7, $a0, $a1
    ctx->pc = 0x1250d8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1250dc: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1250DCu;
    {
        const bool branch_taken_0x1250dc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1250E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1250DCu;
            // 0x1250e0: 0x857823  subu        $t7, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1250dc) {
            ctx->pc = 0x1250F4u;
            goto label_1250f4;
        }
    }
    ctx->pc = 0x1250E4u;
label_1250e4:
    // 0x1250e4: 0x14b6823  subu        $t5, $t2, $t3
    ctx->pc = 0x1250e4u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1250e8: 0x8f702b  sltu        $t6, $a0, $t7
    ctx->pc = 0x1250e8u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x1250ec: 0x1e0202d  daddu       $a0, $t7, $zero
    ctx->pc = 0x1250ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1250f0: 0x1ae5023  subu        $t2, $t5, $t6
    ctx->pc = 0x1250f0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_1250f4:
    // 0x1250f4: 0x1320ff44  beqz        $t9, . + 4 + (-0xBC << 2)
    ctx->pc = 0x1250F4u;
    {
        const bool branch_taken_0x1250f4 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x1250F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1250F4u;
            // 0x1250f8: 0x240fffff  addiu       $t7, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1250f4) {
            ctx->pc = 0x124E08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124e08;
        }
    }
    ctx->pc = 0x1250FCu;
    // 0x1250fc: 0x4703c  dsll32      $t6, $a0, 0
    ctx->pc = 0x1250fcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) << (32 + 0));
    // 0x125100: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x125100u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x125104: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x125104u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x125108: 0x12f4824  and         $t1, $t1, $t7
    ctx->pc = 0x125108u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 15));
    // 0x12510c: 0xa783c  dsll32      $t7, $t2, 0
    ctx->pc = 0x12510cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) << (32 + 0));
    // 0x125110: 0x12e4825  or          $t1, $t1, $t6
    ctx->pc = 0x125110u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 14));
    // 0x125114: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x125114u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x125118: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x125118u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x12511c: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12511cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x125120: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x125120u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x125124: 0x1000ff37  b           . + 4 + (-0xC9 << 2)
    ctx->pc = 0x125124u;
    {
        const bool branch_taken_0x125124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125124u;
            // 0x125128: 0x12f4825  or          $t1, $t1, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125124) {
            ctx->pc = 0x124E04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124e04;
        }
    }
    ctx->pc = 0x12512Cu;
    // 0x12512c: 0x0  nop
    ctx->pc = 0x12512cu;
    // NOP
label_125130:
    // 0x125130: 0x6b7004  sllv        $t6, $t3, $v1
    ctx->pc = 0x125130u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 3) & 0x1F));
    // 0x125134: 0x3057806  srlv        $t7, $a1, $t8
    ctx->pc = 0x125134u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 24) & 0x1F));
    // 0x125138: 0x30a6006  srlv        $t4, $t2, $t8
    ctx->pc = 0x125138u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 24) & 0x1F));
    // 0x12513c: 0x1cf5825  or          $t3, $t6, $t7
    ctx->pc = 0x12513cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x125140: 0x6a6804  sllv        $t5, $t2, $v1
    ctx->pc = 0x125140u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x125144: 0xb4402  srl         $t0, $t3, 16
    ctx->pc = 0x125144u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x125148: 0x3166ffff  andi        $a2, $t3, 0xFFFF
    ctx->pc = 0x125148u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x12514c: 0x188001b  divu        $zero, $t4, $t0
    ctx->pc = 0x12514cu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x125150: 0x3047806  srlv        $t7, $a0, $t8
    ctx->pc = 0x125150u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 24) & 0x1F));
    // 0x125154: 0x1af5025  or          $t2, $t5, $t7
    ctx->pc = 0x125154u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x125158: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x125158u;
    {
        const bool branch_taken_0x125158 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x125158) {
            ctx->pc = 0x12515Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125158u;
            // 0x12515c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x125160u;
            goto label_125160;
        }
    }
    ctx->pc = 0x125160u;
label_125160:
    // 0x125160: 0xa6c02  srl         $t5, $t2, 16
    ctx->pc = 0x125160u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x125164: 0x652804  sllv        $a1, $a1, $v1
    ctx->pc = 0x125164u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x125168: 0x6012  mflo        $t4
    ctx->pc = 0x125168u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x12516c: 0x7010  mfhi        $t6
    ctx->pc = 0x12516cu;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x125170: 0x1012  mflo        $v0
    ctx->pc = 0x125170u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x125174: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x125174u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x125178: 0x1863818  mult        $a3, $t4, $a2
    ctx->pc = 0x125178u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x12517c: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x12517cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x125180: 0x1c7782b  sltu        $t7, $t6, $a3
    ctx->pc = 0x125180u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x125184: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x125184u;
    {
        const bool branch_taken_0x125184 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125184u;
            // 0x125188: 0x642004  sllv        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125184) {
            ctx->pc = 0x1251B0u;
            goto label_1251b0;
        }
    }
    ctx->pc = 0x12518Cu;
    // 0x12518c: 0x1cb7021  addu        $t6, $t6, $t3
    ctx->pc = 0x12518cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x125190: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x125190u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x125194: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x125194u;
    {
        const bool branch_taken_0x125194 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125194u;
            // 0x125198: 0x2582ffff  addiu       $v0, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125194) {
            ctx->pc = 0x1251B0u;
            goto label_1251b0;
        }
    }
    ctx->pc = 0x12519Cu;
    // 0x12519c: 0x1c7782b  sltu        $t7, $t6, $a3
    ctx->pc = 0x12519cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1251a0: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1251A0u;
    {
        const bool branch_taken_0x1251a0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1251a0) {
            ctx->pc = 0x1251A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1251A0u;
            // 0x1251a4: 0x1c77023  subu        $t6, $t6, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1251B4u;
            goto label_1251b4;
        }
    }
    ctx->pc = 0x1251A8u;
    // 0x1251a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1251a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1251ac: 0x1cb7021  addu        $t6, $t6, $t3
    ctx->pc = 0x1251acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
label_1251b0:
    // 0x1251b0: 0x1c77023  subu        $t6, $t6, $a3
    ctx->pc = 0x1251b0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
label_1251b4:
    // 0x1251b4: 0x314dffff  andi        $t5, $t2, 0xFFFF
    ctx->pc = 0x1251b4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x1251b8: 0x1c8001b  divu        $zero, $t6, $t0
    ctx->pc = 0x1251b8u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x1251bc: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1251BCu;
    {
        const bool branch_taken_0x1251bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1251bc) {
            ctx->pc = 0x1251C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1251BCu;
            // 0x1251c0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1251C4u;
            goto label_1251c4;
        }
    }
    ctx->pc = 0x1251C4u;
label_1251c4:
    // 0x1251c4: 0x7812  mflo        $t7
    ctx->pc = 0x1251c4u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x1251c8: 0x7010  mfhi        $t6
    ctx->pc = 0x1251c8u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x1251cc: 0x6012  mflo        $t4
    ctx->pc = 0x1251ccu;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x1251d0: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x1251d0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x1251d4: 0x1e63818  mult        $a3, $t7, $a2
    ctx->pc = 0x1251d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1251d8: 0x1cd3025  or          $a2, $t6, $t5
    ctx->pc = 0x1251d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x1251dc: 0xc7782b  sltu        $t7, $a2, $a3
    ctx->pc = 0x1251dcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1251e0: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x1251E0u;
    {
        const bool branch_taken_0x1251e0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1251E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1251E0u;
            // 0x1251e4: 0x27c00  sll         $t7, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1251e0) {
            ctx->pc = 0x125214u;
            goto label_125214;
        }
    }
    ctx->pc = 0x1251E8u;
    // 0x1251e8: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x1251e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x1251ec: 0xcb782b  sltu        $t7, $a2, $t3
    ctx->pc = 0x1251ecu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1251f0: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1251F0u;
    {
        const bool branch_taken_0x1251f0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1251F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1251F0u;
            // 0x1251f4: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1251f0) {
            ctx->pc = 0x125210u;
            goto label_125210;
        }
    }
    ctx->pc = 0x1251F8u;
    // 0x1251f8: 0xc7782b  sltu        $t7, $a2, $a3
    ctx->pc = 0x1251f8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1251fc: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1251FCu;
    {
        const bool branch_taken_0x1251fc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1251FCu;
            // 0x125200: 0x27c00  sll         $t7, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1251fc) {
            ctx->pc = 0x125214u;
            goto label_125214;
        }
    }
    ctx->pc = 0x125204u;
    // 0x125204: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x125204u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x125208: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x125208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x12520c: 0x0  nop
    ctx->pc = 0x12520cu;
    // NOP
label_125210:
    // 0x125210: 0x27c00  sll         $t7, $v0, 16
    ctx->pc = 0x125210u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_125214:
    // 0x125214: 0x30aeffff  andi        $t6, $a1, 0xFFFF
    ctx->pc = 0x125214u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x125218: 0x1ec7825  or          $t7, $t7, $t4
    ctx->pc = 0x125218u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 12));
    // 0x12521c: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x12521cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x125220: 0x31edffff  andi        $t5, $t7, 0xFFFF
    ctx->pc = 0x125220u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x125224: 0x56402  srl         $t4, $a1, 16
    ctx->pc = 0x125224u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x125228: 0x1ae4018  mult        $t0, $t5, $t6
    ctx->pc = 0x125228u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x12522c: 0xf7c02  srl         $t7, $t7, 16
    ctx->pc = 0x12522cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
    // 0x125230: 0x71ac6818  mult1       $t5, $t5, $t4
    ctx->pc = 0x125230u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x125234: 0x1ee7018  mult        $t6, $t7, $t6
    ctx->pc = 0x125234u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x125238: 0x71ec6018  mult1       $t4, $t7, $t4
    ctx->pc = 0x125238u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x12523c: 0x87c02  srl         $t7, $t0, 16
    ctx->pc = 0x12523cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x125240: 0x1af6821  addu        $t5, $t5, $t7
    ctx->pc = 0x125240u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x125244: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x125244u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x125248: 0x1ae702b  sltu        $t6, $t5, $t6
    ctx->pc = 0x125248u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x12524c: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x12524Cu;
    {
        const bool branch_taken_0x12524c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x125250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12524Cu;
            // 0x125250: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12524c) {
            ctx->pc = 0x12525Cu;
            goto label_12525c;
        }
    }
    ctx->pc = 0x125254u;
    // 0x125254: 0x3c0f0001  lui         $t7, 0x1
    ctx->pc = 0x125254u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)1 << 16));
    // 0x125258: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x125258u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
label_12525c:
    // 0x12525c: 0xd7c02  srl         $t7, $t5, 16
    ctx->pc = 0x12525cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x125260: 0x310effff  andi        $t6, $t0, 0xFFFF
    ctx->pc = 0x125260u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x125264: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x125264u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x125268: 0xd6c00  sll         $t5, $t5, 16
    ctx->pc = 0x125268u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x12526c: 0x14c782b  sltu        $t7, $t2, $t4
    ctx->pc = 0x12526cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x125270: 0x15e00019  bnez        $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x125270u;
    {
        const bool branch_taken_0x125270 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125270u;
            // 0x125274: 0x1ae4021  addu        $t0, $t5, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125270) {
            ctx->pc = 0x1252D8u;
            goto label_1252d8;
        }
    }
    ctx->pc = 0x125278u;
    // 0x125278: 0x118a0015  beq         $t4, $t2, . + 4 + (0x15 << 2)
    ctx->pc = 0x125278u;
    {
        const bool branch_taken_0x125278 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 10));
        ctx->pc = 0x12527Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125278u;
            // 0x12527c: 0x88782b  sltu        $t7, $a0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125278) {
            ctx->pc = 0x1252D0u;
            goto label_1252d0;
        }
    }
    ctx->pc = 0x125280u;
label_125280:
    // 0x125280: 0x1320fee1  beqz        $t9, . + 4 + (-0x11F << 2)
    ctx->pc = 0x125280u;
    {
        const bool branch_taken_0x125280 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x125284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125280u;
            // 0x125284: 0x886823  subu        $t5, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125280) {
            ctx->pc = 0x124E08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124e08;
        }
    }
    ctx->pc = 0x125288u;
    // 0x125288: 0xcc6023  subu        $t4, $a2, $t4
    ctx->pc = 0x125288u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x12528c: 0x8d702b  sltu        $t6, $a0, $t5
    ctx->pc = 0x12528cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x125290: 0x6d6806  srlv        $t5, $t5, $v1
    ctx->pc = 0x125290u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 3) & 0x1F));
    // 0x125294: 0x18e5023  subu        $t2, $t4, $t6
    ctx->pc = 0x125294u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x125298: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x125298u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12529c: 0x30a7804  sllv        $t7, $t2, $t8
    ctx->pc = 0x12529cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 24) & 0x1F));
    // 0x1252a0: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x1252a0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x1252a4: 0x1ed7825  or          $t7, $t7, $t5
    ctx->pc = 0x1252a4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 13));
    // 0x1252a8: 0x12e4824  and         $t1, $t1, $t6
    ctx->pc = 0x1252a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 14));
    // 0x1252ac: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x1252acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1252b0: 0x6a7006  srlv        $t6, $t2, $v1
    ctx->pc = 0x1252b0u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x1252b4: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x1252b4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x1252b8: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x1252b8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x1252bc: 0x12f4825  or          $t1, $t1, $t7
    ctx->pc = 0x1252bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 15));
    // 0x1252c0: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x1252c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1252c4: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x1252c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x1252c8: 0x1000fece  b           . + 4 + (-0x132 << 2)
    ctx->pc = 0x1252C8u;
    {
        const bool branch_taken_0x1252c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1252CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1252C8u;
            // 0x1252cc: 0x12e4825  or          $t1, $t1, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1252c8) {
            ctx->pc = 0x124E04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124e04;
        }
    }
    ctx->pc = 0x1252D0u;
label_1252d0:
    // 0x1252d0: 0x11e0ffeb  beqz        $t7, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1252D0u;
    {
        const bool branch_taken_0x1252d0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1252d0) {
            ctx->pc = 0x125280u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125280;
        }
    }
    ctx->pc = 0x1252D8u;
label_1252d8:
    // 0x1252d8: 0x1057823  subu        $t7, $t0, $a1
    ctx->pc = 0x1252d8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1252dc: 0x18b6823  subu        $t5, $t4, $t3
    ctx->pc = 0x1252dcu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x1252e0: 0x10f702b  sltu        $t6, $t0, $t7
    ctx->pc = 0x1252e0u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x1252e4: 0x1e0402d  daddu       $t0, $t7, $zero
    ctx->pc = 0x1252e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1252e8: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x1252E8u;
    {
        const bool branch_taken_0x1252e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1252ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1252E8u;
            // 0x1252ec: 0x1ae6023  subu        $t4, $t5, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1252e8) {
            ctx->pc = 0x125280u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125280;
        }
    }
    ctx->pc = 0x1252F0u;
label_1252f0:
    // 0x1252f0: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x1252f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1252f4: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x1252f4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x1252f8: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x1252f8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1252fc: 0x1eb782b  sltu        $t7, $t7, $t3
    ctx->pc = 0x1252fcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x125300: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x125300u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125304: 0x1000ff67  b           . + 4 + (-0x99 << 2)
    ctx->pc = 0x125304u;
    {
        const bool branch_taken_0x125304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125304u;
            // 0x125308: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125304) {
            ctx->pc = 0x1250A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1250a4;
        }
    }
    ctx->pc = 0x12530Cu;
    // 0x12530c: 0x0  nop
    ctx->pc = 0x12530cu;
    // NOP
}
