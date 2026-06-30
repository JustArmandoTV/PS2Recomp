#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00123EF0
// Address: 0x123ef0 - 0x1245a8
void sub_00123EF0_0x123ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123EF0_0x123ef0");
#endif

    switch (ctx->pc) {
        case 0x123f04u: goto label_123f04;
        case 0x123f5cu: goto label_123f5c;
        case 0x12404cu: goto label_12404c;
        case 0x124074u: goto label_124074;
        case 0x124078u: goto label_124078;
        case 0x1240fcu: goto label_1240fc;
        case 0x124130u: goto label_124130;
        case 0x12432cu: goto label_12432c;
        case 0x124508u: goto label_124508;
        default: break;
    }

    ctx->pc = 0x123ef0u;

    // 0x123ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123ef4: 0x4783f  dsra32      $t7, $a0, 0
    ctx->pc = 0x123ef4u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x123ef8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x123ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x123efc: 0x5e001a6  bltz        $t7, . + 4 + (0x1A6 << 2)
    ctx->pc = 0x123EFCu;
    {
        const bool branch_taken_0x123efc = (GPR_S32(ctx, 15) < 0);
        ctx->pc = 0x123F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123EFCu;
            // 0x123f00: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123efc) {
            ctx->pc = 0x124598u;
            goto label_124598;
        }
    }
    ctx->pc = 0x123F04u;
label_123f04:
    // 0x123f04: 0x5783f  dsra32      $t7, $a1, 0
    ctx->pc = 0x123f04u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x123f08: 0x5702f  dsubu       $t6, $zero, $a1
    ctx->pc = 0x123f08u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 5));
    // 0x123f0c: 0x29ef0000  slti        $t7, $t7, 0x0
    ctx->pc = 0x123f0cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x123f10: 0x4503f  dsra32      $t2, $a0, 0
    ctx->pc = 0x123f10u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x123f14: 0xaf700a  movz        $t6, $a1, $t7
    ctx->pc = 0x123f14u;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 5));
    // 0x123f18: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x123f18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x123f1c: 0xe283c  dsll32      $a1, $t6, 0
    ctx->pc = 0x123f1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 14) << (32 + 0));
    // 0x123f20: 0xe583f  dsra32      $t3, $t6, 0
    ctx->pc = 0x123f20u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x123f24: 0x3a0c82d  daddu       $t9, $sp, $zero
    ctx->pc = 0x123f24u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123f28: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x123f28u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x123f2c: 0x156000e6  bnez        $t3, . + 4 + (0xE6 << 2)
    ctx->pc = 0x123F2Cu;
    {
        const bool branch_taken_0x123f2c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x123F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123F2Cu;
            // 0x123f30: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f2c) {
            ctx->pc = 0x1242C8u;
            goto label_1242c8;
        }
    }
    ctx->pc = 0x123F34u;
    // 0x123f34: 0x145782b  sltu        $t7, $t2, $a1
    ctx->pc = 0x123f34u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x123f38: 0x11e00061  beqz        $t7, . + 4 + (0x61 << 2)
    ctx->pc = 0x123F38u;
    {
        const bool branch_taken_0x123f38 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x123F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123F38u;
            // 0x123f3c: 0x340fffff  ori         $t7, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f38) {
            ctx->pc = 0x1240C0u;
            goto label_1240c0;
        }
    }
    ctx->pc = 0x123F40u;
    // 0x123f40: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x123f40u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x123f44: 0x15e00056  bnez        $t7, . + 4 + (0x56 << 2)
    ctx->pc = 0x123F44u;
    {
        const bool branch_taken_0x123f44 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x123F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123F44u;
            // 0x123f48: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f44) {
            ctx->pc = 0x1240A0u;
            goto label_1240a0;
        }
    }
    ctx->pc = 0x123F4Cu;
    // 0x123f4c: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x123f4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x123f50: 0x2cae0100  sltiu       $t6, $a1, 0x100
    ctx->pc = 0x123f50u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x123f54: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x123f54u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123f58: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x123f58u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_123f5c:
    // 0x123f5c: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x123f5cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x123f60: 0x1857806  srlv        $t7, $a1, $t4
    ctx->pc = 0x123f60u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 12) & 0x1F));
    // 0x123f64: 0x25ce05d0  addiu       $t6, $t6, 0x5D0
    ctx->pc = 0x123f64u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1488));
    // 0x123f68: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x123f68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x123f6c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x123f6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x123f70: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x123f70u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x123f74: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x123f74u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x123f78: 0x16d1823  subu        $v1, $t3, $t5
    ctx->pc = 0x123f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x123f7c: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x123F7Cu;
    {
        const bool branch_taken_0x123f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x123f7c) {
            ctx->pc = 0x123F80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x123F7Cu;
            // 0x123f80: 0x55c02  srl         $t3, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x123FA0u;
            goto label_123fa0;
        }
    }
    ctx->pc = 0x123F84u;
    // 0x123f84: 0x1637823  subu        $t7, $t3, $v1
    ctx->pc = 0x123f84u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x123f88: 0x6a7004  sllv        $t6, $t2, $v1
    ctx->pc = 0x123f88u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x123f8c: 0x1e47806  srlv        $t7, $a0, $t7
    ctx->pc = 0x123f8cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 15) & 0x1F));
    // 0x123f90: 0x652804  sllv        $a1, $a1, $v1
    ctx->pc = 0x123f90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x123f94: 0x1cf5025  or          $t2, $t6, $t7
    ctx->pc = 0x123f94u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x123f98: 0x642004  sllv        $a0, $a0, $v1
    ctx->pc = 0x123f98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x123f9c: 0x55c02  srl         $t3, $a1, 16
    ctx->pc = 0x123f9cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
label_123fa0:
    // 0x123fa0: 0x30a8ffff  andi        $t0, $a1, 0xFFFF
    ctx->pc = 0x123fa0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x123fa4: 0x14b001b  divu        $zero, $t2, $t3
    ctx->pc = 0x123fa4u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x123fa8: 0x46c02  srl         $t5, $a0, 16
    ctx->pc = 0x123fa8u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x123fac: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x123FACu;
    {
        const bool branch_taken_0x123fac = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x123fac) {
            ctx->pc = 0x123FB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x123FACu;
            // 0x123fb0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x123FB4u;
            goto label_123fb4;
        }
    }
    ctx->pc = 0x123FB4u;
