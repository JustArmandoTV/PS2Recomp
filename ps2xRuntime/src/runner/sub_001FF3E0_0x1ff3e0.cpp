#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FF3E0
// Address: 0x1ff3e0 - 0x1ff680
void sub_001FF3E0_0x1ff3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF3E0_0x1ff3e0");
#endif

    switch (ctx->pc) {
        case 0x1ff40cu: goto label_1ff40c;
        case 0x1ff418u: goto label_1ff418;
        case 0x1ff524u: goto label_1ff524;
        case 0x1ff540u: goto label_1ff540;
        case 0x1ff548u: goto label_1ff548;
        default: break;
    }

    ctx->pc = 0x1ff3e0u;

    // 0x1ff3e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff3e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ff3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff3e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ff3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ff3ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ff3ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff3f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ff3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ff3f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ff3f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff3f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ff3f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff3fc: 0xac830190  sw          $v1, 0x190($a0)
    ctx->pc = 0x1ff3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 3));
    // 0x1ff400: 0xac830ea0  sw          $v1, 0xEA0($a0)
    ctx->pc = 0x1ff400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3744), GPR_U32(ctx, 3));
    // 0x1ff404: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ff404u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff408: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1ff408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1ff40c:
    // 0x1ff40c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ff40cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff410: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ff410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff414: 0x0  nop
    ctx->pc = 0x1ff414u;
    // NOP
label_1ff418:
    // 0x1ff418: 0x8e031c40  lw          $v1, 0x1C40($s0)
    ctx->pc = 0x1ff418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7232)));
    // 0x1ff41c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FF41Cu;
    {
        const bool branch_taken_0x1ff41c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff41c) {
            ctx->pc = 0x1FF460u;
            goto label_1ff460;
        }
    }
    ctx->pc = 0x1FF424u;
    // 0x1ff424: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1ff424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1ff428: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1ff428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ff42c: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x1ff42cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ff430: 0x8e031c44  lw          $v1, 0x1C44($s0)
    ctx->pc = 0x1ff430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7236)));
    // 0x1ff434: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1ff434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1ff438: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1ff438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ff43c: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x1ff43cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ff440: 0x8e031c48  lw          $v1, 0x1C48($s0)
    ctx->pc = 0x1ff440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7240)));
    // 0x1ff444: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1ff444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1ff448: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1ff448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ff44c: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x1ff44cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ff450: 0x8e031c4c  lw          $v1, 0x1C4C($s0)
    ctx->pc = 0x1ff450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7244)));
    // 0x1ff454: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1ff454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1ff458: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1ff458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ff45c: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x1ff45cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
