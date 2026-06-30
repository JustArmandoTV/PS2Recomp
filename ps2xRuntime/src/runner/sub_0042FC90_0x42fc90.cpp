#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042FC90
// Address: 0x42fc90 - 0x42fe40
void sub_0042FC90_0x42fc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042FC90_0x42fc90");
#endif

    switch (ctx->pc) {
        case 0x42fcd4u: goto label_42fcd4;
        case 0x42fd28u: goto label_42fd28;
        case 0x42fd3cu: goto label_42fd3c;
        case 0x42fd50u: goto label_42fd50;
        case 0x42fd64u: goto label_42fd64;
        case 0x42fd98u: goto label_42fd98;
        case 0x42fdb0u: goto label_42fdb0;
        case 0x42fdd4u: goto label_42fdd4;
        case 0x42fde0u: goto label_42fde0;
        case 0x42fdf0u: goto label_42fdf0;
        case 0x42fdfcu: goto label_42fdfc;
        case 0x42fe08u: goto label_42fe08;
        default: break;
    }

    ctx->pc = 0x42fc90u;

    // 0x42fc90: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x42fc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x42fc94: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x42fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x42fc98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x42fc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x42fc9c: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x42fc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x42fca0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x42fca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x42fca4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42fca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x42fca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42fca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x42fcac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x42fcacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42fcb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42fcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x42fcb4: 0xac8200f0  sw          $v0, 0xF0($a0)
    ctx->pc = 0x42fcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 2));
    // 0x42fcb8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42fcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x42fcbc: 0xac8300d4  sw          $v1, 0xD4($a0)
    ctx->pc = 0x42fcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 3));
    // 0x42fcc0: 0x8c423da0  lw          $v0, 0x3DA0($v0)
    ctx->pc = 0x42fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
    // 0x42fcc4: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x42fcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x42fcc8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x42fcc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42fccc: 0xc0f95a8  jal         func_3E56A0
    ctx->pc = 0x42FCCCu;
    SET_GPR_U32(ctx, 31, 0x42FCD4u);
    ctx->pc = 0x42FCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FCCCu;
            // 0x42fcd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E56A0u;
    if (runtime->hasFunction(0x3E56A0u)) {
        auto targetFn = runtime->lookupFunction(0x3E56A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FCD4u; }
        if (ctx->pc != 0x42FCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E56A0_0x3e56a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FCD4u; }
        if (ctx->pc != 0x42FCD4u) { return; }
    }
    ctx->pc = 0x42FCD4u;
label_42fcd4:
    // 0x42fcd4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x42fcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x42fcd8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x42fcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x42fcdc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x42fce0: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x42fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
    // 0x42fce4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x42fce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x42fce8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x42fce8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x42fcec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x42fcecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x42fcf0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x42fcf4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x42fcf4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x42fcf8: 0x8c430c78  lw          $v1, 0xC78($v0)
    ctx->pc = 0x42fcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
    // 0x42fcfc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x42fcfcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x42fd00: 0x8c730008  lw          $s3, 0x8($v1)
    ctx->pc = 0x42fd00u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x42fd04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x42fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x42fd08: 0xa7a200a4  sh          $v0, 0xA4($sp)
    ctx->pc = 0x42fd08u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 164), (uint16_t)GPR_U32(ctx, 2));
    // 0x42fd0c: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x42fd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x42fd10: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x42fd10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x42fd14: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x42fd14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x42fd18: 0xa7a000a0  sh          $zero, 0xA0($sp)
    ctx->pc = 0x42fd18u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 160), (uint16_t)GPR_U32(ctx, 0));
    // 0x42fd1c: 0xa7a000a2  sh          $zero, 0xA2($sp)
    ctx->pc = 0x42fd1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 162), (uint16_t)GPR_U32(ctx, 0));
    // 0x42fd20: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x42FD20u;
    SET_GPR_U32(ctx, 31, 0x42FD28u);
    ctx->pc = 0x42FD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FD20u;
            // 0x42fd24: 0xa7a000a6  sh          $zero, 0xA6($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 166), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FD28u; }
        if (ctx->pc != 0x42FD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FD28u; }
        if (ctx->pc != 0x42FD28u) { return; }
    }
    ctx->pc = 0x42FD28u;