label_123fb4:
    // 0x123fb4: 0x7812  mflo        $t7
    ctx->pc = 0x123fb4u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x123fb8: 0x7010  mfhi        $t6
    ctx->pc = 0x123fb8u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x123fbc: 0x1e85018  mult        $t2, $t7, $t0
    ctx->pc = 0x123fbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x123fc0: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x123fc0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x123fc4: 0x1cd6025  or          $t4, $t6, $t5
    ctx->pc = 0x123fc4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x123fc8: 0x18a782b  sltu        $t7, $t4, $t2
    ctx->pc = 0x123fc8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x123fcc: 0x51e0000a  beql        $t7, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x123FCCu;
    {
        const bool branch_taken_0x123fcc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x123fcc) {
            ctx->pc = 0x123FD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x123FCCu;
            // 0x123fd0: 0x18a6023  subu        $t4, $t4, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x123FF8u;
            goto label_123ff8;
        }
    }
    ctx->pc = 0x123FD4u;
    // 0x123fd4: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x123fd4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x123fd8: 0x185782b  sltu        $t7, $t4, $a1
    ctx->pc = 0x123fd8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x123fdc: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x123FDCu;
    {
        const bool branch_taken_0x123fdc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x123fdc) {
            ctx->pc = 0x123FE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x123FDCu;
            // 0x123fe0: 0x18a6023  subu        $t4, $t4, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x123FF8u;
            goto label_123ff8;
        }
    }
    ctx->pc = 0x123FE4u;
    // 0x123fe4: 0x18a782b  sltu        $t7, $t4, $t2
    ctx->pc = 0x123fe4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x123fe8: 0x1857021  addu        $t6, $t4, $a1
    ctx->pc = 0x123fe8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x123fec: 0x39ef0000  xori        $t7, $t7, 0x0
    ctx->pc = 0x123fecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)0);
    // 0x123ff0: 0x1cf600b  movn        $t4, $t6, $t7
    ctx->pc = 0x123ff0u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 14));
    // 0x123ff4: 0x18a6023  subu        $t4, $t4, $t2
    ctx->pc = 0x123ff4u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
label_123ff8:
    // 0x123ff8: 0x308dffff  andi        $t5, $a0, 0xFFFF
    ctx->pc = 0x123ff8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x123ffc: 0x18b001b  divu        $zero, $t4, $t3
    ctx->pc = 0x123ffcu;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x124000: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x124000u;
    {
        const bool branch_taken_0x124000 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x124000) {
            ctx->pc = 0x124004u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124000u;
            // 0x124004: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x124008u;
            goto label_124008;
        }
    }
    ctx->pc = 0x124008u;
label_124008:
    // 0x124008: 0x7812  mflo        $t7
    ctx->pc = 0x124008u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x12400c: 0x7010  mfhi        $t6
    ctx->pc = 0x12400cu;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x124010: 0x1e85018  mult        $t2, $t7, $t0
    ctx->pc = 0x124010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x124014: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x124014u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x124018: 0x1cd2025  or          $a0, $t6, $t5
    ctx->pc = 0x124018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12401c: 0x8a782b  sltu        $t7, $a0, $t2
    ctx->pc = 0x12401cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x124020: 0x51e0000a  beql        $t7, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x124020u;
    {
        const bool branch_taken_0x124020 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x124020) {
            ctx->pc = 0x124024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124020u;
            // 0x124024: 0x8a2023  subu        $a0, $a0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12404Cu;
            goto label_12404c;
        }
    }
    ctx->pc = 0x124028u;
    // 0x124028: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x124028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12402c: 0x85782b  sltu        $t7, $a0, $a1
    ctx->pc = 0x12402cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x124030: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x124030u;
    {
        const bool branch_taken_0x124030 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x124030) {
            ctx->pc = 0x124034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124030u;
            // 0x124034: 0x8a2023  subu        $a0, $a0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12404Cu;
            goto label_12404c;
        }
    }
    ctx->pc = 0x124038u;
    // 0x124038: 0x8a782b  sltu        $t7, $a0, $t2
    ctx->pc = 0x124038u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12403c: 0x857021  addu        $t6, $a0, $a1
    ctx->pc = 0x12403cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x124040: 0x39ef0000  xori        $t7, $t7, 0x0
    ctx->pc = 0x124040u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)0);
    // 0x124044: 0x1cf200b  movn        $a0, $t6, $t7
    ctx->pc = 0x124044u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 14));
    // 0x124048: 0x8a2023  subu        $a0, $a0, $t2
    ctx->pc = 0x124048u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_12404c:
    // 0x12404c: 0x1320000a  beqz        $t9, . + 4 + (0xA << 2)
    ctx->pc = 0x12404Cu;
    {
        const bool branch_taken_0x12404c = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x124050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12404Cu;
            // 0x124050: 0x647806  srlv        $t7, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12404c) {
            ctx->pc = 0x124078u;
            goto label_124078;
        }
    }
    ctx->pc = 0x124054u;
    // 0x124054: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x124054u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x124058: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x124058u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12405c: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12405cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x124060: 0x12e4824  and         $t1, $t1, $t6
    ctx->pc = 0x124060u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 14));
    // 0x124064: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x124064u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x124068: 0x12f4825  or          $t1, $t1, $t7
    ctx->pc = 0x124068u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 15));
    // 0x12406c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x12406cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x124070: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x124070u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
label_124074:
    // 0x124074: 0xff290000  sd          $t1, 0x0($t9)
    ctx->pc = 0x124074u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 9));
