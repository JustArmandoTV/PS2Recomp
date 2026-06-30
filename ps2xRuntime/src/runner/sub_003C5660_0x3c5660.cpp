#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C5660
// Address: 0x3c5660 - 0x3c56e0
void sub_003C5660_0x3c5660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5660_0x3c5660");
#endif

    switch (ctx->pc) {
        case 0x3c56b0u: goto label_3c56b0;
        default: break;
    }

    ctx->pc = 0x3c5660u;

    // 0x3c5660: 0x90850055  lbu         $a1, 0x55($a0)
    ctx->pc = 0x3c5660u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 85)));
    // 0x3c5664: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x3c5664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x3c5668: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C5668u;
    {
        const bool branch_taken_0x3c5668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5668) {
            ctx->pc = 0x3C566Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5668u;
            // 0x3c566c: 0x30a30004  andi        $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C567Cu;
            goto label_3c567c;
        }
    }
    ctx->pc = 0x3C5670u;
    // 0x3c5670: 0x30a300fe  andi        $v1, $a1, 0xFE
    ctx->pc = 0x3c5670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)254);
    // 0x3c5674: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3C5674u;
    {
        const bool branch_taken_0x3c5674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5674u;
            // 0x3c5678: 0xa0830055  sb          $v1, 0x55($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5674) {
            ctx->pc = 0x3C568Cu;
            goto label_3c568c;
        }
    }
    ctx->pc = 0x3C567Cu;
label_3c567c:
    // 0x3c567c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C567Cu;
    {
        const bool branch_taken_0x3c567c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c567c) {
            ctx->pc = 0x3C5680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C567Cu;
            // 0x3c5680: 0x90830055  lbu         $v1, 0x55($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 85)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C5690u;
            goto label_3c5690;
        }
    }
    ctx->pc = 0x3C5684u;
    // 0x3c5684: 0x34a30001  ori         $v1, $a1, 0x1
    ctx->pc = 0x3c5684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x3c5688: 0xa0830055  sb          $v1, 0x55($a0)
    ctx->pc = 0x3c5688u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 85), (uint8_t)GPR_U32(ctx, 3));
label_3c568c:
    // 0x3c568c: 0x90830055  lbu         $v1, 0x55($a0)
    ctx->pc = 0x3c568cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 85)));
label_3c5690:
    // 0x3c5690: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x3c5690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x3c5694: 0xa0830055  sb          $v1, 0x55($a0)
    ctx->pc = 0x3c5694u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 85), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c5698: 0x90830055  lbu         $v1, 0x55($a0)
    ctx->pc = 0x3c5698u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 85)));
    // 0x3c569c: 0x306300fb  andi        $v1, $v1, 0xFB
    ctx->pc = 0x3c569cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)251);
    // 0x3c56a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C56A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C56A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C56A0u;
            // 0x3c56a4: 0xa0830055  sb          $v1, 0x55($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C56A8u;
    // 0x3c56a8: 0x0  nop
    ctx->pc = 0x3c56a8u;
    // NOP
    // 0x3c56ac: 0x0  nop
    ctx->pc = 0x3c56acu;
    // NOP
label_3c56b0:
    // 0x3c56b0: 0xe48c0058  swc1        $f12, 0x58($a0)
    ctx->pc = 0x3c56b0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x3c56b4: 0xe48d005c  swc1        $f13, 0x5C($a0)
    ctx->pc = 0x3c56b4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x3c56b8: 0xe4900060  swc1        $f16, 0x60($a0)
    ctx->pc = 0x3c56b8u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x3c56bc: 0xe48e0064  swc1        $f14, 0x64($a0)
    ctx->pc = 0x3c56bcu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x3c56c0: 0xe48f0068  swc1        $f15, 0x68($a0)
    ctx->pc = 0x3c56c0u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x3c56c4: 0xe491006c  swc1        $f17, 0x6C($a0)
    ctx->pc = 0x3c56c4u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x3c56c8: 0xe4920070  swc1        $f18, 0x70($a0)
    ctx->pc = 0x3c56c8u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x3c56cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3C56CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C56D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C56CCu;
            // 0x3c56d0: 0xe4930074  swc1        $f19, 0x74($a0) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C56D4u;
    // 0x3c56d4: 0x0  nop
    ctx->pc = 0x3c56d4u;
    // NOP
    // 0x3c56d8: 0x0  nop
    ctx->pc = 0x3c56d8u;
    // NOP
    // 0x3c56dc: 0x0  nop
    ctx->pc = 0x3c56dcu;
    // NOP
}
