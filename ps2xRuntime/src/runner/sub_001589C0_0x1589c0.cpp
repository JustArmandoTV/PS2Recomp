#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001589C0
// Address: 0x1589c0 - 0x158b80
void sub_001589C0_0x1589c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001589C0_0x1589c0");
#endif

    switch (ctx->pc) {
        case 0x158a34u: goto label_158a34;
        default: break;
    }

    ctx->pc = 0x1589c0u;

    // 0x1589c0: 0x8f8383a0  lw          $v1, -0x7C60($gp)
    ctx->pc = 0x1589c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
    // 0x1589c4: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1589C4u;
    {
        const bool branch_taken_0x1589c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1589c4) {
            ctx->pc = 0x1589C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1589C4u;
            // 0x1589c8: 0x8f8283a4  lw          $v0, -0x7C5C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935460)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1589D4u;
            goto label_1589d4;
        }
    }
    ctx->pc = 0x1589CCu;
    // 0x1589cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1589CCu;
    {
        const bool branch_taken_0x1589cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1589D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1589CCu;
            // 0x1589d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1589cc) {
            ctx->pc = 0x1589F0u;
            goto label_1589f0;
        }
    }
    ctx->pc = 0x1589D4u;
label_1589d4:
    // 0x1589d4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1589D4u;
    {
        const bool branch_taken_0x1589d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1589d4) {
            ctx->pc = 0x1589D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1589D4u;
            // 0x1589d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1589E4u;
            goto label_1589e4;
        }
    }
    ctx->pc = 0x1589DCu;
    // 0x1589dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1589DCu;
    {
        const bool branch_taken_0x1589dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1589E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1589DCu;
            // 0x1589e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1589dc) {
            ctx->pc = 0x1589F0u;
            goto label_1589f0;
        }
    }
    ctx->pc = 0x1589E4u;
label_1589e4:
    // 0x1589e4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1589e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x1589e8: 0xac43cc3c  sw          $v1, -0x33C4($v0)
    ctx->pc = 0x1589e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954044), GPR_U32(ctx, 3));
    // 0x1589ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1589ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1589f0:
    // 0x1589f0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1589F0u;
    {
        const bool branch_taken_0x1589f0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1589f0) {
            ctx->pc = 0x158A00u;
            goto label_158a00;
        }
    }
    ctx->pc = 0x1589F8u;
    // 0x1589f8: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x1589F8u;
    {
        const bool branch_taken_0x1589f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1589FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1589F8u;
            // 0x1589fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1589f8) {
            ctx->pc = 0x158B78u;
            goto label_158b78;
        }
    }
    ctx->pc = 0x158A00u;
