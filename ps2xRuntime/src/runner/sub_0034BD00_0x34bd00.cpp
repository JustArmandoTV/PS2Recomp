#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034BD00
// Address: 0x34bd00 - 0x34bd60
void sub_0034BD00_0x34bd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BD00_0x34bd00");
#endif

    switch (ctx->pc) {
        case 0x34bd20u: goto label_34bd20;
        case 0x34bd30u: goto label_34bd30;
        default: break;
    }

    ctx->pc = 0x34bd00u;

    // 0x34bd00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34bd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34bd04: 0xa0830844  sb          $v1, 0x844($a0)
    ctx->pc = 0x34bd04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2116), (uint8_t)GPR_U32(ctx, 3));
    // 0x34bd08: 0xac850848  sw          $a1, 0x848($a0)
    ctx->pc = 0x34bd08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2120), GPR_U32(ctx, 5));
    // 0x34bd0c: 0xe48c084c  swc1        $f12, 0x84C($a0)
    ctx->pc = 0x34bd0cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2124), bits); }
    // 0x34bd10: 0x3e00008  jr          $ra
    ctx->pc = 0x34BD10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34BD10u;
            // 0x34bd14: 0xe48d0850  swc1        $f13, 0x850($a0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34BD18u;
    // 0x34bd18: 0x0  nop
    ctx->pc = 0x34bd18u;
    // NOP
    // 0x34bd1c: 0x0  nop
    ctx->pc = 0x34bd1cu;
    // NOP
label_34bd20:
    // 0x34bd20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34bd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34bd24: 0xa0830829  sb          $v1, 0x829($a0)
    ctx->pc = 0x34bd24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2089), (uint8_t)GPR_U32(ctx, 3));
    // 0x34bd28: 0x3e00008  jr          $ra
    ctx->pc = 0x34BD28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34BD28u;
            // 0x34bd2c: 0xa485082e  sh          $a1, 0x82E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2094), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34BD30u;
label_34bd30:
    // 0x34bd30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34bd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34bd34: 0xa0830828  sb          $v1, 0x828($a0)
    ctx->pc = 0x34bd34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2088), (uint8_t)GPR_U32(ctx, 3));
    // 0x34bd38: 0xa085082a  sb          $a1, 0x82A($a0)
    ctx->pc = 0x34bd38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2090), (uint8_t)GPR_U32(ctx, 5));
    // 0x34bd3c: 0xa086082b  sb          $a2, 0x82B($a0)
    ctx->pc = 0x34bd3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2091), (uint8_t)GPR_U32(ctx, 6));
    // 0x34bd40: 0xa087082c  sb          $a3, 0x82C($a0)
    ctx->pc = 0x34bd40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2092), (uint8_t)GPR_U32(ctx, 7));
    // 0x34bd44: 0xe48c0818  swc1        $f12, 0x818($a0)
    ctx->pc = 0x34bd44u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2072), bits); }
    // 0x34bd48: 0xe48d081c  swc1        $f13, 0x81C($a0)
    ctx->pc = 0x34bd48u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2076), bits); }
    // 0x34bd4c: 0xe48e0820  swc1        $f14, 0x820($a0)
    ctx->pc = 0x34bd4cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2080), bits); }
    // 0x34bd50: 0x3e00008  jr          $ra
    ctx->pc = 0x34BD50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34BD50u;
            // 0x34bd54: 0xe48f0824  swc1        $f15, 0x824($a0) (Delay Slot)
        { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2084), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34BD58u;
    // 0x34bd58: 0x0  nop
    ctx->pc = 0x34bd58u;
    // NOP
    // 0x34bd5c: 0x0  nop
    ctx->pc = 0x34bd5cu;
    // NOP
}