label_124078:
    // 0x124078: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x124078u;
    {
        const bool branch_taken_0x124078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12407Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124078u;
            // 0x12407c: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124078) {
            ctx->pc = 0x124090u;
            goto label_124090;
        }
    }
    ctx->pc = 0x124080u;
    // 0x124080: 0xdfaf0000  ld          $t7, 0x0($sp)
    ctx->pc = 0x124080u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124084: 0xf782f  dsubu       $t7, $zero, $t7
    ctx->pc = 0x124084u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) - GPR_U64(ctx, 15));
    // 0x124088: 0xffaf0000  sd          $t7, 0x0($sp)
    ctx->pc = 0x124088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 15));
    // 0x12408c: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x12408cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_124090:
    // 0x124090: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x124090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124094: 0x3e00008  jr          $ra
    ctx->pc = 0x124094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124094u;
            // 0x124098: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12409Cu;
    // 0x12409c: 0x0  nop
    ctx->pc = 0x12409cu;
    // NOP
label_1240a0:
    // 0x1240a0: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x1240a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1240a4: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x1240a4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x1240a8: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x1240a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1240ac: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x1240acu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1240b0: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x1240b0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1240b4: 0x1000ffa9  b           . + 4 + (-0x57 << 2)
    ctx->pc = 0x1240B4u;
    {
        const bool branch_taken_0x1240b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1240B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1240B4u;
            // 0x1240b8: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1240b4) {
            ctx->pc = 0x123F5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123f5c;
        }
    }
    ctx->pc = 0x1240BCu;
    // 0x1240bc: 0x0  nop
    ctx->pc = 0x1240bcu;
    // NOP
label_1240c0:
    // 0x1240c0: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1240C0u;
    {
        const bool branch_taken_0x1240c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1240C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1240C0u;
            // 0x1240c4: 0x1e5782b  sltu        $t7, $t7, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1240c0) {
            ctx->pc = 0x1240E4u;
            goto label_1240e4;
        }
    }
    ctx->pc = 0x1240C8u;
    // 0x1240c8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1240c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1240cc: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1240CCu;
    {
        const bool branch_taken_0x1240cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1240cc) {
            ctx->pc = 0x1240D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1240CCu;
            // 0x1240d0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1240D4u;
            goto label_1240d4;
        }
    }
    ctx->pc = 0x1240D4u;
label_1240d4:
    // 0x1240d4: 0x1eb001b  divu        $zero, $t7, $t3
    ctx->pc = 0x1240d4u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x1240d8: 0x2812  mflo        $a1
    ctx->pc = 0x1240d8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1240dc: 0x340fffff  ori         $t7, $zero, 0xFFFF
    ctx->pc = 0x1240dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1240e0: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x1240e0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1240e4:
    // 0x1240e4: 0x15e00070  bnez        $t7, . + 4 + (0x70 << 2)
    ctx->pc = 0x1240E4u;
    {
        const bool branch_taken_0x1240e4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1240E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1240E4u;
            // 0x1240e8: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1240e4) {
            ctx->pc = 0x1242A8u;
            goto label_1242a8;
        }
    }
    ctx->pc = 0x1240ECu;
    // 0x1240ec: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x1240ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1240f0: 0x2cae0100  sltiu       $t6, $a1, 0x100
    ctx->pc = 0x1240f0u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1240f4: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x1240f4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1240f8: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x1240f8u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_1240fc:
    // 0x1240fc: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x1240fcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x124100: 0x1857806  srlv        $t7, $a1, $t4
    ctx->pc = 0x124100u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 12) & 0x1F));
    // 0x124104: 0x25ce05d0  addiu       $t6, $t6, 0x5D0
    ctx->pc = 0x124104u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1488));
    // 0x124108: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x124108u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12410c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12410cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x124110: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x124110u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x124114: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x124114u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x124118: 0x16d1823  subu        $v1, $t3, $t5
    ctx->pc = 0x124118u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x12411c: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x12411Cu;
    {
        const bool branch_taken_0x12411c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x124120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12411Cu;
            // 0x124120: 0x163c023  subu        $t8, $t3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12411c) {
            ctx->pc = 0x1241E0u;
            goto label_1241e0;
        }
    }
    ctx->pc = 0x124124u;
    // 0x124124: 0x1455023  subu        $t2, $t2, $a1
    ctx->pc = 0x124124u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x124128: 0x54402  srl         $t0, $a1, 16
    ctx->pc = 0x124128u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x12412c: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x12412cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_124130:
    // 0x124130: 0x148001b  divu        $zero, $t2, $t0
    ctx->pc = 0x124130u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x124134: 0x46c02  srl         $t5, $a0, 16
    ctx->pc = 0x124134u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x124138: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x124138u;
    {
        const bool branch_taken_0x124138 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x124138) {
            ctx->pc = 0x12413Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124138u;
            // 0x12413c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x124140u;
            goto label_124140;
        }
    }
    ctx->pc = 0x124140u;
label_124140:
    // 0x124140: 0x7812  mflo        $t7
    ctx->pc = 0x124140u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x124144: 0x7010  mfhi        $t6
    ctx->pc = 0x124144u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x124148: 0x1e25818  mult        $t3, $t7, $v0
    ctx->pc = 0x124148u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x12414c: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12414cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x124150: 0x1cd6025  or          $t4, $t6, $t5
    ctx->pc = 0x124150u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x124154: 0x18b782b  sltu        $t7, $t4, $t3
    ctx->pc = 0x124154u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x124158: 0x51e0000a  beql        $t7, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x124158u;
    {
        const bool branch_taken_0x124158 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x124158) {
            ctx->pc = 0x12415Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124158u;
            // 0x12415c: 0x18b6023  subu        $t4, $t4, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124184u;
            goto label_124184;
        }
    }
    ctx->pc = 0x124160u;
    // 0x124160: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x124160u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x124164: 0x185782b  sltu        $t7, $t4, $a1
    ctx->pc = 0x124164u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x124168: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x124168u;
    {
        const bool branch_taken_0x124168 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x124168) {
            ctx->pc = 0x12416Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124168u;
            // 0x12416c: 0x18b6023  subu        $t4, $t4, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124184u;
            goto label_124184;
        }
    }
    ctx->pc = 0x124170u;
    // 0x124170: 0x18b782b  sltu        $t7, $t4, $t3
    ctx->pc = 0x124170u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x124174: 0x1857021  addu        $t6, $t4, $a1
    ctx->pc = 0x124174u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x124178: 0x39ef0000  xori        $t7, $t7, 0x0
    ctx->pc = 0x124178u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)0);
    // 0x12417c: 0x1cf600b  movn        $t4, $t6, $t7
    ctx->pc = 0x12417cu;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 14));
    // 0x124180: 0x18b6023  subu        $t4, $t4, $t3
    ctx->pc = 0x124180u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
