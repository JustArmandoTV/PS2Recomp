#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00196FD8
// Address: 0x196fd8 - 0x197200
void sub_00196FD8_0x196fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196FD8_0x196fd8");
#endif

    switch (ctx->pc) {
        case 0x19701cu: goto label_19701c;
        case 0x197050u: goto label_197050;
        case 0x1970b0u: goto label_1970b0;
        case 0x197110u: goto label_197110;
        case 0x1971c4u: goto label_1971c4;
        case 0x1971e0u: goto label_1971e0;
        default: break;
    }

    ctx->pc = 0x196fd8u;

label_196fd8:
    // 0x196fd8: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x196fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x196fdc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x196fdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x196fe0: 0x8c436ae0  lw          $v1, 0x6AE0($v0)
    ctx->pc = 0x196fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27360)));
    // 0x196fe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x196fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x196fe8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x196fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196fec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x196fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x196ff0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x196ff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ff4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x196ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x196ff8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x196ff8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ffc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x196ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x197000: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x197000u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197004: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x197004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x197008: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x197008u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19700c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19700Cu;
    {
        const bool branch_taken_0x19700c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x197010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19700Cu;
            // 0x197010: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19700c) {
            ctx->pc = 0x19701Cu;
            goto label_19701c;
        }
    }
    ctx->pc = 0x197014u;
    // 0x197014: 0xc065be6  jal         func_196F98
    ctx->pc = 0x197014u;
    SET_GPR_U32(ctx, 31, 0x19701Cu);
    ctx->pc = 0x196F98u;
    if (runtime->hasFunction(0x196F98u)) {
        auto targetFn = runtime->lookupFunction(0x196F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19701Cu; }
        if (ctx->pc != 0x19701Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196F98_0x196f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19701Cu; }
        if (ctx->pc != 0x19701Cu) { return; }
    }
    ctx->pc = 0x19701Cu;
label_19701c:
    // 0x19701c: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x19701cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x197020: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x197020u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x197024: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x197024u;
    {
        const bool branch_taken_0x197024 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x197028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197024u;
            // 0x197028: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197024) {
            ctx->pc = 0x197034u;
            goto label_197034;
        }
    }
    ctx->pc = 0x19702Cu;
    // 0x19702c: 0x1a00004f  blez        $s0, . + 4 + (0x4F << 2)
    ctx->pc = 0x19702Cu;
    {
        const bool branch_taken_0x19702c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x197030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19702Cu;
            // 0x197030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19702c) {
            ctx->pc = 0x19716Cu;
            goto label_19716c;
        }
    }
    ctx->pc = 0x197034u;
label_197034:
    // 0x197034: 0x3c0b0063  lui         $t3, 0x63
    ctx->pc = 0x197034u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)99 << 16));
    // 0x197038: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x197038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19703c: 0x25622a38  addiu       $v0, $t3, 0x2A38
    ctx->pc = 0x19703cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 10808));
    // 0x197040: 0x1a000018  blez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x197040u;
    {
        const bool branch_taken_0x197040 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x197044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197040u;
            // 0x197044: 0x844a0200  lh          $t2, 0x200($v0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197040) {
            ctx->pc = 0x1970A4u;
            goto label_1970a4;
        }
    }
    ctx->pc = 0x197048u;
    // 0x197048: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x197048u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19704c: 0x0  nop
    ctx->pc = 0x19704cu;
    // NOP
label_197050:
    // 0x197050: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x197050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x197054: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x197054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x197058: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x197058u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19705c: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x19705cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x197060: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x197060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x197064: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x197064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x197068: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x197068u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x19706c: 0x1431818  mult        $v1, $t2, $v1
    ctx->pc = 0x19706cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x197070: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x197070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x197074: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x197074u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x197078: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x197078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19707c: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x19707cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x197080: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x197080u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x197084: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x197084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x197088: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x197088u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19708c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x19708cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x197090: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x197090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x197094: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x197094u;
    {
        const bool branch_taken_0x197094 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x197098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197094u;
            // 0x197098: 0x846a0000  lh          $t2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197094) {
            ctx->pc = 0x197050u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_197050;
        }
    }
    ctx->pc = 0x19709Cu;
    // 0x19709c: 0x25622a38  addiu       $v0, $t3, 0x2A38
    ctx->pc = 0x19709cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 10808));
    // 0x1970a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1970a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1970a4:
    // 0x1970a4: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1970A4u;
    {
        const bool branch_taken_0x1970a4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1970A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1970A4u;
            // 0x1970a8: 0x84480400  lh          $t0, 0x400($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1970a4) {
            ctx->pc = 0x1970FCu;
            goto label_1970fc;
        }
    }
    ctx->pc = 0x1970ACu;
    // 0x1970ac: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1970acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1970b0:
    // 0x1970b0: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x1970b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1970b4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1970b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1970b8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1970b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1970bc: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x1970bcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1970c0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1970c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1970c4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1970c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1970c8: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x1970c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x1970cc: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x1970ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1970d0: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x1970d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x1970d4: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x1970d4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1970d8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1970d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1970dc: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x1970dcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1970e0: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x1970e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x1970e4: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x1970e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x1970e8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1970e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1970ec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1970ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1970f0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1970f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1970f4: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1970F4u;
    {
        const bool branch_taken_0x1970f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1970F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1970F4u;
            // 0x1970f8: 0x84680000  lh          $t0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1970f4) {
            ctx->pc = 0x1970B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1970b0;
        }
    }
    ctx->pc = 0x1970FCu;
