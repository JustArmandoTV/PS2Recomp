#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B94F0
// Address: 0x3b94f0 - 0x3b9840
void sub_003B94F0_0x3b94f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B94F0_0x3b94f0");
#endif

    switch (ctx->pc) {
        case 0x3b95b4u: goto label_3b95b4;
        case 0x3b95d0u: goto label_3b95d0;
        case 0x3b95ecu: goto label_3b95ec;
        case 0x3b9688u: goto label_3b9688;
        case 0x3b9698u: goto label_3b9698;
        case 0x3b96c4u: goto label_3b96c4;
        case 0x3b974cu: goto label_3b974c;
        case 0x3b9774u: goto label_3b9774;
        case 0x3b978cu: goto label_3b978c;
        case 0x3b9804u: goto label_3b9804;
        case 0x3b981cu: goto label_3b981c;
        default: break;
    }

    ctx->pc = 0x3b94f0u;

    // 0x3b94f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3b94f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3b94f4: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x3b94f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3b94f8: 0x24428bc0  addiu       $v0, $v0, -0x7440
    ctx->pc = 0x3b94f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937536));
    // 0x3b94fc: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x3b94fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
    // 0x3b9500: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3b9500u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3b9504: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b9504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b9508: 0xe48c0004  swc1        $f12, 0x4($a0)
    ctx->pc = 0x3b9508u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3b950c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b950cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b9510: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3b9510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3b9514: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3b9514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x3b9518: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3b9518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b951c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x3b951cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x3b9520: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3b9520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3b9524: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3b9524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b9528: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3b9528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b952c: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3b952cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b9530: 0xe4830014  swc1        $f3, 0x14($a0)
    ctx->pc = 0x3b9530u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x3b9534: 0xe4820018  swc1        $f2, 0x18($a0)
    ctx->pc = 0x3b9534u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x3b9538: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x3b9538u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x3b953c: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x3b953cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x3b9540: 0xa0800040  sb          $zero, 0x40($a0)
    ctx->pc = 0x3b9540u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b9544: 0xa0850041  sb          $a1, 0x41($a0)
    ctx->pc = 0x3b9544u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 65), (uint8_t)GPR_U32(ctx, 5));
    // 0x3b9548: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x3b9548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x3b954c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x3b954cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x3b9550: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x3b9550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x3b9554: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x3b9554u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x3b9558: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x3b9558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x3b955c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B955Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B955Cu;
            // 0x3b9560: 0xac800038  sw          $zero, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B9564u;
    // 0x3b9564: 0x0  nop
    ctx->pc = 0x3b9564u;
    // NOP
    // 0x3b9568: 0x0  nop
    ctx->pc = 0x3b9568u;
    // NOP
    // 0x3b956c: 0x0  nop
    ctx->pc = 0x3b956cu;
    // NOP
    // 0x3b9570: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9570u;
            // 0x3b9574: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B9578u;
    // 0x3b9578: 0x0  nop
    ctx->pc = 0x3b9578u;
    // NOP
    // 0x3b957c: 0x0  nop
    ctx->pc = 0x3b957cu;
    // NOP
    // 0x3b9580: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b9580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3b9584: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b9584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b9588: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b9588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b958c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b958cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b9590: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b9590u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9594: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b9594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b9598: 0x24d10038  addiu       $s1, $a2, 0x38
    ctx->pc = 0x3b9598u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 56));
    // 0x3b959c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3b959cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3b95a0: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x3b95a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x3b95a4: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x3b95a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x3b95a8: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x3b95a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3b95ac: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3B95ACu;
    {
        const bool branch_taken_0x3b95ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B95B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B95ACu;
            // 0x3b95b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b95ac) {
            ctx->pc = 0x3B9608u;
            goto label_3b9608;
        }
    }
    ctx->pc = 0x3B95B4u;
label_3b95b4:
    // 0x3b95b4: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x3b95b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x3b95b8: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x3b95b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x3b95bc: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x3b95bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3b95c0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3b95c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3b95c4: 0xa7a20050  sh          $v0, 0x50($sp)
    ctx->pc = 0x3b95c4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 80), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b95c8: 0xc0ee6c8  jal         func_3B9B20
    ctx->pc = 0x3B95C8u;
    SET_GPR_U32(ctx, 31, 0x3B95D0u);
    ctx->pc = 0x3B95CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B95C8u;
            // 0x3b95cc: 0xafb10054  sw          $s1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9B20u;
    if (runtime->hasFunction(0x3B9B20u)) {
        auto targetFn = runtime->lookupFunction(0x3B9B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B95D0u; }
        if (ctx->pc != 0x3B95D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9B20_0x3b9b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B95D0u; }
        if (ctx->pc != 0x3B95D0u) { return; }
    }
    ctx->pc = 0x3B95D0u;
