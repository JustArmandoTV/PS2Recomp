#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015D220
// Address: 0x15d220 - 0x15d260
void sub_0015D220_0x15d220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D220_0x15d220");
#endif

    ctx->pc = 0x15d220u;

    // 0x15d220: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x15d220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x15d224: 0x34058001  ori         $a1, $zero, 0x8001
    ctx->pc = 0x15d224u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x15d228: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x15d228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x15d22c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x15d22cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x15d230: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x15d230u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x15d234: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x15d234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15d238: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x15d238u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x15d23c: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x15d23cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x15d240: 0xe48c0010  swc1        $f12, 0x10($a0)
    ctx->pc = 0x15d240u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x15d244: 0xe48c0014  swc1        $f12, 0x14($a0)
    ctx->pc = 0x15d244u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x15d248: 0xe48c0018  swc1        $f12, 0x18($a0)
    ctx->pc = 0x15d248u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x15d24c: 0x3e00008  jr          $ra
    ctx->pc = 0x15D24Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D24Cu;
            // 0x15d250: 0xac80001c  sw          $zero, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D254u;
    // 0x15d254: 0x0  nop
    ctx->pc = 0x15d254u;
    // NOP
    // 0x15d258: 0x0  nop
    ctx->pc = 0x15d258u;
    // NOP
    // 0x15d25c: 0x0  nop
    ctx->pc = 0x15d25cu;
    // NOP
}