label_124184:
    // 0x124184: 0x308dffff  andi        $t5, $a0, 0xFFFF
    ctx->pc = 0x124184u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x124188: 0x188001b  divu        $zero, $t4, $t0
    ctx->pc = 0x124188u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x12418c: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12418Cu;
    {
        const bool branch_taken_0x12418c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x12418c) {
            ctx->pc = 0x124190u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12418Cu;
            // 0x124190: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x124194u;
            goto label_124194;
        }
    }
    ctx->pc = 0x124194u;
label_124194:
    // 0x124194: 0x7812  mflo        $t7
    ctx->pc = 0x124194u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x124198: 0x7010  mfhi        $t6
    ctx->pc = 0x124198u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12419c: 0x1e25818  mult        $t3, $t7, $v0
    ctx->pc = 0x12419cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1241a0: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x1241a0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x1241a4: 0x1cd2025  or          $a0, $t6, $t5
    ctx->pc = 0x1241a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x1241a8: 0x8b782b  sltu        $t7, $a0, $t3
    ctx->pc = 0x1241a8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1241ac: 0x51e0ffa7  beql        $t7, $zero, . + 4 + (-0x59 << 2)
    ctx->pc = 0x1241ACu;
    {
        const bool branch_taken_0x1241ac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1241ac) {
            ctx->pc = 0x1241B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1241ACu;
            // 0x1241b0: 0x8b2023  subu        $a0, $a0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12404Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12404c;
        }
    }
    ctx->pc = 0x1241B4u;
    // 0x1241b4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1241b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1241b8: 0x85782b  sltu        $t7, $a0, $a1
    ctx->pc = 0x1241b8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1241bc: 0x55e0ffa3  bnel        $t7, $zero, . + 4 + (-0x5D << 2)
    ctx->pc = 0x1241BCu;
    {
        const bool branch_taken_0x1241bc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1241bc) {
            ctx->pc = 0x1241C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1241BCu;
            // 0x1241c0: 0x8b2023  subu        $a0, $a0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12404Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12404c;
        }
    }
    ctx->pc = 0x1241C4u;
    // 0x1241c4: 0x8b782b  sltu        $t7, $a0, $t3
    ctx->pc = 0x1241c4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1241c8: 0x857021  addu        $t6, $a0, $a1
    ctx->pc = 0x1241c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1241cc: 0x39ef0000  xori        $t7, $t7, 0x0
    ctx->pc = 0x1241ccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)0);
    // 0x1241d0: 0x1cf200b  movn        $a0, $t6, $t7
    ctx->pc = 0x1241d0u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 14));
    // 0x1241d4: 0x1000ff9d  b           . + 4 + (-0x63 << 2)
    ctx->pc = 0x1241D4u;
    {
        const bool branch_taken_0x1241d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1241D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1241D4u;
            // 0x1241d8: 0x8b2023  subu        $a0, $a0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1241d4) {
            ctx->pc = 0x12404Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12404c;
        }
    }
    ctx->pc = 0x1241DCu;
    // 0x1241dc: 0x0  nop
    ctx->pc = 0x1241dcu;
    // NOP
label_1241e0:
    // 0x1241e0: 0x652804  sllv        $a1, $a1, $v1
    ctx->pc = 0x1241e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x1241e4: 0x30a6006  srlv        $t4, $t2, $t8
    ctx->pc = 0x1241e4u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 24) & 0x1F));
    // 0x1241e8: 0x54402  srl         $t0, $a1, 16
    ctx->pc = 0x1241e8u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1241ec: 0x188001b  divu        $zero, $t4, $t0
    ctx->pc = 0x1241ecu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x1241f0: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x1241f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1241f4: 0x3047006  srlv        $t6, $a0, $t8
    ctx->pc = 0x1241f4u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 24) & 0x1F));
    // 0x1241f8: 0x6a7804  sllv        $t7, $t2, $v1
    ctx->pc = 0x1241f8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x1241fc: 0x1ee5025  or          $t2, $t7, $t6
    ctx->pc = 0x1241fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x124200: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x124200u;
    {
        const bool branch_taken_0x124200 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x124200) {
            ctx->pc = 0x124204u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124200u;
            // 0x124204: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x124208u;
            goto label_124208;
        }
    }
    ctx->pc = 0x124208u;
label_124208:
    // 0x124208: 0xa7402  srl         $t6, $t2, 16
    ctx->pc = 0x124208u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x12420c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x12420cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124210: 0x642004  sllv        $a0, $a0, $v1
    ctx->pc = 0x124210u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x124214: 0x6012  mflo        $t4
    ctx->pc = 0x124214u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x124218: 0x6810  mfhi        $t5
    ctx->pc = 0x124218u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x12421c: 0x1823818  mult        $a3, $t4, $v0
    ctx->pc = 0x12421cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x124220: 0xd6c00  sll         $t5, $t5, 16
    ctx->pc = 0x124220u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x124224: 0x1ae5825  or          $t3, $t5, $t6
    ctx->pc = 0x124224u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x124228: 0x167782b  sltu        $t7, $t3, $a3
    ctx->pc = 0x124228u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x12422c: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x12422Cu;
    {
        const bool branch_taken_0x12422c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x124230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12422Cu;
            // 0x124230: 0x40c02d  daddu       $t8, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12422c) {
            ctx->pc = 0x124250u;
            goto label_124250;
        }
    }
    ctx->pc = 0x124234u;
    // 0x124234: 0x1655821  addu        $t3, $t3, $a1
    ctx->pc = 0x124234u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x124238: 0x165782b  sltu        $t7, $t3, $a1
    ctx->pc = 0x124238u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12423c: 0x55e00005  bnel        $t7, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12423Cu;
    {
        const bool branch_taken_0x12423c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12423c) {
            ctx->pc = 0x124240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12423Cu;
            // 0x124240: 0x1675823  subu        $t3, $t3, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124254u;
            goto label_124254;
        }
    }
    ctx->pc = 0x124244u;
    // 0x124244: 0x167702b  sltu        $t6, $t3, $a3
    ctx->pc = 0x124244u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x124248: 0x1657821  addu        $t7, $t3, $a1
    ctx->pc = 0x124248u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x12424c: 0x1ee580b  movn        $t3, $t7, $t6
    ctx->pc = 0x12424cu;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 15));
