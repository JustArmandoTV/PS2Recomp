#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C7F50
// Address: 0x1c7f50 - 0x1c8198
void sub_001C7F50_0x1c7f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7F50_0x1c7f50");
#endif

    switch (ctx->pc) {
        case 0x1c7f94u: goto label_1c7f94;
        case 0x1c7fc8u: goto label_1c7fc8;
        case 0x1c8028u: goto label_1c8028;
        case 0x1c8088u: goto label_1c8088;
        case 0x1c813cu: goto label_1c813c;
        case 0x1c8158u: goto label_1c8158;
        default: break;
    }

    ctx->pc = 0x1c7f50u;

label_1c7f50:
    // 0x1c7f50: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c7f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c7f54: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c7f54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c7f58: 0x8c43a6b8  lw          $v1, -0x5948($v0)
    ctx->pc = 0x1c7f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944440)));
    // 0x1c7f5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c7f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c7f60: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c7f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c7f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c7f68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c7f68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c7f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c7f70: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c7f70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f74: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c7f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c7f78: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1c7f78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f7c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c7f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c7f80: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1c7f80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f84: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7F84u;
    {
        const bool branch_taken_0x1c7f84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7F84u;
            // 0x1c7f88: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7f84) {
            ctx->pc = 0x1C7F94u;
            goto label_1c7f94;
        }
    }
    ctx->pc = 0x1C7F8Cu;
    // 0x1c7f8c: 0xc071fc4  jal         func_1C7F10
    ctx->pc = 0x1C7F8Cu;
    SET_GPR_U32(ctx, 31, 0x1C7F94u);
    ctx->pc = 0x1C7F10u;
    if (runtime->hasFunction(0x1C7F10u)) {
        auto targetFn = runtime->lookupFunction(0x1C7F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7F94u; }
        if (ctx->pc != 0x1C7F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7F10_0x1c7f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7F94u; }
        if (ctx->pc != 0x1C7F94u) { return; }
    }
    ctx->pc = 0x1C7F94u;
label_1c7f94:
    // 0x1c7f94: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x1c7f94u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c7f98: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x1c7f98u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c7f9c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7F9Cu;
    {
        const bool branch_taken_0x1c7f9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7F9Cu;
            // 0x1c7fa0: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7f9c) {
            ctx->pc = 0x1C7FACu;
            goto label_1c7fac;
        }
    }
    ctx->pc = 0x1C7FA4u;
    // 0x1c7fa4: 0x1a00004f  blez        $s0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1C7FA4u;
    {
        const bool branch_taken_0x1c7fa4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1C7FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7FA4u;
            // 0x1c7fa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7fa4) {
            ctx->pc = 0x1C80E4u;
            goto label_1c80e4;
        }
    }
    ctx->pc = 0x1C7FACu;
label_1c7fac:
    // 0x1c7fac: 0x3c0b0063  lui         $t3, 0x63
    ctx->pc = 0x1c7facu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)99 << 16));
    // 0x1c7fb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c7fb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7fb4: 0x25622a38  addiu       $v0, $t3, 0x2A38
    ctx->pc = 0x1c7fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 10808));
    // 0x1c7fb8: 0x1a000018  blez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C7FB8u;
    {
        const bool branch_taken_0x1c7fb8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1C7FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7FB8u;
            // 0x1c7fbc: 0x844a0200  lh          $t2, 0x200($v0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7fb8) {
            ctx->pc = 0x1C801Cu;
            goto label_1c801c;
        }
    }
    ctx->pc = 0x1C7FC0u;
    // 0x1c7fc0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c7fc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7fc4: 0x0  nop
    ctx->pc = 0x1c7fc4u;
    // NOP
label_1c7fc8:
    // 0x1c7fc8: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x1c7fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1c7fcc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1c7fccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1c7fd0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1c7fd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c7fd4: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x1c7fd4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c7fd8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1c7fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1c7fdc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1c7fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1c7fe0: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x1c7fe0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x1c7fe4: 0x1431818  mult        $v1, $t2, $v1
    ctx->pc = 0x1c7fe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c7fe8: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x1c7fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x1c7fec: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x1c7fecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1c7ff0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c7ff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ff4: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x1c7ff4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1c7ff8: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x1c7ff8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x1c7ffc: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x1c7ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x1c8000: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1c8000u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c8004: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1c8004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c8008: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1c8008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1c800c: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1C800Cu;
    {
        const bool branch_taken_0x1c800c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C800Cu;
            // 0x1c8010: 0x846a0000  lh          $t2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c800c) {
            ctx->pc = 0x1C7FC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c7fc8;
        }
    }
    ctx->pc = 0x1C8014u;
    // 0x1c8014: 0x25622a38  addiu       $v0, $t3, 0x2A38
    ctx->pc = 0x1c8014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 10808));
    // 0x1c8018: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c8018u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c801c:
    // 0x1c801c: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C801Cu;
    {
        const bool branch_taken_0x1c801c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1C8020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C801Cu;
            // 0x1c8020: 0x84480400  lh          $t0, 0x400($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c801c) {
            ctx->pc = 0x1C8074u;
            goto label_1c8074;
        }
    }
    ctx->pc = 0x1C8024u;
    // 0x1c8024: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1c8024u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c8028:
    // 0x1c8028: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x1c8028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1c802c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1c802cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1c8030: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1c8030u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c8034: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x1c8034u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c8038: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1c8038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1c803c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1c803cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1c8040: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x1c8040u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x1c8044: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x1c8044u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c8048: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x1c8048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x1c804c: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x1c804cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1c8050: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c8050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8054: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x1c8054u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1c8058: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x1c8058u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x1c805c: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x1c805cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x1c8060: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1c8060u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c8064: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1c8064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c8068: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c8068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c806c: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1C806Cu;
    {
        const bool branch_taken_0x1c806c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C806Cu;
            // 0x1c8070: 0x84680000  lh          $t0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c806c) {
            ctx->pc = 0x1C8028u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8028;
        }
    }
    ctx->pc = 0x1C8074u;
