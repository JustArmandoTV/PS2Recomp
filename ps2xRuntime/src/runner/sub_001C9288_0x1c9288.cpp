#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C9288
// Address: 0x1c9288 - 0x1c9398
void sub_001C9288_0x1c9288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9288_0x1c9288");
#endif

    switch (ctx->pc) {
        case 0x1c92e0u: goto label_1c92e0;
        case 0x1c9348u: goto label_1c9348;
        case 0x1c9370u: goto label_1c9370;
        default: break;
    }

    ctx->pc = 0x1c9288u;

    // 0x1c9288: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1c9288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x1c928c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c928cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9290: 0x24a5a70c  addiu       $a1, $a1, -0x58F4
    ctx->pc = 0x1c9290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944524));
    // 0x1c9294: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c9294u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9298: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1c9298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c929c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x1c929cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c92a0: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x1c92a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1c92a4: 0xa0600ab4  sb          $zero, 0xAB4($v1)
    ctx->pc = 0x1c92a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2740), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c92a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c92a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c92ac: 0xa0400ab5  sb          $zero, 0xAB5($v0)
    ctx->pc = 0x1c92acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2741), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c92b0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1c92b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c92b4: 0xa0600ab6  sb          $zero, 0xAB6($v1)
    ctx->pc = 0x1c92b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2742), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c92b8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1c92b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c92bc: 0xa0800ab7  sb          $zero, 0xAB7($a0)
    ctx->pc = 0x1c92bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2743), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c92c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c92c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c92c4: 0xa0460ab8  sb          $a2, 0xAB8($v0)
    ctx->pc = 0x1c92c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2744), (uint8_t)GPR_U32(ctx, 6));
    // 0x1c92c8: 0xac460abc  sw          $a2, 0xABC($v0)
    ctx->pc = 0x1c92c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2748), GPR_U32(ctx, 6));
    // 0x1c92cc: 0xac400ac0  sw          $zero, 0xAC0($v0)
    ctx->pc = 0x1c92ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2752), GPR_U32(ctx, 0));
    // 0x1c92d0: 0xac40187c  sw          $zero, 0x187C($v0)
    ctx->pc = 0x1c92d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6268), GPR_U32(ctx, 0));
    // 0x1c92d4: 0xac401880  sw          $zero, 0x1880($v0)
    ctx->pc = 0x1c92d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6272), GPR_U32(ctx, 0));
    // 0x1c92d8: 0xac401884  sw          $zero, 0x1884($v0)
    ctx->pc = 0x1c92d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6276), GPR_U32(ctx, 0));
    // 0x1c92dc: 0xac460ac4  sw          $a2, 0xAC4($v0)
    ctx->pc = 0x1c92dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2756), GPR_U32(ctx, 6));
label_1c92e0:
    // 0x1c92e0: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x1c92e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1c92e4: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x1c92e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1c92e8: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x1c92e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1c92ec: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1c92ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1c92f0: 0xa0400080  sb          $zero, 0x80($v0)
    ctx->pc = 0x1c92f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 128), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c92f4: 0x2d490030  sltiu       $t1, $t2, 0x30
    ctx->pc = 0x1c92f4u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1c92f8: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x1c92f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1c92fc: 0x24460008  addiu       $a2, $v0, 0x8
    ctx->pc = 0x1c92fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1c9300: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1c9300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1c9304: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x1c9304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c9308: 0x664021  addu        $t0, $v1, $a2
    ctx->pc = 0x1c9308u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1c930c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1c930cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9310: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x1c9310u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9314: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c9314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9318: 0xac800bb0  sw          $zero, 0xBB0($a0)
    ctx->pc = 0x1c9318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2992), GPR_U32(ctx, 0));
    // 0x1c931c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1c931cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9320: 0xaca00c70  sw          $zero, 0xC70($a1)
    ctx->pc = 0x1c9320u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3184), GPR_U32(ctx, 0));
    // 0x1c9324: 0xac400d30  sw          $zero, 0xD30($v0)
    ctx->pc = 0x1c9324u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3376), GPR_U32(ctx, 0));
    // 0x1c9328: 0xacec0df0  sw          $t4, 0xDF0($a3)
    ctx->pc = 0x1c9328u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3568), GPR_U32(ctx, 12));
    // 0x1c932c: 0xac601a00  sw          $zero, 0x1A00($v1)
    ctx->pc = 0x1c932cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6656), GPR_U32(ctx, 0));
    // 0x1c9330: 0x1520ffeb  bnez        $t1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1C9330u;
    {
        const bool branch_taken_0x1c9330 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9330u;
            // 0x1c9334: 0xad001ac0  sw          $zero, 0x1AC0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 6848), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9330) {
            ctx->pc = 0x1C92E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c92e0;
        }
    }
    ctx->pc = 0x1C9338u;
    // 0x1c9338: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1c9338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1c933c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c933cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9340: 0x8c62a70c  lw          $v0, -0x58F4($v1)
    ctx->pc = 0x1c9340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944524)));
    // 0x1c9344: 0x244300b4  addiu       $v1, $v0, 0xB4
    ctx->pc = 0x1c9344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
label_1c9348:
    // 0x1c9348: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1c9348u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1c934c: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x1c934cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c9350: 0x2d420080  sltiu       $v0, $t2, 0x80
    ctx->pc = 0x1c9350u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x1c9354: 0x0  nop
    ctx->pc = 0x1c9354u;
    // NOP
    // 0x1c9358: 0x0  nop
    ctx->pc = 0x1c9358u;
    // NOP
    // 0x1c935c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C935Cu;
    {
        const bool branch_taken_0x1c935c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C935Cu;
            // 0x1c9360: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c935c) {
            ctx->pc = 0x1C9348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c9348;
        }
    }
    ctx->pc = 0x1C9364u;
    // 0x1c9364: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c9364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c9368: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c9368u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c936c: 0x2444a70c  addiu       $a0, $v0, -0x58F4
    ctx->pc = 0x1c936cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944524));
label_1c9370:
    // 0x1c9370: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c9370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c9374: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x1c9374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1c9378: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1c9378u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1c937c: 0x2d430030  sltiu       $v1, $t2, 0x30
    ctx->pc = 0x1c937cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1c9380: 0x0  nop
    ctx->pc = 0x1c9380u;
    // NOP
    // 0x1c9384: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C9384u;
    {
        const bool branch_taken_0x1c9384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9384u;
            // 0x1c9388: 0xa0400b8c  sb          $zero, 0xB8C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2956), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9384) {
            ctx->pc = 0x1C9370u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c9370;
        }
    }
    ctx->pc = 0x1C938Cu;
    // 0x1c938c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C938Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9394u;
    // 0x1c9394: 0x0  nop
    ctx->pc = 0x1c9394u;
    // NOP
}