label_124250:
    // 0x124250: 0x1675823  subu        $t3, $t3, $a3
    ctx->pc = 0x124250u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
label_124254:
    // 0x124254: 0x314dffff  andi        $t5, $t2, 0xFFFF
    ctx->pc = 0x124254u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x124258: 0x166001b  divu        $zero, $t3, $a2
    ctx->pc = 0x124258u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
    // 0x12425c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12425Cu;
    {
        const bool branch_taken_0x12425c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x12425c) {
            ctx->pc = 0x124260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12425Cu;
            // 0x124260: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x124264u;
            goto label_124264;
        }
    }
    ctx->pc = 0x124264u;
label_124264:
    // 0x124264: 0x7812  mflo        $t7
    ctx->pc = 0x124264u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x124268: 0x7010  mfhi        $t6
    ctx->pc = 0x124268u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12426c: 0x1f83818  mult        $a3, $t7, $t8
    ctx->pc = 0x12426cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x124270: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x124270u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x124274: 0x1cd6025  or          $t4, $t6, $t5
    ctx->pc = 0x124274u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x124278: 0x187782b  sltu        $t7, $t4, $a3
    ctx->pc = 0x124278u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x12427c: 0x11e0ffac  beqz        $t7, . + 4 + (-0x54 << 2)
    ctx->pc = 0x12427Cu;
    {
        const bool branch_taken_0x12427c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x124280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12427Cu;
            // 0x124280: 0x1875023  subu        $t2, $t4, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12427c) {
            ctx->pc = 0x124130u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124130;
        }
    }
    ctx->pc = 0x124284u;
    // 0x124284: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x124284u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x124288: 0x185782b  sltu        $t7, $t4, $a1
    ctx->pc = 0x124288u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12428c: 0x55e0ffa8  bnel        $t7, $zero, . + 4 + (-0x58 << 2)
    ctx->pc = 0x12428Cu;
    {
        const bool branch_taken_0x12428c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12428c) {
            ctx->pc = 0x124290u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12428Cu;
            // 0x124290: 0x1875023  subu        $t2, $t4, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124130u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124130;
        }
    }
    ctx->pc = 0x124294u;
    // 0x124294: 0x187702b  sltu        $t6, $t4, $a3
    ctx->pc = 0x124294u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x124298: 0x1857821  addu        $t7, $t4, $a1
    ctx->pc = 0x124298u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x12429c: 0x1ee600b  movn        $t4, $t7, $t6
    ctx->pc = 0x12429cu;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 15));
    // 0x1242a0: 0x1000ffa3  b           . + 4 + (-0x5D << 2)
    ctx->pc = 0x1242A0u;
    {
        const bool branch_taken_0x1242a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1242A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1242A0u;
            // 0x1242a4: 0x1875023  subu        $t2, $t4, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1242a0) {
            ctx->pc = 0x124130u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124130;
        }
    }
    ctx->pc = 0x1242A8u;
label_1242a8:
    // 0x1242a8: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x1242a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1242ac: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x1242acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x1242b0: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x1242b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1242b4: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x1242b4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1242b8: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x1242b8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1242bc: 0x1000ff8f  b           . + 4 + (-0x71 << 2)
    ctx->pc = 0x1242BCu;
    {
        const bool branch_taken_0x1242bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1242C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1242BCu;
            // 0x1242c0: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1242bc) {
            ctx->pc = 0x1240FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1240fc;
        }
    }
    ctx->pc = 0x1242C4u;
    // 0x1242c4: 0x0  nop
    ctx->pc = 0x1242c4u;
    // NOP
label_1242c8:
    // 0x1242c8: 0x14b782b  sltu        $t7, $t2, $t3
    ctx->pc = 0x1242c8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1242cc: 0x11e00010  beqz        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x1242CCu;
    {
        const bool branch_taken_0x1242cc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1242D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1242CCu;
            // 0x1242d0: 0x340fffff  ori         $t7, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1242cc) {
            ctx->pc = 0x124310u;
            goto label_124310;
        }
    }
    ctx->pc = 0x1242D4u;
    // 0x1242d4: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x1242d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1242d8: 0x4703c  dsll32      $t6, $a0, 0
    ctx->pc = 0x1242d8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1242dc: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x1242dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1242e0: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x1242e0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x1242e4: 0x12f4824  and         $t1, $t1, $t7
    ctx->pc = 0x1242e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 15));
    // 0x1242e8: 0xa783c  dsll32      $t7, $t2, 0
    ctx->pc = 0x1242e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1242ec: 0x12e4825  or          $t1, $t1, $t6
    ctx->pc = 0x1242ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 14));
    // 0x1242f0: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x1242f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x1242f4: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x1242f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1242f8: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x1242f8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1242fc: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x1242fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x124300: 0x12f4825  or          $t1, $t1, $t7
    ctx->pc = 0x124300u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 15));
    // 0x124304: 0x1000ff5c  b           . + 4 + (-0xA4 << 2)
    ctx->pc = 0x124304u;
    {
        const bool branch_taken_0x124304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124304u;
            // 0x124308: 0xffa90000  sd          $t1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124304) {
            ctx->pc = 0x124078u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124078;
        }
    }
    ctx->pc = 0x12430Cu;
    // 0x12430c: 0x0  nop
    ctx->pc = 0x12430cu;
    // NOP