label_1c8074:
    // 0x1c8074: 0x25622a38  addiu       $v0, $t3, 0x2A38
    ctx->pc = 0x1c8074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 10808));
    // 0x1c8078: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c8078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c807c: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C807Cu;
    {
        const bool branch_taken_0x1c807c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1C8080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C807Cu;
            // 0x1c8080: 0x84440600  lh          $a0, 0x600($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c807c) {
            ctx->pc = 0x1C80D4u;
            goto label_1c80d4;
        }
    }
    ctx->pc = 0x1C8084u;
    // 0x1c8084: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1c8084u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c8088:
    // 0x1c8088: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x1c8088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1c808c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1c808cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1c8090: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1c8090u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c8094: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x1c8094u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c8098: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1c8098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1c809c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1c809cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1c80a0: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x1c80a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x1c80a4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1c80a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c80a8: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x1c80a8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1c80ac: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x1c80acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x1c80b0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c80b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c80b4: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x1c80b4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1c80b8: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x1c80b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x1c80bc: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x1c80bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x1c80c0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1c80c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c80c4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1c80c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c80c8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c80c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c80cc: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1C80CCu;
    {
        const bool branch_taken_0x1c80cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C80D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C80CCu;
            // 0x1c80d0: 0x84640000  lh          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c80cc) {
            ctx->pc = 0x1C8088u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8088;
        }
    }
    ctx->pc = 0x1C80D4u;
label_1c80d4:
    // 0x1c80d4: 0xa64a0000  sh          $t2, 0x0($s2)
    ctx->pc = 0x1c80d4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x1c80d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c80d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c80dc: 0xa6680000  sh          $t0, 0x0($s3)
    ctx->pc = 0x1c80dcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1c80e0: 0xa6840000  sh          $a0, 0x0($s4)
    ctx->pc = 0x1c80e0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 4));
label_1c80e4:
    // 0x1c80e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c80e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c80e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c80e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c80ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c80ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c80f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c80f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c80f4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c80f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c80f8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c80f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c80fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C80FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C80FCu;
            // 0x1c8100: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8104u;
    // 0x1c8104: 0x0  nop
    ctx->pc = 0x1c8104u;
    // NOP
    // 0x1c8108: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c8108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c810c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c810cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8110: 0x8c43a6b8  lw          $v1, -0x5948($v0)
    ctx->pc = 0x1c8110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944440)));
    // 0x1c8114: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8118: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c811c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c811cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c8120: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c8120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8124: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c8124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c8128: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c8128u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c812c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C812Cu;
    {
        const bool branch_taken_0x1c812c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C812Cu;
            // 0x1c8130: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c812c) {
            ctx->pc = 0x1C813Cu;
            goto label_1c813c;
        }
    }
    ctx->pc = 0x1C8134u;
    // 0x1c8134: 0xc071fc4  jal         func_1C7F10
    ctx->pc = 0x1C8134u;
    SET_GPR_U32(ctx, 31, 0x1C813Cu);
    ctx->pc = 0x1C7F10u;
    if (runtime->hasFunction(0x1C7F10u)) {
        auto targetFn = runtime->lookupFunction(0x1C7F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C813Cu; }
        if (ctx->pc != 0x1C813Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7F10_0x1c7f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C813Cu; }
        if (ctx->pc != 0x1C813Cu) { return; }
    }
    ctx->pc = 0x1C813Cu;
label_1c813c:
    // 0x1c813c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c813cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c8140: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c8140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8144: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1c8144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8148: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1c8148u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c814c: 0x2484c080  addiu       $a0, $a0, -0x3F80
    ctx->pc = 0x1c814cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951040));
    // 0x1c8150: 0xc071fd4  jal         func_1C7F50
    ctx->pc = 0x1C8150u;
    SET_GPR_U32(ctx, 31, 0x1C8158u);
    ctx->pc = 0x1C8154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8150u;
            // 0x1c8154: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7F50u;
    goto label_1c7f50;
    ctx->pc = 0x1C8158u;
label_1c8158:
    // 0x1c8158: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c8158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c815c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c815cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8160: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c8160u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8164: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c8164u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8168: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c8168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c816c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C816Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C816Cu;
            // 0x1c8170: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8174u;
    // 0x1c8174: 0x0  nop
    ctx->pc = 0x1c8174u;
    // NOP
    // 0x1c8178: 0x94a70000  lhu         $a3, 0x0($a1)
    ctx->pc = 0x1c8178u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c817c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c817cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8180: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x1c8180u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c8184: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x1c8184u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c8188: 0xa72818  mult        $a1, $a1, $a3
    ctx->pc = 0x1c8188u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1c818c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1c818cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1c8190: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8190u;
            // 0x1c8194: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8198u;
}