label_42fd28:
    // 0x42fd28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x42fd28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x42fd2c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x42fd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x42fd30: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x42fd30u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x42fd34: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x42FD34u;
    SET_GPR_U32(ctx, 31, 0x42FD3Cu);
    ctx->pc = 0x42FD38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FD34u;
            // 0x42fd38: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FD3Cu; }
        if (ctx->pc != 0x42FD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FD3Cu; }
        if (ctx->pc != 0x42FD3Cu) { return; }
    }
    ctx->pc = 0x42FD3Cu;
label_42fd3c:
    // 0x42fd3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x42fd3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x42fd40: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x42fd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x42fd44: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x42fd44u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x42fd48: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x42FD48u;
    SET_GPR_U32(ctx, 31, 0x42FD50u);
    ctx->pc = 0x42FD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FD48u;
            // 0x42fd4c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FD50u; }
        if (ctx->pc != 0x42FD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FD50u; }
        if (ctx->pc != 0x42FD50u) { return; }
    }
    ctx->pc = 0x42FD50u;
label_42fd50:
    // 0x42fd50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x42fd50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x42fd54: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x42fd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x42fd58: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x42fd58u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x42fd5c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x42FD5Cu;
    SET_GPR_U32(ctx, 31, 0x42FD64u);
    ctx->pc = 0x42FD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FD5Cu;
            // 0x42fd60: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FD64u; }
        if (ctx->pc != 0x42FD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FD64u; }
        if (ctx->pc != 0x42FD64u) { return; }
    }
    ctx->pc = 0x42FD64u;
label_42fd64:
    // 0x42fd64: 0x922302eb  lbu         $v1, 0x2EB($s1)
    ctx->pc = 0x42fd64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 747)));
    // 0x42fd68: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x42fd68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42fd6c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x42fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x42fd70: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x42fd70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42fd74: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x42fd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x42fd78: 0x260602c0  addiu       $a2, $s0, 0x2C0
    ctx->pc = 0x42fd78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x42fd7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x42fd7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x42fd80: 0xa3a300cf  sb          $v1, 0xCF($sp)
    ctx->pc = 0x42fd80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 207), (uint8_t)GPR_U32(ctx, 3));
    // 0x42fd84: 0x260703d0  addiu       $a3, $s0, 0x3D0
    ctx->pc = 0x42fd84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 976));
    // 0x42fd88: 0x27a900cf  addiu       $t1, $sp, 0xCF
    ctx->pc = 0x42fd88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 207));
    // 0x42fd8c: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x42fd8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42fd90: 0xc0b8704  jal         func_2E1C10
    ctx->pc = 0x42FD90u;
    SET_GPR_U32(ctx, 31, 0x42FD98u);
    ctx->pc = 0x42FD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FD90u;
            // 0x42fd94: 0x100582d  daddu       $t3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1C10u;
    if (runtime->hasFunction(0x2E1C10u)) {
        auto targetFn = runtime->lookupFunction(0x2E1C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FD98u; }
        if (ctx->pc != 0x42FD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E1C10_0x2e1c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FD98u; }
        if (ctx->pc != 0x42FD98u) { return; }
    }
    ctx->pc = 0x42FD98u;
label_42fd98:
    // 0x42fd98: 0x97a200a0  lhu         $v0, 0xA0($sp)
    ctx->pc = 0x42fd98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x42fd9c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x42FD9Cu;
    {
        const bool branch_taken_0x42fd9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42fd9c) {
            ctx->pc = 0x42FDA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42FD9Cu;
            // 0x42fda0: 0x8e4300d8  lw          $v1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42FDB8u;
            goto label_42fdb8;
        }
    }
    ctx->pc = 0x42FDA4u;
    // 0x42fda4: 0x260502c0  addiu       $a1, $s0, 0x2C0
    ctx->pc = 0x42fda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x42fda8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x42FDA8u;
    SET_GPR_U32(ctx, 31, 0x42FDB0u);
    ctx->pc = 0x42FDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FDA8u;
            // 0x42fdac: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FDB0u; }
        if (ctx->pc != 0x42FDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FDB0u; }
        if (ctx->pc != 0x42FDB0u) { return; }
    }
    ctx->pc = 0x42FDB0u;
