#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00133280
// Address: 0x133280 - 0x133310
void sub_00133280_0x133280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133280_0x133280");
#endif

    ctx->pc = 0x133280u;

    // 0x133280: 0xc4c80004  lwc1        $f8, 0x4($a2)
    ctx->pc = 0x133280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x133284: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x133284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x133288: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x133288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13328c: 0xc4c70000  lwc1        $f7, 0x0($a2)
    ctx->pc = 0x13328cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x133290: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x133290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133294: 0x4608081a  mula.s      $f1, $f8
    ctx->pc = 0x133294u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x133298: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x133298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x13329c: 0x4607101e  madda.s     $f2, $f7
    ctx->pc = 0x13329cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[7]));
    // 0x1332a0: 0xc4a30024  lwc1        $f3, 0x24($a1)
    ctx->pc = 0x1332a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1332a4: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x1332a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1332a8: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x1332a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1332ac: 0x4606185c  madd.s      $f1, $f3, $f6
    ctx->pc = 0x1332acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x1332b0: 0x46010140  add.s       $f5, $f0, $f1
    ctx->pc = 0x1332b0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1332b4: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x1332b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1332b8: 0xc4a40028  lwc1        $f4, 0x28($a1)
    ctx->pc = 0x1332b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1332bc: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x1332bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1332c0: 0x4608081a  mula.s      $f1, $f8
    ctx->pc = 0x1332c0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x1332c4: 0x4607101e  madda.s     $f2, $f7
    ctx->pc = 0x1332c4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[7]));
    // 0x1332c8: 0x4606205c  madd.s      $f1, $f4, $f6
    ctx->pc = 0x1332c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x1332cc: 0x46010100  add.s       $f4, $f0, $f1
    ctx->pc = 0x1332ccu;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1332d0: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x1332d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1332d4: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1332d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1332d8: 0xc4a30020  lwc1        $f3, 0x20($a1)
    ctx->pc = 0x1332d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1332dc: 0x4608081a  mula.s      $f1, $f8
    ctx->pc = 0x1332dcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x1332e0: 0x4607101e  madda.s     $f2, $f7
    ctx->pc = 0x1332e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[7]));
    // 0x1332e4: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x1332e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1332e8: 0x4606185c  madd.s      $f1, $f3, $f6
    ctx->pc = 0x1332e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x1332ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1332ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1332f0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1332f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1332f4: 0xe4850004  swc1        $f5, 0x4($a0)
    ctx->pc = 0x1332f4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1332f8: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x1332f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1332fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1332FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1332FCu;
            // 0x133300: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x133304u;
    // 0x133304: 0x0  nop
    ctx->pc = 0x133304u;
    // NOP
    // 0x133308: 0x0  nop
    ctx->pc = 0x133308u;
    // NOP
    // 0x13330c: 0x0  nop
    ctx->pc = 0x13330cu;
    // NOP
}