label_1ff460:
    // 0x1ff460: 0xe92021  addu        $a0, $a3, $t1
    ctx->pc = 0x1ff460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1ff464: 0xa08001a0  sb          $zero, 0x1A0($a0)
    ctx->pc = 0x1ff464u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 416), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff468: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1ff468u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1ff46c: 0xa0800eb0  sb          $zero, 0xEB0($a0)
    ctx->pc = 0x1ff46cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3760), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff470: 0x29230020  slti        $v1, $t1, 0x20
    ctx->pc = 0x1ff470u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ff474: 0xa08005a0  sb          $zero, 0x5A0($a0)
    ctx->pc = 0x1ff474u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1440), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff478: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x1ff478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1ff47c: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1FF47Cu;
    {
        const bool branch_taken_0x1ff47c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF47Cu;
            // 0x1ff480: 0xa08012b0  sb          $zero, 0x12B0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4784), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff47c) {
            ctx->pc = 0x1FF418u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ff418;
        }
    }
    ctx->pc = 0x1FF484u;
    // 0x1ff484: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ff484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ff488: 0x25080060  addiu       $t0, $t0, 0x60
    ctx->pc = 0x1ff488u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
    // 0x1ff48c: 0x28430020  slti        $v1, $v0, 0x20
    ctx->pc = 0x1ff48cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ff490: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1FF490u;
    {
        const bool branch_taken_0x1ff490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF490u;
            // 0x1ff494: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff490) {
            ctx->pc = 0x1FF40Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ff40c;
        }
    }
    ctx->pc = 0x1FF498u;
    // 0x1ff498: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1ff498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1ff49c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1ff49cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1ff4a0: 0x24424a00  addiu       $v0, $v0, 0x4A00
    ctx->pc = 0x1ff4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18944));
    // 0x1ff4a4: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x1ff4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x1ff4a8: 0xae0209a0  sw          $v0, 0x9A0($s0)
    ctx->pc = 0x1ff4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2464), GPR_U32(ctx, 2));
    // 0x1ff4ac: 0x246349e0  addiu       $v1, $v1, 0x49E0
    ctx->pc = 0x1ff4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18912));
    // 0x1ff4b0: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1ff4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1ff4b4: 0xae0309a4  sw          $v1, 0x9A4($s0)
    ctx->pc = 0x1ff4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2468), GPR_U32(ctx, 3));
    // 0x1ff4b8: 0x244249d0  addiu       $v0, $v0, 0x49D0
    ctx->pc = 0x1ff4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18896));
    // 0x1ff4bc: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1ff4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1ff4c0: 0xae0209a8  sw          $v0, 0x9A8($s0)
    ctx->pc = 0x1ff4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2472), GPR_U32(ctx, 2));
    // 0x1ff4c4: 0x246349f0  addiu       $v1, $v1, 0x49F0
    ctx->pc = 0x1ff4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18928));
    // 0x1ff4c8: 0xae0309ac  sw          $v1, 0x9AC($s0)
    ctx->pc = 0x1ff4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2476), GPR_U32(ctx, 3));
    // 0x1ff4cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff4d0: 0xa20009b0  sb          $zero, 0x9B0($s0)
    ctx->pc = 0x1ff4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2480), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff4d4: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1ff4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1ff4d8: 0xa20209b1  sb          $v0, 0x9B1($s0)
    ctx->pc = 0x1ff4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2481), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ff4dc: 0x2484f3b0  addiu       $a0, $a0, -0xC50
    ctx->pc = 0x1ff4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964144));
    // 0x1ff4e0: 0xae0416b0  sw          $a0, 0x16B0($s0)
    ctx->pc = 0x1ff4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5808), GPR_U32(ctx, 4));
    // 0x1ff4e4: 0x2463f3c0  addiu       $v1, $v1, -0xC40
    ctx->pc = 0x1ff4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964160));
    // 0x1ff4e8: 0xae0316b4  sw          $v1, 0x16B4($s0)
    ctx->pc = 0x1ff4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5812), GPR_U32(ctx, 3));
    // 0x1ff4ec: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1ff4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1ff4f0: 0xae0016b8  sw          $zero, 0x16B8($s0)
    ctx->pc = 0x1ff4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5816), GPR_U32(ctx, 0));
    // 0x1ff4f4: 0x2442f3d0  addiu       $v0, $v0, -0xC30
    ctx->pc = 0x1ff4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964176));
    // 0x1ff4f8: 0xae0016bc  sw          $zero, 0x16BC($s0)
    ctx->pc = 0x1ff4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5820), GPR_U32(ctx, 0));
    // 0x1ff4fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ff4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff500: 0xae0016c0  sw          $zero, 0x16C0($s0)
    ctx->pc = 0x1ff500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5824), GPR_U32(ctx, 0));
    // 0x1ff504: 0xae0016c4  sw          $zero, 0x16C4($s0)
    ctx->pc = 0x1ff504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5828), GPR_U32(ctx, 0));
    // 0x1ff508: 0xae0016c8  sw          $zero, 0x16C8($s0)
    ctx->pc = 0x1ff508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5832), GPR_U32(ctx, 0));
    // 0x1ff50c: 0xae0016d4  sw          $zero, 0x16D4($s0)
    ctx->pc = 0x1ff50cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 0));
    // 0x1ff510: 0xae0016cc  sw          $zero, 0x16CC($s0)
    ctx->pc = 0x1ff510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5836), GPR_U32(ctx, 0));
    // 0x1ff514: 0xae0016d0  sw          $zero, 0x16D0($s0)
    ctx->pc = 0x1ff514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 0));
    // 0x1ff518: 0xae0216d8  sw          $v0, 0x16D8($s0)
    ctx->pc = 0x1ff518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5848), GPR_U32(ctx, 2));
    // 0x1ff51c: 0xc07f9c8  jal         func_1FE720
    ctx->pc = 0x1FF51Cu;
    SET_GPR_U32(ctx, 31, 0x1FF524u);
    ctx->pc = 0x1FF520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF51Cu;
            // 0x1ff520: 0xae0016e0  sw          $zero, 0x16E0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5856), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE720u;
    if (runtime->hasFunction(0x1FE720u)) {
        auto targetFn = runtime->lookupFunction(0x1FE720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF524u; }
        if (ctx->pc != 0x1FF524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FE720_0x1fe720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF524u; }
        if (ctx->pc != 0x1FF524u) { return; }
    }
    ctx->pc = 0x1FF524u;
