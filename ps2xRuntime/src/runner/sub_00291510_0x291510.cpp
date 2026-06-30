#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00291510
// Address: 0x291510 - 0x2915b0
void sub_00291510_0x291510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291510_0x291510");
#endif

    switch (ctx->pc) {
        case 0x29152cu: goto label_29152c;
        default: break;
    }

    ctx->pc = 0x291510u;

    // 0x291510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x291510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x291514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x291514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x291518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x291518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29151c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29151cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x291520: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x291520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291524: 0xc0a330c  jal         func_28CC30
    ctx->pc = 0x291524u;
    SET_GPR_U32(ctx, 31, 0x29152Cu);
    ctx->pc = 0x291528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291524u;
            // 0x291528: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CC30u;
    if (runtime->hasFunction(0x28CC30u)) {
        auto targetFn = runtime->lookupFunction(0x28CC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29152Cu; }
        if (ctx->pc != 0x29152Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CC30_0x28cc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29152Cu; }
        if (ctx->pc != 0x29152Cu) { return; }
    }
    ctx->pc = 0x29152Cu;
label_29152c:
    // 0x29152c: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x29152cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291530: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x291530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291534: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x291534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291538: 0x460000c7  neg.s       $f3, $f0
    ctx->pc = 0x291538u;
    ctx->f[3] = FPU_NEG_S(ctx->f[0]);
    // 0x29153c: 0x46000907  neg.s       $f4, $f1
    ctx->pc = 0x29153cu;
    ctx->f[4] = FPU_NEG_S(ctx->f[1]);
    // 0x291540: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x291540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291544: 0x46001147  neg.s       $f5, $f2
    ctx->pc = 0x291544u;
    ctx->f[5] = FPU_NEG_S(ctx->f[2]);
    // 0x291548: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x291548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29154c: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x29154cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x291550: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x291550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291554: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x291554u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x291558: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x291558u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x29155c: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x29155cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x291560: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x291560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291564: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x291564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291568: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x291568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29156c: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x29156cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x291570: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x291570u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x291574: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x291574u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x291578: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x291578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x29157c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x29157cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291580: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x291580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291584: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x291584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291588: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x291588u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x29158c: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x29158cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x291590: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x291590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x291594: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x291594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x291598: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x291598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x29159c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29159cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2915a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2915a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2915a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2915a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2915a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2915A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2915ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2915A8u;
            // 0x2915ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2915B0u;
}