label_1970fc:
    // 0x1970fc: 0x25622a38  addiu       $v0, $t3, 0x2A38
    ctx->pc = 0x1970fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 10808));
    // 0x197100: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x197100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197104: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x197104u;
    {
        const bool branch_taken_0x197104 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x197108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197104u;
            // 0x197108: 0x84440600  lh          $a0, 0x600($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197104) {
            ctx->pc = 0x19715Cu;
            goto label_19715c;
        }
    }
    ctx->pc = 0x19710Cu;
    // 0x19710c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x19710cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197110:
    // 0x197110: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x197110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x197114: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x197114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x197118: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x197118u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19711c: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x19711cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x197120: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x197120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x197124: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x197124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x197128: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x197128u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x19712c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x19712cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x197130: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x197130u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x197134: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x197134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x197138: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x197138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19713c: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x19713cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x197140: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x197140u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x197144: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x197144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x197148: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x197148u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19714c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x19714cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x197150: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x197150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x197154: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x197154u;
    {
        const bool branch_taken_0x197154 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x197158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197154u;
            // 0x197158: 0x84640000  lh          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197154) {
            ctx->pc = 0x197110u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_197110;
        }
    }
    ctx->pc = 0x19715Cu;
label_19715c:
    // 0x19715c: 0xa64a0000  sh          $t2, 0x0($s2)
    ctx->pc = 0x19715cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x197160: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x197160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197164: 0xa6680000  sh          $t0, 0x0($s3)
    ctx->pc = 0x197164u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x197168: 0xa6840000  sh          $a0, 0x0($s4)
    ctx->pc = 0x197168u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 4));
label_19716c:
    // 0x19716c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19716cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197170: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x197170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x197174: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x197174u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197178: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x197178u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19717c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x19717cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197180: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x197180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x197184: 0x3e00008  jr          $ra
    ctx->pc = 0x197184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197184u;
            // 0x197188: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19718Cu;
    // 0x19718c: 0x0  nop
    ctx->pc = 0x19718cu;
    // NOP
    // 0x197190: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x197190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x197194: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x197194u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x197198: 0x8c436ae0  lw          $v1, 0x6AE0($v0)
    ctx->pc = 0x197198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27360)));
    // 0x19719c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19719cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1971a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1971a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1971a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1971a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1971a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1971a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1971ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1971acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1971b0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1971b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1971b4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1971B4u;
    {
        const bool branch_taken_0x1971b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1971B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1971B4u;
            // 0x1971b8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1971b4) {
            ctx->pc = 0x1971C4u;
            goto label_1971c4;
        }
    }
    ctx->pc = 0x1971BCu;
    // 0x1971bc: 0xc065be6  jal         func_196F98
    ctx->pc = 0x1971BCu;
    SET_GPR_U32(ctx, 31, 0x1971C4u);
    ctx->pc = 0x196F98u;
    if (runtime->hasFunction(0x196F98u)) {
        auto targetFn = runtime->lookupFunction(0x196F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1971C4u; }
        if (ctx->pc != 0x1971C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196F98_0x196f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1971C4u; }
        if (ctx->pc != 0x1971C4u) { return; }
    }
    ctx->pc = 0x1971C4u;
label_1971c4:
    // 0x1971c4: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1971c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1971c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1971c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1971cc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1971ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1971d0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1971d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1971d4: 0x24848450  addiu       $a0, $a0, -0x7BB0
    ctx->pc = 0x1971d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935632));
    // 0x1971d8: 0xc065bf6  jal         func_196FD8
    ctx->pc = 0x1971D8u;
    SET_GPR_U32(ctx, 31, 0x1971E0u);
    ctx->pc = 0x1971DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1971D8u;
            // 0x1971dc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196FD8u;
    goto label_196fd8;
    ctx->pc = 0x1971E0u;
label_1971e0:
    // 0x1971e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1971e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1971e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1971e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1971e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1971e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1971ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1971ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1971f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1971f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1971f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1971F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1971F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1971F4u;
            // 0x1971f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1971FCu;
    // 0x1971fc: 0x0  nop
    ctx->pc = 0x1971fcu;
    // NOP
}
