#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00235950
// Address: 0x235950 - 0x2359b0
void sub_00235950_0x235950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235950_0x235950");
#endif

    ctx->pc = 0x235950u;

    // 0x235950: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x235950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x235954: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x235954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235958: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x235958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x23595c: 0x3c06bf80  lui         $a2, 0xBF80
    ctx->pc = 0x23595cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49024 << 16));
    // 0x235960: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x235960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x235964: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x235964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x235968: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x235968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x23596c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x23596cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x235970: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x235970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x235974: 0xa4870006  sh          $a3, 0x6($a0)
    ctx->pc = 0x235974u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 7));
    // 0x235978: 0x2442f140  addiu       $v0, $v0, -0xEC0
    ctx->pc = 0x235978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963520));
    // 0x23597c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x23597cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x235980: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x235980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x235984: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x235984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x235988: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x235988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x23598c: 0x3443b717  ori         $v1, $v0, 0xB717
    ctx->pc = 0x23598cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x235990: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x235990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x235994: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x235994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235998: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x235998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x23599c: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x23599cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x2359a0: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2359a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2359a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2359A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2359A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2359A4u;
            // 0x2359a8: 0xac87000c  sw          $a3, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2359ACu;
    // 0x2359ac: 0x0  nop
    ctx->pc = 0x2359acu;
    // NOP
}
