#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00317FA0
// Address: 0x317fa0 - 0x318190
void sub_00317FA0_0x317fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317FA0_0x317fa0");
#endif

    switch (ctx->pc) {
        case 0x318010u: goto label_318010;
        case 0x318030u: goto label_318030;
        case 0x31805cu: goto label_31805c;
        case 0x3180a0u: goto label_3180a0;
        case 0x3180c4u: goto label_3180c4;
        case 0x3180d4u: goto label_3180d4;
        case 0x3180e4u: goto label_3180e4;
        case 0x3180f0u: goto label_3180f0;
        case 0x318108u: goto label_318108;
        case 0x31812cu: goto label_31812c;
        case 0x31813cu: goto label_31813c;
        case 0x31814cu: goto label_31814c;
        case 0x318158u: goto label_318158;
        default: break;
    }

    ctx->pc = 0x317fa0u;

    // 0x317fa0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x317fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x317fa4: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x317fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x317fa8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x317fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x317fac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x317facu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x317fb0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x317fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x317fb4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x317fb4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x317fb8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x317fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x317fbc: 0x249e0020  addiu       $fp, $a0, 0x20
    ctx->pc = 0x317fbcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x317fc0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x317fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x317fc4: 0x24970050  addiu       $s7, $a0, 0x50
    ctx->pc = 0x317fc4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x317fc8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x317fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x317fcc: 0x24960030  addiu       $s6, $a0, 0x30
    ctx->pc = 0x317fccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x317fd0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x317fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x317fd4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x317fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x317fd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x317fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x317fdc: 0x24930040  addiu       $s3, $a0, 0x40
    ctx->pc = 0x317fdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x317fe0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x317fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x317fe4: 0x24920060  addiu       $s2, $a0, 0x60
    ctx->pc = 0x317fe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x317fe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x317fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x317fec: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x317fecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x317ff0: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x317ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x317ff4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x317ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x317ff8: 0x8e35000c  lw          $s5, 0xC($s1)
    ctx->pc = 0x317ff8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x317ffc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x317ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x318000: 0x8e300020  lw          $s0, 0x20($s1)
    ctx->pc = 0x318000u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x318004: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x318004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x318008: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x318008u;
    SET_GPR_U32(ctx, 31, 0x318010u);
    ctx->pc = 0x31800Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318008u;
            // 0x31800c: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318010u; }
        if (ctx->pc != 0x318010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318010u; }
        if (ctx->pc != 0x318010u) { return; }
    }
    ctx->pc = 0x318010u;
label_318010:
    // 0x318010: 0x92220024  lbu         $v0, 0x24($s1)
    ctx->pc = 0x318010u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x318014: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x318014u;
    {
        const bool branch_taken_0x318014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318014) {
            ctx->pc = 0x318088u;
            goto label_318088;
        }
    }
    ctx->pc = 0x31801Cu;
    // 0x31801c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x31801cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x318020: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x318020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x318024: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x318024u;
    {
        const bool branch_taken_0x318024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x318024) {
            ctx->pc = 0x318058u;
            goto label_318058;
        }
    }
    ctx->pc = 0x31802Cu;
    // 0x31802c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x31802cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318030:
    // 0x318030: 0x96a20006  lhu         $v0, 0x6($s5)
    ctx->pc = 0x318030u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x318034: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x318034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x318038: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x318038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31803c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x31803cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x318040: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x318040u;
    {
        const bool branch_taken_0x318040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318040) {
            ctx->pc = 0x318058u;
            goto label_318058;
        }
    }
    ctx->pc = 0x318048u;
    // 0x318048: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x318048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31804c: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x31804cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x318050: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x318050u;
    {
        const bool branch_taken_0x318050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318050u;
            // 0x318054: 0x26b50040  addiu       $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318050) {
            ctx->pc = 0x318030u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_318030;
        }
    }
    ctx->pc = 0x318058u;
label_318058:
    // 0x318058: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x318058u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31805c:
    // 0x31805c: 0x96820006  lhu         $v0, 0x6($s4)
    ctx->pc = 0x31805cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x318060: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x318060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x318064: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x318064u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x318068: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x318068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x31806c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31806Cu;
    {
        const bool branch_taken_0x31806c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31806c) {
            ctx->pc = 0x318088u;
            goto label_318088;
        }
    }
    ctx->pc = 0x318074u;
    // 0x318074: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x318074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x318078: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x318078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x31807c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x31807Cu;
    {
        const bool branch_taken_0x31807c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31807Cu;
            // 0x318080: 0x26940040  addiu       $s4, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31807c) {
            ctx->pc = 0x31805Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31805c;
        }
    }
    ctx->pc = 0x318084u;
    // 0x318084: 0x0  nop
    ctx->pc = 0x318084u;
    // NOP
label_318088:
    // 0x318088: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x318088u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x31808c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31808cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318090: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x318090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318094: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x318094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x318098: 0xc04cc04  jal         func_133010
    ctx->pc = 0x318098u;
    SET_GPR_U32(ctx, 31, 0x3180A0u);
    ctx->pc = 0x31809Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318098u;
            // 0x31809c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3180A0u; }
        if (ctx->pc != 0x3180A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3180A0u; }
        if (ctx->pc != 0x3180A0u) { return; }
    }
    ctx->pc = 0x3180A0u;