label_42fdb0:
    // 0x42fdb0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x42FDB0u;
    {
        const bool branch_taken_0x42fdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42FDB0u;
            // 0x42fdb4: 0x264400e0  addiu       $a0, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fdb0) {
            ctx->pc = 0x42FDE4u;
            goto label_42fde4;
        }
    }
    ctx->pc = 0x42FDB8u;
label_42fdb8:
    // 0x42fdb8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x42fdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x42fdbc: 0x2442cbd8  addiu       $v0, $v0, -0x3428
    ctx->pc = 0x42fdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953944));
    // 0x42fdc0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x42fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x42fdc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x42fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x42fdc8: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x42fdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x42fdcc: 0xc0b8160  jal         func_2E0580
    ctx->pc = 0x42FDCCu;
    SET_GPR_U32(ctx, 31, 0x42FDD4u);
    ctx->pc = 0x42FDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FDCCu;
            // 0x42fdd0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FDD4u; }
        if (ctx->pc != 0x42FDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FDD4u; }
        if (ctx->pc != 0x42FDD4u) { return; }
    }
    ctx->pc = 0x42FDD4u;
label_42fdd4:
    // 0x42fdd4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x42fdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x42fdd8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x42FDD8u;
    SET_GPR_U32(ctx, 31, 0x42FDE0u);
    ctx->pc = 0x42FDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FDD8u;
            // 0x42fddc: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FDE0u; }
        if (ctx->pc != 0x42FDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FDE0u; }
        if (ctx->pc != 0x42FDE0u) { return; }
    }
    ctx->pc = 0x42FDE0u;
label_42fde0:
    // 0x42fde0: 0x264400e0  addiu       $a0, $s2, 0xE0
    ctx->pc = 0x42fde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_42fde4:
    // 0x42fde4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x42fde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x42fde8: 0xc04cc90  jal         func_133240
    ctx->pc = 0x42FDE8u;
    SET_GPR_U32(ctx, 31, 0x42FDF0u);
    ctx->pc = 0x42FDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FDE8u;
            // 0x42fdec: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FDF0u; }
        if (ctx->pc != 0x42FDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FDF0u; }
        if (ctx->pc != 0x42FDF0u) { return; }
    }
    ctx->pc = 0x42FDF0u;
label_42fdf0:
    // 0x42fdf0: 0x264400e0  addiu       $a0, $s2, 0xE0
    ctx->pc = 0x42fdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x42fdf4: 0xc04cc44  jal         func_133110
    ctx->pc = 0x42FDF4u;
    SET_GPR_U32(ctx, 31, 0x42FDFCu);
    ctx->pc = 0x42FDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FDF4u;
            // 0x42fdf8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FDFCu; }
        if (ctx->pc != 0x42FDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FDFCu; }
        if (ctx->pc != 0x42FDFCu) { return; }
    }
    ctx->pc = 0x42FDFCu;
label_42fdfc:
    // 0x42fdfc: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x42fdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x42fe00: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x42FE00u;
    SET_GPR_U32(ctx, 31, 0x42FE08u);
    ctx->pc = 0x42FE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FE00u;
            // 0x42fe04: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FE08u; }
        if (ctx->pc != 0x42FE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FE08u; }
        if (ctx->pc != 0x42FE08u) { return; }
    }
    ctx->pc = 0x42FE08u;
label_42fe08:
    // 0x42fe08: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x42fe08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x42fe0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x42fe0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x42fe10: 0x0  nop
    ctx->pc = 0x42fe10u;
    // NOP
    // 0x42fe14: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x42fe14u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x42fe18: 0xe64000f4  swc1        $f0, 0xF4($s2)
    ctx->pc = 0x42fe18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 244), bits); }
    // 0x42fe1c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x42fe1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x42fe20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x42fe20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x42fe24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42fe24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42fe28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42fe28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42fe2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42fe2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42fe30: 0x3e00008  jr          $ra
    ctx->pc = 0x42FE30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42FE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42FE30u;
            // 0x42fe34: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42FE38u;
    // 0x42fe38: 0x0  nop
    ctx->pc = 0x42fe38u;
    // NOP
    // 0x42fe3c: 0x0  nop
    ctx->pc = 0x42fe3cu;
    // NOP
}