label_158a00:
    // 0x158a00: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x158a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x158a04: 0x3c09006c  lui         $t1, 0x6C
    ctx->pc = 0x158a04u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)108 << 16));
    // 0x158a08: 0xac44cc40  sw          $a0, -0x33C0($v0)
    ctx->pc = 0x158a08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954048), GPR_U32(ctx, 4));
    // 0x158a0c: 0x25297c10  addiu       $t1, $t1, 0x7C10
    ctx->pc = 0x158a0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 31760));
    // 0x158a10: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x158a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x158a14: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x158a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x158a18: 0xac49cc30  sw          $t1, -0x33D0($v0)
    ctx->pc = 0x158a18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954032), GPR_U32(ctx, 9));
    // 0x158a1c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x158a1cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158a20: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x158a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x158a24: 0xac64cc38  sw          $a0, -0x33C8($v1)
    ctx->pc = 0x158a24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954040), GPR_U32(ctx, 4));
    // 0x158a28: 0xac40cc34  sw          $zero, -0x33CC($v0)
    ctx->pc = 0x158a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954036), GPR_U32(ctx, 0));
    // 0x158a2c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x158a2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158a30: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x158a30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_158a34:
    // 0x158a34: 0x25430014  addiu       $v1, $t2, 0x14
    ctx->pc = 0x158a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 20));
    // 0x158a38: 0x25420028  addiu       $v0, $t2, 0x28
    ctx->pc = 0x158a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 40));
    // 0x158a3c: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x158a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x158a40: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x158a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x158a44: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x158a44u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x158a48: 0x2542003c  addiu       $v0, $t2, 0x3C
    ctx->pc = 0x158a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 60));
    // 0x158a4c: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x158a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x158a50: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x158a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x158a54: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x158a54u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
    // 0x158a58: 0x25420050  addiu       $v0, $t2, 0x50
    ctx->pc = 0x158a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 80));
    // 0x158a5c: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x158a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x158a60: 0x1023821  addu        $a3, $t0, $v0
    ctx->pc = 0x158a60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x158a64: 0xad200010  sw          $zero, 0x10($t1)
    ctx->pc = 0x158a64u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 0));
    // 0x158a68: 0x25420064  addiu       $v0, $t2, 0x64
    ctx->pc = 0x158a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 100));
    // 0x158a6c: 0xad240014  sw          $a0, 0x14($t1)
    ctx->pc = 0x158a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 4));
    // 0x158a70: 0x1023021  addu        $a2, $t0, $v0
    ctx->pc = 0x158a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x158a74: 0xad200018  sw          $zero, 0x18($t1)
    ctx->pc = 0x158a74u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 0));
    // 0x158a78: 0x25420078  addiu       $v0, $t2, 0x78
    ctx->pc = 0x158a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 120));
    // 0x158a7c: 0xad20001c  sw          $zero, 0x1C($t1)
    ctx->pc = 0x158a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 0));
    // 0x158a80: 0x1022821  addu        $a1, $t0, $v0
    ctx->pc = 0x158a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x158a84: 0xad200020  sw          $zero, 0x20($t1)
    ctx->pc = 0x158a84u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 0));
    // 0x158a88: 0x2542008c  addiu       $v0, $t2, 0x8C
    ctx->pc = 0x158a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 140));
    // 0x158a8c: 0xad200024  sw          $zero, 0x24($t1)
    ctx->pc = 0x158a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 0));
    // 0x158a90: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x158a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x158a94: 0xad230028  sw          $v1, 0x28($t1)
    ctx->pc = 0x158a94u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 3));
    // 0x158a98: 0x254a00a0  addiu       $t2, $t2, 0xA0
    ctx->pc = 0x158a98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 160));
    // 0x158a9c: 0xad20002c  sw          $zero, 0x2C($t1)
    ctx->pc = 0x158a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 44), GPR_U32(ctx, 0));
    // 0x158aa0: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x158aa0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x158aa4: 0xad200030  sw          $zero, 0x30($t1)
    ctx->pc = 0x158aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 48), GPR_U32(ctx, 0));
    // 0x158aa8: 0x10a1821  addu        $v1, $t0, $t2
    ctx->pc = 0x158aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x158aac: 0xad200034  sw          $zero, 0x34($t1)
    ctx->pc = 0x158aacu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 52), GPR_U32(ctx, 0));
    // 0x158ab0: 0x29620400  slti        $v0, $t3, 0x400
    ctx->pc = 0x158ab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x158ab4: 0xad200038  sw          $zero, 0x38($t1)
    ctx->pc = 0x158ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 56), GPR_U32(ctx, 0));
    // 0x158ab8: 0xad27003c  sw          $a3, 0x3C($t1)
    ctx->pc = 0x158ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 60), GPR_U32(ctx, 7));
    // 0x158abc: 0xad200040  sw          $zero, 0x40($t1)
    ctx->pc = 0x158abcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 64), GPR_U32(ctx, 0));
    // 0x158ac0: 0xad200044  sw          $zero, 0x44($t1)
    ctx->pc = 0x158ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 68), GPR_U32(ctx, 0));
    // 0x158ac4: 0xad200048  sw          $zero, 0x48($t1)
    ctx->pc = 0x158ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 72), GPR_U32(ctx, 0));
    // 0x158ac8: 0xad20004c  sw          $zero, 0x4C($t1)
    ctx->pc = 0x158ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 76), GPR_U32(ctx, 0));
    // 0x158acc: 0xad260050  sw          $a2, 0x50($t1)
    ctx->pc = 0x158accu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 80), GPR_U32(ctx, 6));
    // 0x158ad0: 0xad200054  sw          $zero, 0x54($t1)
    ctx->pc = 0x158ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 84), GPR_U32(ctx, 0));
    // 0x158ad4: 0xad200058  sw          $zero, 0x58($t1)
    ctx->pc = 0x158ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 88), GPR_U32(ctx, 0));
    // 0x158ad8: 0xad20005c  sw          $zero, 0x5C($t1)
    ctx->pc = 0x158ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 92), GPR_U32(ctx, 0));
    // 0x158adc: 0xad200060  sw          $zero, 0x60($t1)
    ctx->pc = 0x158adcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 96), GPR_U32(ctx, 0));
    // 0x158ae0: 0xad250064  sw          $a1, 0x64($t1)
    ctx->pc = 0x158ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 100), GPR_U32(ctx, 5));
    // 0x158ae4: 0xad200068  sw          $zero, 0x68($t1)
    ctx->pc = 0x158ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 104), GPR_U32(ctx, 0));
    // 0x158ae8: 0xad20006c  sw          $zero, 0x6C($t1)
    ctx->pc = 0x158ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 108), GPR_U32(ctx, 0));
    // 0x158aec: 0xad200070  sw          $zero, 0x70($t1)
    ctx->pc = 0x158aecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 112), GPR_U32(ctx, 0));
    // 0x158af0: 0xad200074  sw          $zero, 0x74($t1)
    ctx->pc = 0x158af0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 116), GPR_U32(ctx, 0));
    // 0x158af4: 0xad240078  sw          $a0, 0x78($t1)
    ctx->pc = 0x158af4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 120), GPR_U32(ctx, 4));
    // 0x158af8: 0xad20007c  sw          $zero, 0x7C($t1)
    ctx->pc = 0x158af8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 124), GPR_U32(ctx, 0));
    // 0x158afc: 0xad200080  sw          $zero, 0x80($t1)
    ctx->pc = 0x158afcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 128), GPR_U32(ctx, 0));
    // 0x158b00: 0xad200084  sw          $zero, 0x84($t1)
    ctx->pc = 0x158b00u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 132), GPR_U32(ctx, 0));
    // 0x158b04: 0xad200088  sw          $zero, 0x88($t1)
    ctx->pc = 0x158b04u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 136), GPR_U32(ctx, 0));
    // 0x158b08: 0xad23008c  sw          $v1, 0x8C($t1)
    ctx->pc = 0x158b08u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 140), GPR_U32(ctx, 3));
    // 0x158b0c: 0xad200090  sw          $zero, 0x90($t1)
    ctx->pc = 0x158b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 144), GPR_U32(ctx, 0));
    // 0x158b10: 0xad200094  sw          $zero, 0x94($t1)
    ctx->pc = 0x158b10u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 148), GPR_U32(ctx, 0));
    // 0x158b14: 0xad200098  sw          $zero, 0x98($t1)
    ctx->pc = 0x158b14u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 152), GPR_U32(ctx, 0));
    // 0x158b18: 0xad20009c  sw          $zero, 0x9C($t1)
    ctx->pc = 0x158b18u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 156), GPR_U32(ctx, 0));
    // 0x158b1c: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x158B1Cu;
    {
        const bool branch_taken_0x158b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158B1Cu;
            // 0x158b20: 0x252900a0  addiu       $t1, $t1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b1c) {
            ctx->pc = 0x158A34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_158a34;
        }
    }
    ctx->pc = 0x158B24u;
    // 0x158b24: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x158b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x158b28: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x158b28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x158b2c: 0xac40cbfc  sw          $zero, -0x3404($v0)
    ctx->pc = 0x158b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953980), GPR_U32(ctx, 0));
    // 0x158b30: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x158b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x158b34: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x158b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x158b38: 0x24a5cc10  addiu       $a1, $a1, -0x33F0
    ctx->pc = 0x158b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954000));
    // 0x158b3c: 0x24427c24  addiu       $v0, $v0, 0x7C24
    ctx->pc = 0x158b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31780));
    // 0x158b40: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x158b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x158b44: 0xaf8283a8  sw          $v0, -0x7C58($gp)
    ctx->pc = 0x158b44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935464), GPR_U32(ctx, 2));
    // 0x158b48: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x158b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x158b4c: 0xaf8883ac  sw          $t0, -0x7C54($gp)
    ctx->pc = 0x158b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935468), GPR_U32(ctx, 8));
    // 0x158b50: 0x8c47cc3c  lw          $a3, -0x33C4($v0)
    ctx->pc = 0x158b50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954044)));
    // 0x158b54: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x158b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x158b58: 0xac677c1c  sw          $a3, 0x7C1C($v1)
    ctx->pc = 0x158b58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31772), GPR_U32(ctx, 7));
    // 0x158b5c: 0x8c46cc40  lw          $a2, -0x33C0($v0)
    ctx->pc = 0x158b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954048)));
    // 0x158b60: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x158b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x158b64: 0xac60cc10  sw          $zero, -0x33F0($v1)
    ctx->pc = 0x158b64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954000), GPR_U32(ctx, 0));
    // 0x158b68: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x158b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x158b6c: 0xac867c20  sw          $a2, 0x7C20($a0)
    ctx->pc = 0x158b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 31776), GPR_U32(ctx, 6));
    // 0x158b70: 0xac457c10  sw          $a1, 0x7C10($v0)
    ctx->pc = 0x158b70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31760), GPR_U32(ctx, 5));
    // 0x158b74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x158b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158b78:
    // 0x158b78: 0x3e00008  jr          $ra
    ctx->pc = 0x158B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x158B80u;
}