label_3b95d0:
    // 0x3b95d0: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3b95d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3b95d4: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x3b95d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x3b95d8: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x3b95d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3b95dc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3b95dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3b95e0: 0xa7a20040  sh          $v0, 0x40($sp)
    ctx->pc = 0x3b95e0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b95e4: 0xc0ee6c8  jal         func_3B9B20
    ctx->pc = 0x3B95E4u;
    SET_GPR_U32(ctx, 31, 0x3B95ECu);
    ctx->pc = 0x3B95E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B95E4u;
            // 0x3b95e8: 0xafb10044  sw          $s1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9B20u;
    if (runtime->hasFunction(0x3B9B20u)) {
        auto targetFn = runtime->lookupFunction(0x3B9B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B95ECu; }
        if (ctx->pc != 0x3B95ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9B20_0x3b9b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B95ECu; }
        if (ctx->pc != 0x3B95ECu) { return; }
    }
    ctx->pc = 0x3B95ECu;
label_3b95ec:
    // 0x3b95ec: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3b95ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3b95f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3b95f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3b95f4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x3b95f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3b95f8: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x3b95f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3b95fc: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3B95FCu;
    {
        const bool branch_taken_0x3b95fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B95FCu;
            // 0x3b9600: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b95fc) {
            ctx->pc = 0x3B95B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b95b4;
        }
    }
    ctx->pc = 0x3B9604u;
    // 0x3b9604: 0x0  nop
    ctx->pc = 0x3b9604u;
    // NOP
label_3b9608:
    // 0x3b9608: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b9608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b960c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b960cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b9610: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b9610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b9614: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b9614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b9618: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B961Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9618u;
            // 0x3b961c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B9620u;
    // 0x3b9620: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x3b9620u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b9624: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B9624u;
    {
        const bool branch_taken_0x3b9624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9624u;
            // 0x3b9628: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9624) {
            ctx->pc = 0x3B9648u;
            goto label_3b9648;
        }
    }
    ctx->pc = 0x3B962Cu;
    // 0x3b962c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3b962cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x3b9630: 0x8c63f550  lw          $v1, -0xAB0($v1)
    ctx->pc = 0x3b9630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964560)));
    // 0x3b9634: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3b9634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3b9638: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3b9638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3b963c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B963Cu;
    {
        const bool branch_taken_0x3b963c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b963c) {
            ctx->pc = 0x3B9648u;
            goto label_3b9648;
        }
    }
    ctx->pc = 0x3B9644u;
    // 0x3b9644: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b9644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b9648:
    // 0x3b9648: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B9650u;
    // 0x3b9650: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b9650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3b9654: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3b9654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3b9658: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b9658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3b965c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b965cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b9660: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3b9660u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9664: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b9664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b9668: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3b9668u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b966c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b966cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b9670: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x3b9670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3b9674: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3b9674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3b9678: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x3b9678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
    // 0x3b967c: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x3b967cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3b9680: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x3B9680u;
    SET_GPR_U32(ctx, 31, 0x3B9688u);
    ctx->pc = 0x3B9684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9680u;
            // 0x3b9684: 0x26640008  addiu       $a0, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9688u; }
        if (ctx->pc != 0x3B9688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9688u; }
        if (ctx->pc != 0x3B9688u) { return; }
    }
    ctx->pc = 0x3B9688u;
label_3b9688:
    // 0x3b9688: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3b9688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3b968c: 0x26510014  addiu       $s1, $s2, 0x14
    ctx->pc = 0x3b968cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x3b9690: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3B9690u;
    {
        const bool branch_taken_0x3b9690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9690u;
            // 0x3b9694: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9690) {
            ctx->pc = 0x3B96D8u;
            goto label_3b96d8;
        }
    }
    ctx->pc = 0x3B9698u;
label_3b9698:
    // 0x3b9698: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3b9698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b969c: 0x26640008  addiu       $a0, $s3, 0x8
    ctx->pc = 0x3b969cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3b96a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3b96a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b96a4: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x3b96a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x3b96a8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3b96a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3b96ac: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x3b96acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x3b96b0: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x3b96b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x3b96b4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x3b96b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3b96b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b96b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b96bc: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x3B96BCu;
    SET_GPR_U32(ctx, 31, 0x3B96C4u);
    ctx->pc = 0x3B96C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B96BCu;
            // 0x3b96c0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B96C4u; }
        if (ctx->pc != 0x3B96C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B96C4u; }
        if (ctx->pc != 0x3B96C4u) { return; }
    }
    ctx->pc = 0x3B96C4u;
