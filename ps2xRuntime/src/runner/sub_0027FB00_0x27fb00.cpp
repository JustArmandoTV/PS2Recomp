#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027FB00
// Address: 0x27fb00 - 0x27fc90
void sub_0027FB00_0x27fb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027FB00_0x27fb00");
#endif

    switch (ctx->pc) {
        case 0x27fb58u: goto label_27fb58;
        case 0x27fb98u: goto label_27fb98;
        default: break;
    }

    ctx->pc = 0x27fb00u;

    // 0x27fb00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x27fb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x27fb04: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x27fb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x27fb08: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x27fb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x27fb0c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x27fb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x27fb10: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x27fb10u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fb14: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x27fb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x27fb18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27fb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x27fb1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27fb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x27fb20: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x27fb20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fb24: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27fb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27fb28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27fb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27fb2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27fb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27fb30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27fb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27fb34: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x27fb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x27fb38: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x27fb38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27fb3c: 0x10200048  beqz        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x27FB3Cu;
    {
        const bool branch_taken_0x27fb3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FB3Cu;
            // 0x27fb40: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fb3c) {
            ctx->pc = 0x27FC60u;
            goto label_27fc60;
        }
    }
    ctx->pc = 0x27FB44u;
    // 0x27fb44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27fb44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fb48: 0x27b000a4  addiu       $s0, $sp, 0xA4
    ctx->pc = 0x27fb48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x27fb4c: 0x27b600a8  addiu       $s6, $sp, 0xA8
    ctx->pc = 0x27fb4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x27fb50: 0x27b700ac  addiu       $s7, $sp, 0xAC
    ctx->pc = 0x27fb50u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x27fb54: 0x0  nop
    ctx->pc = 0x27fb54u;
    // NOP
label_27fb58:
    // 0x27fb58: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x27fb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x27fb5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27fb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27fb60: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x27fb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x27fb64: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x27fb64u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27fb68: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27FB68u;
    {
        const bool branch_taken_0x27fb68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x27FB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FB68u;
            // 0x27fb6c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fb68) {
            ctx->pc = 0x27FB78u;
            goto label_27fb78;
        }
    }
    ctx->pc = 0x27FB70u;
    // 0x27fb70: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x27FB70u;
    {
        const bool branch_taken_0x27fb70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27fb70) {
            ctx->pc = 0x27FC48u;
            goto label_27fc48;
        }
    }
    ctx->pc = 0x27FB78u;
label_27fb78:
    // 0x27fb78: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x27fb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x27fb7c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x27fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x27fb80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27fb84: 0x245300b0  addiu       $s3, $v0, 0xB0
    ctx->pc = 0x27fb84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x27fb88: 0x26720040  addiu       $s2, $s3, 0x40
    ctx->pc = 0x27fb88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x27fb8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27fb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fb90: 0xc0a3830  jal         func_28E0C0
    ctx->pc = 0x27FB90u;
    SET_GPR_U32(ctx, 31, 0x27FB98u);
    ctx->pc = 0x27FB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FB90u;
            // 0x27fb94: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FB98u; }
        if (ctx->pc != 0x27FB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FB98u; }
        if (ctx->pc != 0x27FB98u) { return; }
    }
    ctx->pc = 0x27FB98u;
label_27fb98:
    // 0x27fb98: 0xc6450040  lwc1        $f5, 0x40($s2)
    ctx->pc = 0x27fb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27fb9c: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x27fb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27fba0: 0xc6440044  lwc1        $f4, 0x44($s2)
    ctx->pc = 0x27fba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27fba4: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x27fba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fba8: 0xc6430048  lwc1        $f3, 0x48($s2)
    ctx->pc = 0x27fba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27fbac: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x27fbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fbb0: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x27fbb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x27fbb4: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x27fbb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x27fbb8: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x27fbb8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x27fbbc: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x27fbbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x27fbc0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x27fbc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x27fbc4: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x27fbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27fbc8: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x27fbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fbcc: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x27fbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fbd0: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x27fbd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x27fbd4: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x27fbd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x27fbd8: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x27fbd8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x27fbdc: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x27fbdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x27fbe0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x27fbe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x27fbe4: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x27fbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27fbe8: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x27fbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fbec: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x27fbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fbf0: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x27fbf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x27fbf4: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x27fbf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x27fbf8: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x27fbf8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x27fbfc: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x27fbfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x27fc00: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x27fc00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x27fc04: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x27fc04u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x27fc08: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x27fc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fc0c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x27fc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fc10: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27fc10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27fc14: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x27fc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x27fc18: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x27fc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fc1c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x27fc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fc20: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27fc20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27fc24: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x27fc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    // 0x27fc28: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x27fc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fc2c: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x27fc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fc30: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27fc30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27fc34: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x27fc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x27fc38: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x27fc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fc3c: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x27fc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fc40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27fc40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27fc44: 0xe660003c  swc1        $f0, 0x3C($s3)
    ctx->pc = 0x27fc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 60), bits); }
label_27fc48:
    // 0x27fc48: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x27fc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x27fc4c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x27fc4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x27fc50: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x27fc50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27fc54: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
    ctx->pc = 0x27FC54u;
    {
        const bool branch_taken_0x27fc54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FC54u;
            // 0x27fc58: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc54) {
            ctx->pc = 0x27FB58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27fb58;
        }
    }
    ctx->pc = 0x27FC5Cu;
    // 0x27fc5c: 0x0  nop
    ctx->pc = 0x27fc5cu;
    // NOP
label_27fc60:
    // 0x27fc60: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x27fc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27fc64: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x27fc64u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27fc68: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x27fc68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27fc6c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x27fc6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27fc70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27fc70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27fc74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27fc74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27fc78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27fc78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27fc7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27fc7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27fc80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27fc80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27fc84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27fc84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27fc88: 0x3e00008  jr          $ra
    ctx->pc = 0x27FC88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FC88u;
            // 0x27fc8c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27FC90u;
}
