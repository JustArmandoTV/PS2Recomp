#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00149F00
// Address: 0x149f00 - 0x149f60
void sub_00149F00_0x149f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149F00_0x149f00");
#endif

    ctx->pc = 0x149f00u;

    // 0x149f00: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x149f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149f04: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x149f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149f08: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x149f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149f0c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x149f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149f10: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x149f10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x149f14: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x149f14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x149f18: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x149f18u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x149f1c: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x149f1cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x149f20: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x149f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149f24: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x149f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149f28: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x149f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149f2c: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x149f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149f30: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x149f30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x149f34: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x149f34u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x149f38: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x149f38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x149f3c: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x149f3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x149f40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x149f40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149f44: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x149F44u;
    {
        const bool branch_taken_0x149f44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x149f44) {
            ctx->pc = 0x149F48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x149F44u;
            // 0x149f48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x149F50u;
            goto label_149f50;
        }
    }
    ctx->pc = 0x149F4Cu;
    // 0x149f4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_149f50:
    // 0x149f50: 0x3e00008  jr          $ra
    ctx->pc = 0x149F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x149F58u;
    // 0x149f58: 0x0  nop
    ctx->pc = 0x149f58u;
    // NOP
    // 0x149f5c: 0x0  nop
    ctx->pc = 0x149f5cu;
    // NOP
}