label_124310:
    // 0x124310: 0x1eb782b  sltu        $t7, $t7, $t3
    ctx->pc = 0x124310u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x124314: 0x15e00098  bnez        $t7, . + 4 + (0x98 << 2)
    ctx->pc = 0x124314u;
    {
        const bool branch_taken_0x124314 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x124318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124314u;
            // 0x124318: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124314) {
            ctx->pc = 0x124578u;
            goto label_124578;
        }
    }
    ctx->pc = 0x12431Cu;
    // 0x12431c: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x12431cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x124320: 0x2d6e0100  sltiu       $t6, $t3, 0x100
    ctx->pc = 0x124320u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x124324: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x124324u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124328: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x124328u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_12432c:
    // 0x12432c: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x12432cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x124330: 0x18b7806  srlv        $t7, $t3, $t4
    ctx->pc = 0x124330u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 12) & 0x1F));
    // 0x124334: 0x25ce05d0  addiu       $t6, $t6, 0x5D0
    ctx->pc = 0x124334u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1488));
    // 0x124338: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x124338u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12433c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12433cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x124340: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x124340u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x124344: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x124344u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x124348: 0x10d1823  subu        $v1, $t0, $t5
    ctx->pc = 0x124348u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x12434c: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x12434Cu;
    {
        const bool branch_taken_0x12434c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x124350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12434Cu;
            // 0x124350: 0x103c023  subu        $t8, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12434c) {
            ctx->pc = 0x1243B8u;
            goto label_1243b8;
        }
    }
    ctx->pc = 0x124354u;
    // 0x124354: 0x16a782b  sltu        $t7, $t3, $t2
    ctx->pc = 0x124354u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x124358: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x124358u;
    {
        const bool branch_taken_0x124358 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12435Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124358u;
            // 0x12435c: 0x857823  subu        $t7, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124358) {
            ctx->pc = 0x12436Cu;
            goto label_12436c;
        }
    }
    ctx->pc = 0x124360u;
    // 0x124360: 0x85782b  sltu        $t7, $a0, $a1
    ctx->pc = 0x124360u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x124364: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x124364u;
    {
        const bool branch_taken_0x124364 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x124368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124364u;
            // 0x124368: 0x857823  subu        $t7, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124364) {
            ctx->pc = 0x12437Cu;
            goto label_12437c;
        }
    }
    ctx->pc = 0x12436Cu;
label_12436c:
    // 0x12436c: 0x14b6823  subu        $t5, $t2, $t3
    ctx->pc = 0x12436cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x124370: 0x8f702b  sltu        $t6, $a0, $t7
    ctx->pc = 0x124370u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x124374: 0x1e0202d  daddu       $a0, $t7, $zero
    ctx->pc = 0x124374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124378: 0x1ae5023  subu        $t2, $t5, $t6
    ctx->pc = 0x124378u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_12437c:
    // 0x12437c: 0x1320ff3e  beqz        $t9, . + 4 + (-0xC2 << 2)
    ctx->pc = 0x12437Cu;
    {
        const bool branch_taken_0x12437c = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x124380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12437Cu;
            // 0x124380: 0x240fffff  addiu       $t7, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12437c) {
            ctx->pc = 0x124078u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124078;
        }
    }
    ctx->pc = 0x124384u;
    // 0x124384: 0x4703c  dsll32      $t6, $a0, 0
    ctx->pc = 0x124384u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) << (32 + 0));
    // 0x124388: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x124388u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12438c: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x12438cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x124390: 0x12f4824  and         $t1, $t1, $t7
    ctx->pc = 0x124390u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 15));
    // 0x124394: 0xa783c  dsll32      $t7, $t2, 0
    ctx->pc = 0x124394u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) << (32 + 0));
    // 0x124398: 0x12e4825  or          $t1, $t1, $t6
    ctx->pc = 0x124398u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 14));
    // 0x12439c: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x12439cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x1243a0: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x1243a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1243a4: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x1243a4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1243a8: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x1243a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x1243ac: 0x1000ff31  b           . + 4 + (-0xCF << 2)
    ctx->pc = 0x1243ACu;
    {
        const bool branch_taken_0x1243ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1243B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1243ACu;
            // 0x1243b0: 0x12f4825  or          $t1, $t1, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1243ac) {
            ctx->pc = 0x124074u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124074;
        }
    }
    ctx->pc = 0x1243B4u;
    // 0x1243b4: 0x0  nop
    ctx->pc = 0x1243b4u;
    // NOP
label_1243b8:
    // 0x1243b8: 0x6b7004  sllv        $t6, $t3, $v1
    ctx->pc = 0x1243b8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 3) & 0x1F));
    // 0x1243bc: 0x3057806  srlv        $t7, $a1, $t8
    ctx->pc = 0x1243bcu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 24) & 0x1F));
    // 0x1243c0: 0x30a6006  srlv        $t4, $t2, $t8
    ctx->pc = 0x1243c0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 24) & 0x1F));
    // 0x1243c4: 0x1cf5825  or          $t3, $t6, $t7
    ctx->pc = 0x1243c4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x1243c8: 0x6a6804  sllv        $t5, $t2, $v1
    ctx->pc = 0x1243c8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x1243cc: 0xb4402  srl         $t0, $t3, 16
    ctx->pc = 0x1243ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x1243d0: 0x3166ffff  andi        $a2, $t3, 0xFFFF
    ctx->pc = 0x1243d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x1243d4: 0x188001b  divu        $zero, $t4, $t0
    ctx->pc = 0x1243d4u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x1243d8: 0x3047806  srlv        $t7, $a0, $t8
    ctx->pc = 0x1243d8u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 24) & 0x1F));
    // 0x1243dc: 0x1af5025  or          $t2, $t5, $t7
    ctx->pc = 0x1243dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x1243e0: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1243E0u;
    {
        const bool branch_taken_0x1243e0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1243e0) {
            ctx->pc = 0x1243E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1243E0u;
            // 0x1243e4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1243E8u;
            goto label_1243e8;
        }
    }
    ctx->pc = 0x1243E8u;
