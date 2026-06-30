#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A77B0
// Address: 0x1a77b0 - 0x1a7830
void sub_001A77B0_0x1a77b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A77B0_0x1a77b0");
#endif

    ctx->pc = 0x1a77b0u;

    // 0x1a77b0: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x1a77b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1a77b4: 0x90a60002  lbu         $a2, 0x2($a1)
    ctx->pc = 0x1a77b4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1a77b8: 0x90a70001  lbu         $a3, 0x1($a1)
    ctx->pc = 0x1a77b8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1a77bc: 0x26102  srl         $t4, $v0, 4
    ctx->pc = 0x1a77bcu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1a77c0: 0x64082  srl         $t0, $a2, 2
    ctx->pc = 0x1a77c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x1a77c4: 0x64842  srl         $t1, $a2, 1
    ctx->pc = 0x1a77c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x1a77c8: 0x72842  srl         $a1, $a3, 1
    ctx->pc = 0x1a77c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x1a77cc: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x1a77ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x1a77d0: 0x250c2  srl         $t2, $v0, 3
    ctx->pc = 0x1a77d0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x1a77d4: 0x25882  srl         $t3, $v0, 2
    ctx->pc = 0x1a77d4u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1a77d8: 0x30cd0001  andi        $t5, $a2, 0x1
    ctx->pc = 0x1a77d8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1a77dc: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x1a77dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x1a77e0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x1a77e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1a77e4: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1a77e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1a77e8: 0x30a50003  andi        $a1, $a1, 0x3
    ctx->pc = 0x1a77e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x1a77ec: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x1a77ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x1a77f0: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x1a77f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x1a77f4: 0x318c0003  andi        $t4, $t4, 0x3
    ctx->pc = 0x1a77f4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
    // 0x1a77f8: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x1a77f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x1a77fc: 0x316b0001  andi        $t3, $t3, 0x1
    ctx->pc = 0x1a77fcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x1a7800: 0xa083000a  sb          $v1, 0xA($a0)
    ctx->pc = 0x1a7800u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a7804: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1a7804u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a7808: 0xa0870001  sb          $a3, 0x1($a0)
    ctx->pc = 0x1a7808u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x1a780c: 0xa0860002  sb          $a2, 0x2($a0)
    ctx->pc = 0x1a780cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x1a7810: 0xa0880003  sb          $t0, 0x3($a0)
    ctx->pc = 0x1a7810u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x1a7814: 0xa0890004  sb          $t1, 0x4($a0)
    ctx->pc = 0x1a7814u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 9));
    // 0x1a7818: 0xa08d0005  sb          $t5, 0x5($a0)
    ctx->pc = 0x1a7818u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 13));
    // 0x1a781c: 0xa0820006  sb          $v0, 0x6($a0)
    ctx->pc = 0x1a781cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a7820: 0xa08c0007  sb          $t4, 0x7($a0)
    ctx->pc = 0x1a7820u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 12));
    // 0x1a7824: 0xa08a0008  sb          $t2, 0x8($a0)
    ctx->pc = 0x1a7824u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 10));
    // 0x1a7828: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A782Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7828u;
            // 0x1a782c: 0xa08b0009  sb          $t3, 0x9($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7830u;
}