label_1ff524:
    // 0x1ff524: 0xa2001c30  sb          $zero, 0x1C30($s0)
    ctx->pc = 0x1ff524u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7216), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff528: 0x8e031c48  lw          $v1, 0x1C48($s0)
    ctx->pc = 0x1ff528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7240)));
    // 0x1ff52c: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1FF52Cu;
    {
        const bool branch_taken_0x1ff52c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff52c) {
            ctx->pc = 0x1FF668u;
            goto label_1ff668;
        }
    }
    ctx->pc = 0x1FF534u;
    // 0x1ff534: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ff534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff538: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ff538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff53c: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1ff53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1ff540:
    // 0x1ff540: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ff540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff544: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ff544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff548:
    // 0x1ff548: 0x8e091c48  lw          $t1, 0x1C48($s0)
    ctx->pc = 0x1ff548u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7240)));
    // 0x1ff54c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1ff54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1ff550: 0x28c80020  slti        $t0, $a2, 0x20
    ctx->pc = 0x1ff550u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ff554: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x1ff554u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1ff558: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x1ff558u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1ff55c: 0xa1230002  sb          $v1, 0x2($t1)
    ctx->pc = 0x1ff55cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff560: 0x8e091c4c  lw          $t1, 0x1C4C($s0)
    ctx->pc = 0x1ff560u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7244)));
    // 0x1ff564: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x1ff564u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1ff568: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x1ff568u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1ff56c: 0xa1230002  sb          $v1, 0x2($t1)
    ctx->pc = 0x1ff56cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff570: 0x8e091c48  lw          $t1, 0x1C48($s0)
    ctx->pc = 0x1ff570u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7240)));
    // 0x1ff574: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x1ff574u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1ff578: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x1ff578u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1ff57c: 0xa1230005  sb          $v1, 0x5($t1)
    ctx->pc = 0x1ff57cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff580: 0x8e091c4c  lw          $t1, 0x1C4C($s0)
    ctx->pc = 0x1ff580u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7244)));
    // 0x1ff584: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x1ff584u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1ff588: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x1ff588u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1ff58c: 0xa1230005  sb          $v1, 0x5($t1)
    ctx->pc = 0x1ff58cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff590: 0x8e091c48  lw          $t1, 0x1C48($s0)
    ctx->pc = 0x1ff590u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7240)));
    // 0x1ff594: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x1ff594u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1ff598: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x1ff598u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1ff59c: 0xa1230008  sb          $v1, 0x8($t1)
    ctx->pc = 0x1ff59cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff5a0: 0x8e091c4c  lw          $t1, 0x1C4C($s0)
    ctx->pc = 0x1ff5a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7244)));
    // 0x1ff5a4: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x1ff5a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1ff5a8: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x1ff5a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1ff5ac: 0xa1230008  sb          $v1, 0x8($t1)
    ctx->pc = 0x1ff5acu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff5b0: 0x8e091c48  lw          $t1, 0x1C48($s0)
    ctx->pc = 0x1ff5b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7240)));
    // 0x1ff5b4: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x1ff5b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1ff5b8: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x1ff5b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1ff5bc: 0xa123000b  sb          $v1, 0xB($t1)
    ctx->pc = 0x1ff5bcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff5c0: 0x8e091c4c  lw          $t1, 0x1C4C($s0)
    ctx->pc = 0x1ff5c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7244)));
    // 0x1ff5c4: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x1ff5c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1ff5c8: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x1ff5c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1ff5cc: 0xa123000b  sb          $v1, 0xB($t1)
    ctx->pc = 0x1ff5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff5d0: 0x8e091c48  lw          $t1, 0x1C48($s0)
    ctx->pc = 0x1ff5d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7240)));
    // 0x1ff5d4: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x1ff5d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1ff5d8: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x1ff5d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1ff5dc: 0xa123000e  sb          $v1, 0xE($t1)
    ctx->pc = 0x1ff5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff5e0: 0x8e091c4c  lw          $t1, 0x1C4C($s0)
    ctx->pc = 0x1ff5e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7244)));
    // 0x1ff5e4: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x1ff5e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1ff5e8: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x1ff5e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1ff5ec: 0xa123000e  sb          $v1, 0xE($t1)
    ctx->pc = 0x1ff5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff5f0: 0x8e091c48  lw          $t1, 0x1C48($s0)
    ctx->pc = 0x1ff5f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7240)));
    // 0x1ff5f4: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x1ff5f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1ff5f8: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x1ff5f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1ff5fc: 0xa1230011  sb          $v1, 0x11($t1)
    ctx->pc = 0x1ff5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff600: 0x8e091c4c  lw          $t1, 0x1C4C($s0)
    ctx->pc = 0x1ff600u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7244)));
    // 0x1ff604: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x1ff604u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1ff608: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x1ff608u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1ff60c: 0xa1230011  sb          $v1, 0x11($t1)
    ctx->pc = 0x1ff60cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff610: 0x8e091c48  lw          $t1, 0x1C48($s0)
    ctx->pc = 0x1ff610u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7240)));
    // 0x1ff614: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x1ff614u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1ff618: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x1ff618u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1ff61c: 0xa1230014  sb          $v1, 0x14($t1)
    ctx->pc = 0x1ff61cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff620: 0x8e091c4c  lw          $t1, 0x1C4C($s0)
    ctx->pc = 0x1ff620u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7244)));
    // 0x1ff624: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x1ff624u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1ff628: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x1ff628u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1ff62c: 0xa1230014  sb          $v1, 0x14($t1)
    ctx->pc = 0x1ff62cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff630: 0x8e091c48  lw          $t1, 0x1C48($s0)
    ctx->pc = 0x1ff630u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7240)));
    // 0x1ff634: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x1ff634u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1ff638: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x1ff638u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1ff63c: 0xa1230017  sb          $v1, 0x17($t1)
    ctx->pc = 0x1ff63cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 23), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff640: 0x8e091c4c  lw          $t1, 0x1C4C($s0)
    ctx->pc = 0x1ff640u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7244)));
    // 0x1ff644: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x1ff644u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1ff648: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x1ff648u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1ff64c: 0xa1230017  sb          $v1, 0x17($t1)
    ctx->pc = 0x1ff64cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 23), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff650: 0x1500ffbd  bnez        $t0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x1FF650u;
    {
        const bool branch_taken_0x1ff650 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF650u;
            // 0x1ff654: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff650) {
            ctx->pc = 0x1FF548u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ff548;
        }
    }
    ctx->pc = 0x1FF658u;
    // 0x1ff658: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1ff658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1ff65c: 0x28e40020  slti        $a0, $a3, 0x20
    ctx->pc = 0x1ff65cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ff660: 0x1480ffb7  bnez        $a0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x1FF660u;
    {
        const bool branch_taken_0x1ff660 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF660u;
            // 0x1ff664: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff660) {
            ctx->pc = 0x1FF540u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ff540;
        }
    }
    ctx->pc = 0x1FF668u;
label_1ff668:
    // 0x1ff668: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ff668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff66c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ff66cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff670: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF670u;
            // 0x1ff674: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF678u;
    // 0x1ff678: 0x0  nop
    ctx->pc = 0x1ff678u;
    // NOP
    // 0x1ff67c: 0x0  nop
    ctx->pc = 0x1ff67cu;
    // NOP
}
