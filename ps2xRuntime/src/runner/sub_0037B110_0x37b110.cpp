#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037B110
// Address: 0x37b110 - 0x37b1a0
void sub_0037B110_0x37b110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B110_0x37b110");
#endif

    switch (ctx->pc) {
        case 0x37b144u: goto label_37b144;
        case 0x37b14cu: goto label_37b14c;
        case 0x37b174u: goto label_37b174;
        default: break;
    }

    ctx->pc = 0x37b110u;

    // 0x37b110: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x37b110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37b114: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x37b114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37b118: 0x3e00008  jr          $ra
    ctx->pc = 0x37B118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B118u;
            // 0x37b11c: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37B120u;
    // 0x37b120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37b120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37b124: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x37b124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x37b128: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37b128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37b12c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x37b12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b130: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37b130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37b134: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37b134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b138: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x37b138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x37b13c: 0xc08914c  jal         func_224530
    ctx->pc = 0x37B13Cu;
    SET_GPR_U32(ctx, 31, 0x37B144u);
    ctx->pc = 0x37B140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B13Cu;
            // 0x37b140: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B144u; }
        if (ctx->pc != 0x37B144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B144u; }
        if (ctx->pc != 0x37B144u) { return; }
    }
    ctx->pc = 0x37B144u;
label_37b144:
    // 0x37b144: 0xc0e393c  jal         func_38E4F0
    ctx->pc = 0x37B144u;
    SET_GPR_U32(ctx, 31, 0x37B14Cu);
    ctx->pc = 0x37B148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B144u;
            // 0x37b148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B14Cu; }
        if (ctx->pc != 0x37B14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B14Cu; }
        if (ctx->pc != 0x37B14Cu) { return; }
    }
    ctx->pc = 0x37B14Cu;
label_37b14c:
    // 0x37b14c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x37b14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x37b150: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x37b150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37b154: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x37b154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37b158: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x37b158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x37b15c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x37b15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37b160: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x37b160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x37b164: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x37b164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x37b168: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x37b168u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x37b16c: 0xc089290  jal         func_224A40
    ctx->pc = 0x37B16Cu;
    SET_GPR_U32(ctx, 31, 0x37B174u);
    ctx->pc = 0x37B170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B16Cu;
            // 0x37b170: 0xe7a20028  swc1        $f2, 0x28($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A40u;
    if (runtime->hasFunction(0x224A40u)) {
        auto targetFn = runtime->lookupFunction(0x224A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B174u; }
        if (ctx->pc != 0x37B174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A40_0x224a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B174u; }
        if (ctx->pc != 0x37B174u) { return; }
    }
    ctx->pc = 0x37B174u;
label_37b174:
    // 0x37b174: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x37b174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37b178: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x37b178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    // 0x37b17c: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x37b17cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x37b180: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x37b180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
    // 0x37b184: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37b184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b188: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37b188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b18c: 0x3e00008  jr          $ra
    ctx->pc = 0x37B18Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B18Cu;
            // 0x37b190: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37B194u;
    // 0x37b194: 0x0  nop
    ctx->pc = 0x37b194u;
    // NOP
    // 0x37b198: 0x0  nop
    ctx->pc = 0x37b198u;
    // NOP
    // 0x37b19c: 0x0  nop
    ctx->pc = 0x37b19cu;
    // NOP
}