label_3b96c4:
    // 0x3b96c4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3b96c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3b96c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3b96c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3b96cc: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x3b96ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3b96d0: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x3B96D0u;
    {
        const bool branch_taken_0x3b96d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B96D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B96D0u;
            // 0x3b96d4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b96d0) {
            ctx->pc = 0x3B9698u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b9698;
        }
    }
    ctx->pc = 0x3B96D8u;
label_3b96d8:
    // 0x3b96d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3b96d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b96dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b96dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b96e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b96e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b96e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b96e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b96e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b96e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b96ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3B96ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B96F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B96ECu;
            // 0x3b96f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B96F4u;
    // 0x3b96f4: 0x0  nop
    ctx->pc = 0x3b96f4u;
    // NOP
    // 0x3b96f8: 0x0  nop
    ctx->pc = 0x3b96f8u;
    // NOP
    // 0x3b96fc: 0x0  nop
    ctx->pc = 0x3b96fcu;
    // NOP
    // 0x3b9700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b9700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b9704: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b9704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b9708: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b9708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b970c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b970cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b9710: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b9710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9714: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3B9714u;
    {
        const bool branch_taken_0x3b9714 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9714u;
            // 0x3b9718: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9714) {
            ctx->pc = 0x3B978Cu;
            goto label_3b978c;
        }
    }
    ctx->pc = 0x3B971Cu;
    // 0x3b971c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3b971cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3b9720: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3b9720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3b9724: 0x24428bd0  addiu       $v0, $v0, -0x7430
    ctx->pc = 0x3b9724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937552));
    // 0x3b9728: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B9728u;
    {
        const bool branch_taken_0x3b9728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B972Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9728u;
            // 0x3b972c: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9728) {
            ctx->pc = 0x3B974Cu;
            goto label_3b974c;
        }
    }
    ctx->pc = 0x3B9730u;
    // 0x3b9730: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B9730u;
    {
        const bool branch_taken_0x3b9730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9730) {
            ctx->pc = 0x3B9734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9730u;
            // 0x3b9734: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B9750u;
            goto label_3b9750;
        }
    }
    ctx->pc = 0x3B9738u;
    // 0x3b9738: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x3b9738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x3b973c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B973Cu;
    {
        const bool branch_taken_0x3b973c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b973c) {
            ctx->pc = 0x3B974Cu;
            goto label_3b974c;
        }
    }
    ctx->pc = 0x3B9744u;
    // 0x3b9744: 0xc0ee62c  jal         func_3B98B0
    ctx->pc = 0x3B9744u;
    SET_GPR_U32(ctx, 31, 0x3B974Cu);
    ctx->pc = 0x3B98B0u;
    if (runtime->hasFunction(0x3B98B0u)) {
        auto targetFn = runtime->lookupFunction(0x3B98B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B974Cu; }
        if (ctx->pc != 0x3B974Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B98B0_0x3b98b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B974Cu; }
        if (ctx->pc != 0x3B974Cu) { return; }
    }
    ctx->pc = 0x3B974Cu;
label_3b974c:
    // 0x3b974c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3b974cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3b9750:
    // 0x3b9750: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B9750u;
    {
        const bool branch_taken_0x3b9750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9750) {
            ctx->pc = 0x3B9754u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9750u;
            // 0x3b9754: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B9778u;
            goto label_3b9778;
        }
    }
    ctx->pc = 0x3B9758u;
    // 0x3b9758: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B9758u;
    {
        const bool branch_taken_0x3b9758 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9758) {
            ctx->pc = 0x3B9774u;
            goto label_3b9774;
        }
    }
    ctx->pc = 0x3B9760u;
    // 0x3b9760: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x3b9760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3b9764: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B9764u;
    {
        const bool branch_taken_0x3b9764 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9764) {
            ctx->pc = 0x3B9774u;
            goto label_3b9774;
        }
    }
    ctx->pc = 0x3B976Cu;
    // 0x3b976c: 0xc0ee62c  jal         func_3B98B0
    ctx->pc = 0x3B976Cu;
    SET_GPR_U32(ctx, 31, 0x3B9774u);
    ctx->pc = 0x3B98B0u;
    if (runtime->hasFunction(0x3B98B0u)) {
        auto targetFn = runtime->lookupFunction(0x3B98B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9774u; }
        if (ctx->pc != 0x3B9774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B98B0_0x3b98b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9774u; }
        if (ctx->pc != 0x3B9774u) { return; }
    }
    ctx->pc = 0x3B9774u;
