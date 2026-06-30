#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E4660
// Address: 0x1e4660 - 0x1e46b0
void sub_001E4660_0x1e4660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4660_0x1e4660");
#endif

    ctx->pc = 0x1e4660u;

    // 0x1e4660: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1e4660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e4664: 0xa0800022  sb          $zero, 0x22($a0)
    ctx->pc = 0x1e4664u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e4668: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x1e4668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e466c: 0x90830021  lbu         $v1, 0x21($a0)
    ctx->pc = 0x1e466cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 33)));
    // 0x1e4670: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e4670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e4674: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e4674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e4678: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x1e4678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e467c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1e467cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e4680: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1e4680u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e4684: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x1e4684u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x1e4688: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x1e4688u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e468c: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x1e468cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x1e4690: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x1e4690u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e4694: 0x90830021  lbu         $v1, 0x21($a0)
    ctx->pc = 0x1e4694u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 33)));
    // 0x1e4698: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e4698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e469c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E469Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E46A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E469Cu;
            // 0x1e46a0: 0xa0830021  sb          $v1, 0x21($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E46A4u;
    // 0x1e46a4: 0x0  nop
    ctx->pc = 0x1e46a4u;
    // NOP
    // 0x1e46a8: 0x0  nop
    ctx->pc = 0x1e46a8u;
    // NOP
    // 0x1e46ac: 0x0  nop
    ctx->pc = 0x1e46acu;
    // NOP
}