label_1243e8:
    // 0x1243e8: 0xa6c02  srl         $t5, $t2, 16
    ctx->pc = 0x1243e8u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1243ec: 0x652804  sllv        $a1, $a1, $v1
    ctx->pc = 0x1243ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x1243f0: 0x6012  mflo        $t4
    ctx->pc = 0x1243f0u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x1243f4: 0x7010  mfhi        $t6
    ctx->pc = 0x1243f4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x1243f8: 0x1012  mflo        $v0
    ctx->pc = 0x1243f8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1243fc: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x1243fcu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x124400: 0x1863818  mult        $a3, $t4, $a2
    ctx->pc = 0x124400u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x124404: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x124404u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x124408: 0x1c7782b  sltu        $t7, $t6, $a3
    ctx->pc = 0x124408u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x12440c: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x12440Cu;
    {
        const bool branch_taken_0x12440c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x124410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12440Cu;
            // 0x124410: 0x642004  sllv        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12440c) {
            ctx->pc = 0x124438u;
            goto label_124438;
        }
    }
    ctx->pc = 0x124414u;
    // 0x124414: 0x1cb7021  addu        $t6, $t6, $t3
    ctx->pc = 0x124414u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x124418: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x124418u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12441c: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12441Cu;
    {
        const bool branch_taken_0x12441c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x124420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12441Cu;
            // 0x124420: 0x2582ffff  addiu       $v0, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12441c) {
            ctx->pc = 0x124438u;
            goto label_124438;
        }
    }
    ctx->pc = 0x124424u;
    // 0x124424: 0x1c7782b  sltu        $t7, $t6, $a3
    ctx->pc = 0x124424u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x124428: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x124428u;
    {
        const bool branch_taken_0x124428 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x124428) {
            ctx->pc = 0x12442Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124428u;
            // 0x12442c: 0x1c77023  subu        $t6, $t6, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12443Cu;
            goto label_12443c;
        }
    }
    ctx->pc = 0x124430u;
    // 0x124430: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x124430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x124434: 0x1cb7021  addu        $t6, $t6, $t3
    ctx->pc = 0x124434u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
label_124438:
    // 0x124438: 0x1c77023  subu        $t6, $t6, $a3
    ctx->pc = 0x124438u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
label_12443c:
    // 0x12443c: 0x314dffff  andi        $t5, $t2, 0xFFFF
    ctx->pc = 0x12443cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x124440: 0x1c8001b  divu        $zero, $t6, $t0
    ctx->pc = 0x124440u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x124444: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x124444u;
    {
        const bool branch_taken_0x124444 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x124444) {
            ctx->pc = 0x124448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124444u;
            // 0x124448: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12444Cu;
            goto label_12444c;
        }
    }
    ctx->pc = 0x12444Cu;
label_12444c:
    // 0x12444c: 0x7812  mflo        $t7
    ctx->pc = 0x12444cu;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x124450: 0x7010  mfhi        $t6
    ctx->pc = 0x124450u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x124454: 0x6012  mflo        $t4
    ctx->pc = 0x124454u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x124458: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x124458u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12445c: 0x1e63818  mult        $a3, $t7, $a2
    ctx->pc = 0x12445cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x124460: 0x1cd3025  or          $a2, $t6, $t5
    ctx->pc = 0x124460u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x124464: 0xc7782b  sltu        $t7, $a2, $a3
    ctx->pc = 0x124464u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x124468: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x124468u;
    {
        const bool branch_taken_0x124468 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12446Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124468u;
            // 0x12446c: 0x27c00  sll         $t7, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124468) {
            ctx->pc = 0x12449Cu;
            goto label_12449c;
        }
    }
    ctx->pc = 0x124470u;
    // 0x124470: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x124470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x124474: 0xcb782b  sltu        $t7, $a2, $t3
    ctx->pc = 0x124474u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x124478: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x124478u;
    {
        const bool branch_taken_0x124478 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12447Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124478u;
            // 0x12447c: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124478) {
            ctx->pc = 0x124498u;
            goto label_124498;
        }
    }
    ctx->pc = 0x124480u;
    // 0x124480: 0xc7782b  sltu        $t7, $a2, $a3
    ctx->pc = 0x124480u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x124484: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x124484u;
    {
        const bool branch_taken_0x124484 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x124488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124484u;
            // 0x124488: 0x27c00  sll         $t7, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124484) {
            ctx->pc = 0x12449Cu;
            goto label_12449c;
        }
    }
    ctx->pc = 0x12448Cu;
    // 0x12448c: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x12448cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x124490: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x124490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x124494: 0x0  nop
    ctx->pc = 0x124494u;
    // NOP
label_124498:
    // 0x124498: 0x27c00  sll         $t7, $v0, 16
    ctx->pc = 0x124498u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_12449c:
    // 0x12449c: 0x30aeffff  andi        $t6, $a1, 0xFFFF
    ctx->pc = 0x12449cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1244a0: 0x1ec7825  or          $t7, $t7, $t4
    ctx->pc = 0x1244a0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 12));
    // 0x1244a4: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x1244a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1244a8: 0x31edffff  andi        $t5, $t7, 0xFFFF
    ctx->pc = 0x1244a8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x1244ac: 0x56402  srl         $t4, $a1, 16
    ctx->pc = 0x1244acu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1244b0: 0x1ae4018  mult        $t0, $t5, $t6
    ctx->pc = 0x1244b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1244b4: 0xf7c02  srl         $t7, $t7, 16
    ctx->pc = 0x1244b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
    // 0x1244b8: 0x71ac6818  mult1       $t5, $t5, $t4
    ctx->pc = 0x1244b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1244bc: 0x1ee7018  mult        $t6, $t7, $t6
    ctx->pc = 0x1244bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1244c0: 0x71ec6018  mult1       $t4, $t7, $t4
    ctx->pc = 0x1244c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1244c4: 0x87c02  srl         $t7, $t0, 16
    ctx->pc = 0x1244c4u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x1244c8: 0x1af6821  addu        $t5, $t5, $t7
    ctx->pc = 0x1244c8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x1244cc: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x1244ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x1244d0: 0x1ae702b  sltu        $t6, $t5, $t6
    ctx->pc = 0x1244d0u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x1244d4: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1244D4u;
    {
        const bool branch_taken_0x1244d4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1244D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1244D4u;
            // 0x1244d8: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1244d4) {
            ctx->pc = 0x1244E4u;
            goto label_1244e4;
        }
    }
    ctx->pc = 0x1244DCu;
    // 0x1244dc: 0x3c0f0001  lui         $t7, 0x1
    ctx->pc = 0x1244dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)1 << 16));
    // 0x1244e0: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x1244e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
