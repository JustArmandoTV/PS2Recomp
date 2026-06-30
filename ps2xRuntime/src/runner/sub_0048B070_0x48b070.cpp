#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048B070
// Address: 0x48b070 - 0x48b170
void sub_0048B070_0x48b070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B070_0x48b070");
#endif

    switch (ctx->pc) {
        case 0x48b104u: goto label_48b104;
        case 0x48b114u: goto label_48b114;
        case 0x48b120u: goto label_48b120;
        case 0x48b12cu: goto label_48b12c;
        case 0x48b13cu: goto label_48b13c;
        case 0x48b14cu: goto label_48b14c;
        default: break;
    }

    ctx->pc = 0x48b070u;

    // 0x48b070: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x48b070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x48b074: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x48b074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x48b078: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48b078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x48b07c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48b07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x48b080: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x48b080u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b084: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48b084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48b088: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x48b088u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b08c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48b08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48b090: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x48b090u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x48b094: 0x8e020d6c  lw          $v0, 0xD6C($s0)
    ctx->pc = 0x48b094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
    // 0x48b098: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x48b098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48b09c: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x48b09cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x48b0a0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48b0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x48b0a4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48b0a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x48b0a8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48B0A8u;
    {
        const bool branch_taken_0x48b0a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x48B0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B0A8u;
            // 0x48b0ac: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b0a8) {
            ctx->pc = 0x48B0BCu;
            goto label_48b0bc;
        }
    }
    ctx->pc = 0x48B0B0u;
    // 0x48b0b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x48b0b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x48b0b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x48B0B4u;
    {
        const bool branch_taken_0x48b0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B0B4u;
            // 0x48b0b8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b0b4) {
            ctx->pc = 0x48B0D8u;
            goto label_48b0d8;
        }
    }
    ctx->pc = 0x48B0BCu;
label_48b0bc:
    // 0x48b0bc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x48b0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x48b0c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x48b0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x48b0c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x48b0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x48b0c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x48b0c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x48b0cc: 0x0  nop
    ctx->pc = 0x48b0ccu;
    // NOP
    // 0x48b0d0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x48b0d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x48b0d4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x48b0d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_48b0d8:
    // 0x48b0d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x48b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x48b0dc: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x48b0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x48b0e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x48b0e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x48b0e4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x48b0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x48b0e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48b0e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x48b0ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x48b0ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x48b0f0: 0x0  nop
    ctx->pc = 0x48b0f0u;
    // NOP
    // 0x48b0f4: 0x460d0018  adda.s      $f0, $f13
    ctx->pc = 0x48b0f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x48b0f8: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x48b0f8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x48b0fc: 0xc04f3f4  jal         func_13CFD0
    ctx->pc = 0x48B0FCu;
    SET_GPR_U32(ctx, 31, 0x48B104u);
    ctx->pc = 0x48B100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48B0FCu;
            // 0x48b100: 0x46020b1c  madd.s      $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFD0u;
    if (runtime->hasFunction(0x13CFD0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B104u; }
        if (ctx->pc != 0x48B104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFD0_0x13cfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B104u; }
        if (ctx->pc != 0x48B104u) { return; }
    }
    ctx->pc = 0x48B104u;
label_48b104:
    // 0x48b104: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x48b104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b108: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x48b108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x48b10c: 0xc04cca0  jal         func_133280
    ctx->pc = 0x48B10Cu;
    SET_GPR_U32(ctx, 31, 0x48B114u);
    ctx->pc = 0x48B110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48B10Cu;
            // 0x48b110: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B114u; }
        if (ctx->pc != 0x48B114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B114u; }
        if (ctx->pc != 0x48B114u) { return; }
    }
    ctx->pc = 0x48B114u;
label_48b114:
    // 0x48b114: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x48b114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b118: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x48B118u;
    SET_GPR_U32(ctx, 31, 0x48B120u);
    ctx->pc = 0x48B11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48B118u;
            // 0x48b11c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B120u; }
        if (ctx->pc != 0x48B120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B120u; }
        if (ctx->pc != 0x48B120u) { return; }
    }
    ctx->pc = 0x48B120u;
label_48b120:
    // 0x48b120: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x48b120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b124: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x48B124u;
    SET_GPR_U32(ctx, 31, 0x48B12Cu);
    ctx->pc = 0x48B128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48B124u;
            // 0x48b128: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B12Cu; }
        if (ctx->pc != 0x48B12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B12Cu; }
        if (ctx->pc != 0x48B12Cu) { return; }
    }
    ctx->pc = 0x48B12Cu;
label_48b12c:
    // 0x48b12c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x48b12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x48b130: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x48b130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x48b134: 0xc04cca0  jal         func_133280
    ctx->pc = 0x48B134u;
    SET_GPR_U32(ctx, 31, 0x48B13Cu);
    ctx->pc = 0x48B138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48B134u;
            // 0x48b138: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B13Cu; }
        if (ctx->pc != 0x48B13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B13Cu; }
        if (ctx->pc != 0x48B13Cu) { return; }
    }
    ctx->pc = 0x48B13Cu;
label_48b13c:
    // 0x48b13c: 0x26040340  addiu       $a0, $s0, 0x340
    ctx->pc = 0x48b13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
    // 0x48b140: 0x260602c0  addiu       $a2, $s0, 0x2C0
    ctx->pc = 0x48b140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x48b144: 0xc04cc90  jal         func_133240
    ctx->pc = 0x48B144u;
    SET_GPR_U32(ctx, 31, 0x48B14Cu);
    ctx->pc = 0x48B148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48B144u;
            // 0x48b148: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B14Cu; }
        if (ctx->pc != 0x48B14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B14Cu; }
        if (ctx->pc != 0x48B14Cu) { return; }
    }
    ctx->pc = 0x48B14Cu;
label_48b14c:
    // 0x48b14c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x48b14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48b150: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48b150u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48b154: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48b154u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48b158: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48b158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48b15c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48b15cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48b160: 0x3e00008  jr          $ra
    ctx->pc = 0x48B160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48B164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B160u;
            // 0x48b164: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48B168u;
    // 0x48b168: 0x0  nop
    ctx->pc = 0x48b168u;
    // NOP
    // 0x48b16c: 0x0  nop
    ctx->pc = 0x48b16cu;
    // NOP
}
