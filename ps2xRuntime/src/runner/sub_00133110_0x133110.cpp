#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00133110
// Address: 0x133110 - 0x1331c0
void sub_00133110_0x133110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133110_0x133110");
#endif

    switch (ctx->pc) {
        case 0x133170u: goto label_133170;
        default: break;
    }

    ctx->pc = 0x133110u;

    // 0x133110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x133110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x133114: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x133114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x133118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x133118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13311c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13311cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x133120: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x133120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133124: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x133124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133128: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x133128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13312c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x13312cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133130: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x133130u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x133134: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x133134u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x133138: 0x4600031c  madd.s      $f12, $f0, $f0
    ctx->pc = 0x133138u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x13313c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13313cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133140: 0x0  nop
    ctx->pc = 0x133140u;
    // NOP
    // 0x133144: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x133144u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133148: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x133148u;
    {
        const bool branch_taken_0x133148 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13314Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133148u;
            // 0x13314c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133148) {
            ctx->pc = 0x133168u;
            goto label_133168;
        }
    }
    ctx->pc = 0x133150u;
    // 0x133150: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x133150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x133154: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x133154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133158: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x133158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x13315c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x13315cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x133160: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x133160u;
    {
        const bool branch_taken_0x133160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133160u;
            // 0x133164: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x133160) {
            ctx->pc = 0x1331A0u;
            goto label_1331a0;
        }
    }
    ctx->pc = 0x133168u;
label_133168:
    // 0x133168: 0xc04c718  jal         func_131C60
    ctx->pc = 0x133168u;
    SET_GPR_U32(ctx, 31, 0x133170u);
    ctx->pc = 0x131C60u;
    if (runtime->hasFunction(0x131C60u)) {
        auto targetFn = runtime->lookupFunction(0x131C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133170u; }
        if (ctx->pc != 0x133170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C60_0x131c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133170u; }
        if (ctx->pc != 0x133170u) { return; }
    }
    ctx->pc = 0x133170u;
label_133170:
    // 0x133170: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x133170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x133174: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x133174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x133178: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x133178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13317c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13317cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133180: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x133180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133184: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x133184u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x133188: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x133188u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x13318c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13318cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x133190: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x133190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x133194: 0xe6230004  swc1        $f3, 0x4($s1)
    ctx->pc = 0x133194u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x133198: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x133198u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x13319c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x13319cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_1331a0:
    // 0x1331a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1331a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1331a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1331a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1331a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1331a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1331ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1331ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1331B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1331ACu;
            // 0x1331b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1331B4u;
    // 0x1331b4: 0x0  nop
    ctx->pc = 0x1331b4u;
    // NOP
    // 0x1331b8: 0x0  nop
    ctx->pc = 0x1331b8u;
    // NOP
    // 0x1331bc: 0x0  nop
    ctx->pc = 0x1331bcu;
    // NOP
}
