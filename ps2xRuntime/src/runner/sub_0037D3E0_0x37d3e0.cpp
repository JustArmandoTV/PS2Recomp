#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037D3E0
// Address: 0x37d3e0 - 0x37d480
void sub_0037D3E0_0x37d3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D3E0_0x37d3e0");
#endif

    switch (ctx->pc) {
        case 0x37d440u: goto label_37d440;
        case 0x37d470u: goto label_37d470;
        default: break;
    }

    ctx->pc = 0x37d3e0u;

    // 0x37d3e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37d3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37d3e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x37d3e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37d3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37d3ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37d3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37d3f0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x37d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x37d3f4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x37d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x37d3f8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x37d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x37d3fc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37D3FCu;
    {
        const bool branch_taken_0x37d3fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x37D400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D3FCu;
            // 0x37d400: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d3fc) {
            ctx->pc = 0x37D410u;
            goto label_37d410;
        }
    }
    ctx->pc = 0x37D404u;
    // 0x37d404: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37d404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d408: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37D408u;
    {
        const bool branch_taken_0x37d408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D408u;
            // 0x37d40c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d408) {
            ctx->pc = 0x37D42Cu;
            goto label_37d42c;
        }
    }
    ctx->pc = 0x37D410u;
label_37d410:
    // 0x37d410: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x37d410u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x37d414: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37d414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x37d418: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37d418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37d41c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37d41cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d420: 0x0  nop
    ctx->pc = 0x37d420u;
    // NOP
    // 0x37d424: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37d424u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37d428: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x37d428u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_37d42c:
    // 0x37d42c: 0x3c023ccc  lui         $v0, 0x3CCC
    ctx->pc = 0x37d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15564 << 16));
    // 0x37d430: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x37d430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x37d434: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37d434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d438: 0xc0477a8  jal         func_11DEA0
    ctx->pc = 0x37D438u;
    SET_GPR_U32(ctx, 31, 0x37D440u);
    ctx->pc = 0x37D43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D438u;
            // 0x37d43c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D440u; }
        if (ctx->pc != 0x37D440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D440u; }
        if (ctx->pc != 0x37D440u) { return; }
    }
    ctx->pc = 0x37D440u;
label_37d440:
    // 0x37d440: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x37d440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37d444: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x37d444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x37d448: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x37d448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x37d44c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x37d44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37d450: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x37d450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37d454: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x37d454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x37d458: 0xc60e0018  lwc1        $f14, 0x18($s0)
    ctx->pc = 0x37d458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x37d45c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x37d45cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37d460: 0x0  nop
    ctx->pc = 0x37d460u;
    // NOP
    // 0x37d464: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x37d464u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x37d468: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x37D468u;
    SET_GPR_U32(ctx, 31, 0x37D470u);
    ctx->pc = 0x37D46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D468u;
            // 0x37d46c: 0x46001b5c  madd.s      $f13, $f3, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D470u; }
        if (ctx->pc != 0x37D470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D470u; }
        if (ctx->pc != 0x37D470u) { return; }
    }
    ctx->pc = 0x37D470u;
label_37d470:
    // 0x37d470: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37d470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37d474: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37d474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37d478: 0x3e00008  jr          $ra
    ctx->pc = 0x37D478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D478u;
            // 0x37d47c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37D480u;
}