label_1244e4:
    // 0x1244e4: 0xd7c02  srl         $t7, $t5, 16
    ctx->pc = 0x1244e4u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x1244e8: 0x310effff  andi        $t6, $t0, 0xFFFF
    ctx->pc = 0x1244e8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x1244ec: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x1244ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x1244f0: 0xd6c00  sll         $t5, $t5, 16
    ctx->pc = 0x1244f0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x1244f4: 0x14c782b  sltu        $t7, $t2, $t4
    ctx->pc = 0x1244f4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x1244f8: 0x15e00019  bnez        $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x1244F8u;
    {
        const bool branch_taken_0x1244f8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1244FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1244F8u;
            // 0x1244fc: 0x1ae4021  addu        $t0, $t5, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1244f8) {
            ctx->pc = 0x124560u;
            goto label_124560;
        }
    }
    ctx->pc = 0x124500u;
    // 0x124500: 0x118a0015  beq         $t4, $t2, . + 4 + (0x15 << 2)
    ctx->pc = 0x124500u;
    {
        const bool branch_taken_0x124500 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 10));
        ctx->pc = 0x124504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124500u;
            // 0x124504: 0x88782b  sltu        $t7, $a0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124500) {
            ctx->pc = 0x124558u;
            goto label_124558;
        }
    }
    ctx->pc = 0x124508u;
label_124508:
    // 0x124508: 0x1320fedb  beqz        $t9, . + 4 + (-0x125 << 2)
    ctx->pc = 0x124508u;
    {
        const bool branch_taken_0x124508 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x12450Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124508u;
            // 0x12450c: 0x886823  subu        $t5, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124508) {
            ctx->pc = 0x124078u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124078;
        }
    }
    ctx->pc = 0x124510u;
    // 0x124510: 0xcc6023  subu        $t4, $a2, $t4
    ctx->pc = 0x124510u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x124514: 0x8d702b  sltu        $t6, $a0, $t5
    ctx->pc = 0x124514u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x124518: 0x6d6806  srlv        $t5, $t5, $v1
    ctx->pc = 0x124518u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 3) & 0x1F));
    // 0x12451c: 0x18e5023  subu        $t2, $t4, $t6
    ctx->pc = 0x12451cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x124520: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x124520u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x124524: 0x30a7804  sllv        $t7, $t2, $t8
    ctx->pc = 0x124524u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 24) & 0x1F));
    // 0x124528: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x124528u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12452c: 0x1ed7825  or          $t7, $t7, $t5
    ctx->pc = 0x12452cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 13));
    // 0x124530: 0x12e4824  and         $t1, $t1, $t6
    ctx->pc = 0x124530u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 14));
    // 0x124534: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x124534u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x124538: 0x6a7006  srlv        $t6, $t2, $v1
    ctx->pc = 0x124538u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x12453c: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x12453cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x124540: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x124540u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x124544: 0x12f4825  or          $t1, $t1, $t7
    ctx->pc = 0x124544u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 15));
    // 0x124548: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x124548u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x12454c: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x12454cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x124550: 0x1000fec8  b           . + 4 + (-0x138 << 2)
    ctx->pc = 0x124550u;
    {
        const bool branch_taken_0x124550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124550u;
            // 0x124554: 0x12e4825  or          $t1, $t1, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124550) {
            ctx->pc = 0x124074u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124074;
        }
    }
    ctx->pc = 0x124558u;
label_124558:
    // 0x124558: 0x11e0ffeb  beqz        $t7, . + 4 + (-0x15 << 2)
    ctx->pc = 0x124558u;
    {
        const bool branch_taken_0x124558 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x124558) {
            ctx->pc = 0x124508u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124508;
        }
    }
    ctx->pc = 0x124560u;
label_124560:
    // 0x124560: 0x1057823  subu        $t7, $t0, $a1
    ctx->pc = 0x124560u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x124564: 0x18b6823  subu        $t5, $t4, $t3
    ctx->pc = 0x124564u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x124568: 0x10f702b  sltu        $t6, $t0, $t7
    ctx->pc = 0x124568u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x12456c: 0x1e0402d  daddu       $t0, $t7, $zero
    ctx->pc = 0x12456cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124570: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x124570u;
    {
        const bool branch_taken_0x124570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124570u;
            // 0x124574: 0x1ae6023  subu        $t4, $t5, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124570) {
            ctx->pc = 0x124508u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124508;
        }
    }
    ctx->pc = 0x124578u;
label_124578:
    // 0x124578: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x124578u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12457c: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x12457cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x124580: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x124580u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x124584: 0x1eb782b  sltu        $t7, $t7, $t3
    ctx->pc = 0x124584u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x124588: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x124588u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12458c: 0x1000ff67  b           . + 4 + (-0x99 << 2)
    ctx->pc = 0x12458Cu;
    {
        const bool branch_taken_0x12458c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12458Cu;
            // 0x124590: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12458c) {
            ctx->pc = 0x12432Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12432c;
        }
    }
    ctx->pc = 0x124594u;
    // 0x124594: 0x0  nop
    ctx->pc = 0x124594u;
    // NOP
label_124598:
    // 0x124598: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x124598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12459c: 0x1000fe59  b           . + 4 + (-0x1A7 << 2)
    ctx->pc = 0x12459Cu;
    {
        const bool branch_taken_0x12459c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1245A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12459Cu;
            // 0x1245a0: 0x4202f  dsubu       $a0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12459c) {
            ctx->pc = 0x123F04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123f04;
        }
    }
    ctx->pc = 0x1245A4u;
    // 0x1245a4: 0x0  nop
    ctx->pc = 0x1245a4u;
    // NOP
}