label_3b9774:
    // 0x3b9774: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3b9774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3b9778:
    // 0x3b9778: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b9778u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3b977c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B977Cu;
    {
        const bool branch_taken_0x3b977c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3b977c) {
            ctx->pc = 0x3B9780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B977Cu;
            // 0x3b9780: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B9790u;
            goto label_3b9790;
        }
    }
    ctx->pc = 0x3B9784u;
    // 0x3b9784: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3B9784u;
    SET_GPR_U32(ctx, 31, 0x3B978Cu);
    ctx->pc = 0x3B9788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9784u;
            // 0x3b9788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B978Cu; }
        if (ctx->pc != 0x3B978Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B978Cu; }
        if (ctx->pc != 0x3B978Cu) { return; }
    }
    ctx->pc = 0x3B978Cu;
label_3b978c:
    // 0x3b978c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b978cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b9790:
    // 0x3b9790: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b9790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b9794: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b9794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b9798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b9798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b979c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B979Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B97A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B979Cu;
            // 0x3b97a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B97A4u;
    // 0x3b97a4: 0x0  nop
    ctx->pc = 0x3b97a4u;
    // NOP
    // 0x3b97a8: 0x0  nop
    ctx->pc = 0x3b97a8u;
    // NOP
    // 0x3b97ac: 0x0  nop
    ctx->pc = 0x3b97acu;
    // NOP
    // 0x3b97b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b97b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b97b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b97b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b97b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b97b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b97bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b97bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b97c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b97c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b97c4: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3B97C4u;
    {
        const bool branch_taken_0x3b97c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B97C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B97C4u;
            // 0x3b97c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b97c4) {
            ctx->pc = 0x3B981Cu;
            goto label_3b981c;
        }
    }
    ctx->pc = 0x3B97CCu;
    // 0x3b97cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3b97ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3b97d0: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x3b97d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3b97d4: 0x24638bf0  addiu       $v1, $v1, -0x7410
    ctx->pc = 0x3b97d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937584));
    // 0x3b97d8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3B97D8u;
    {
        const bool branch_taken_0x3b97d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B97DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B97D8u;
            // 0x3b97dc: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b97d8) {
            ctx->pc = 0x3B9804u;
            goto label_3b9804;
        }
    }
    ctx->pc = 0x3B97E0u;
    // 0x3b97e0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B97E0u;
    {
        const bool branch_taken_0x3b97e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b97e0) {
            ctx->pc = 0x3B97E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B97E0u;
            // 0x3b97e4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B9808u;
            goto label_3b9808;
        }
    }
    ctx->pc = 0x3B97E8u;
    // 0x3b97e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B97E8u;
    {
        const bool branch_taken_0x3b97e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b97e8) {
            ctx->pc = 0x3B9804u;
            goto label_3b9804;
        }
    }
    ctx->pc = 0x3B97F0u;
    // 0x3b97f0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3b97f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3b97f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B97F4u;
    {
        const bool branch_taken_0x3b97f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b97f4) {
            ctx->pc = 0x3B9804u;
            goto label_3b9804;
        }
    }
    ctx->pc = 0x3B97FCu;
    // 0x3b97fc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3B97FCu;
    SET_GPR_U32(ctx, 31, 0x3B9804u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9804u; }
        if (ctx->pc != 0x3B9804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9804u; }
        if (ctx->pc != 0x3B9804u) { return; }
    }
    ctx->pc = 0x3B9804u;
label_3b9804:
    // 0x3b9804: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3b9804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3b9808:
    // 0x3b9808: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b9808u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3b980c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B980Cu;
    {
        const bool branch_taken_0x3b980c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3b980c) {
            ctx->pc = 0x3B9810u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B980Cu;
            // 0x3b9810: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B9820u;
            goto label_3b9820;
        }
    }
    ctx->pc = 0x3B9814u;
    // 0x3b9814: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3B9814u;
    SET_GPR_U32(ctx, 31, 0x3B981Cu);
    ctx->pc = 0x3B9818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9814u;
            // 0x3b9818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B981Cu; }
        if (ctx->pc != 0x3B981Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B981Cu; }
        if (ctx->pc != 0x3B981Cu) { return; }
    }
    ctx->pc = 0x3B981Cu;
label_3b981c:
    // 0x3b981c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b981cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b9820:
    // 0x3b9820: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b9820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b9824: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b9824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b9828: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b9828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b982c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B982Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B982Cu;
            // 0x3b9830: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B9834u;
    // 0x3b9834: 0x0  nop
    ctx->pc = 0x3b9834u;
    // NOP
    // 0x3b9838: 0x0  nop
    ctx->pc = 0x3b9838u;
    // NOP
    // 0x3b983c: 0x0  nop
    ctx->pc = 0x3b983cu;
    // NOP
}