label_3180a0:
    // 0x3180a0: 0x96a30002  lhu         $v1, 0x2($s5)
    ctx->pc = 0x3180a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x3180a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3180a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3180a8: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x3180a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3180ac: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3180acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3180b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3180b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3180b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3180b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3180b8: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x3180b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3180bc: 0xc04cc90  jal         func_133240
    ctx->pc = 0x3180BCu;
    SET_GPR_U32(ctx, 31, 0x3180C4u);
    ctx->pc = 0x3180C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3180BCu;
            // 0x3180c0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3180C4u; }
        if (ctx->pc != 0x3180C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3180C4u; }
        if (ctx->pc != 0x3180C4u) { return; }
    }
    ctx->pc = 0x3180C4u;
label_3180c4:
    // 0x3180c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3180c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3180c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3180c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3180cc: 0xc04cc44  jal         func_133110
    ctx->pc = 0x3180CCu;
    SET_GPR_U32(ctx, 31, 0x3180D4u);
    ctx->pc = 0x3180D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3180CCu;
            // 0x3180d0: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3180D4u; }
        if (ctx->pc != 0x3180D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3180D4u; }
        if (ctx->pc != 0x3180D4u) { return; }
    }
    ctx->pc = 0x3180D4u;
label_3180d4:
    // 0x3180d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3180d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3180d8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3180d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3180dc: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x3180DCu;
    SET_GPR_U32(ctx, 31, 0x3180E4u);
    ctx->pc = 0x3180E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3180DCu;
            // 0x3180e0: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3180E4u; }
        if (ctx->pc != 0x3180E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3180E4u; }
        if (ctx->pc != 0x3180E4u) { return; }
    }
    ctx->pc = 0x3180E4u;
label_3180e4:
    // 0x3180e4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3180e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3180e8: 0xc04cc44  jal         func_133110
    ctx->pc = 0x3180E8u;
    SET_GPR_U32(ctx, 31, 0x3180F0u);
    ctx->pc = 0x3180ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3180E8u;
            // 0x3180ec: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3180F0u; }
        if (ctx->pc != 0x3180F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3180F0u; }
        if (ctx->pc != 0x3180F0u) { return; }
    }
    ctx->pc = 0x3180F0u;
label_3180f0:
    // 0x3180f0: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x3180f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3180f4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3180f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3180f8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x3180f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3180fc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3180fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x318100: 0xc04cc04  jal         func_133010
    ctx->pc = 0x318100u;
    SET_GPR_U32(ctx, 31, 0x318108u);
    ctx->pc = 0x318104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318100u;
            // 0x318104: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318108u; }
        if (ctx->pc != 0x318108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318108u; }
        if (ctx->pc != 0x318108u) { return; }
    }
    ctx->pc = 0x318108u;
label_318108:
    // 0x318108: 0x96830002  lhu         $v1, 0x2($s4)
    ctx->pc = 0x318108u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x31810c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x31810cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318110: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x318110u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x318114: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x318114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318118: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x318118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31811c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31811cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x318120: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x318120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x318124: 0xc04cc90  jal         func_133240
    ctx->pc = 0x318124u;
    SET_GPR_U32(ctx, 31, 0x31812Cu);
    ctx->pc = 0x318128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318124u;
            // 0x318128: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31812Cu; }
        if (ctx->pc != 0x31812Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31812Cu; }
        if (ctx->pc != 0x31812Cu) { return; }
    }
    ctx->pc = 0x31812Cu;
label_31812c:
    // 0x31812c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x31812cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318130: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x318130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318134: 0xc04cc44  jal         func_133110
    ctx->pc = 0x318134u;
    SET_GPR_U32(ctx, 31, 0x31813Cu);
    ctx->pc = 0x318138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318134u;
            // 0x318138: 0xaec00004  sw          $zero, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31813Cu; }
        if (ctx->pc != 0x31813Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31813Cu; }
        if (ctx->pc != 0x31813Cu) { return; }
    }
    ctx->pc = 0x31813Cu;
label_31813c:
    // 0x31813c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x31813cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318140: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x318140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318144: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x318144u;
    SET_GPR_U32(ctx, 31, 0x31814Cu);
    ctx->pc = 0x318148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318144u;
            // 0x318148: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31814Cu; }
        if (ctx->pc != 0x31814Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31814Cu; }
        if (ctx->pc != 0x31814Cu) { return; }
    }
    ctx->pc = 0x31814Cu;
label_31814c:
    // 0x31814c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x31814cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318150: 0xc04cc44  jal         func_133110
    ctx->pc = 0x318150u;
    SET_GPR_U32(ctx, 31, 0x318158u);
    ctx->pc = 0x318154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318150u;
            // 0x318154: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318158u; }
        if (ctx->pc != 0x318158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318158u; }
        if (ctx->pc != 0x318158u) { return; }
    }
    ctx->pc = 0x318158u;
label_318158:
    // 0x318158: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x318158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31815c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x31815cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x318160: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x318160u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x318164: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x318164u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x318168: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x318168u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31816c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31816cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x318170: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x318170u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x318174: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x318174u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x318178: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x318178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31817c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31817cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x318180: 0x3e00008  jr          $ra
    ctx->pc = 0x318180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318180u;
            // 0x318184: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x318188u;
    // 0x318188: 0x0  nop
    ctx->pc = 0x318188u;
    // NOP
    // 0x31818c: 0x0  nop
    ctx->pc = 0x31818cu;
    // NOP
}
