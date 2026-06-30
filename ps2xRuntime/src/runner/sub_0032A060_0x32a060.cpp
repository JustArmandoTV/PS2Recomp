#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032A060
// Address: 0x32a060 - 0x32a160
void sub_0032A060_0x32a060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A060_0x32a060");
#endif

    switch (ctx->pc) {
        case 0x32a0a0u: goto label_32a0a0;
        case 0x32a0d0u: goto label_32a0d0;
        case 0x32a128u: goto label_32a128;
        case 0x32a140u: goto label_32a140;
        default: break;
    }

    ctx->pc = 0x32a060u;

    // 0x32a060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32a060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32a064: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32a064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x32a068: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32a068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32a06c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x32a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x32a070: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32a070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32a074: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32a074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32a078: 0x8c470e80  lw          $a3, 0xE80($v0)
    ctx->pc = 0x32a078u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x32a07c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32a07cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a080: 0x8cf1078c  lw          $s1, 0x78C($a3)
    ctx->pc = 0x32a080u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1932)));
    // 0x32a084: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x32a084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x32a088: 0x8c46b6b0  lw          $a2, -0x4950($v0)
    ctx->pc = 0x32a088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
    // 0x32a08c: 0xac910030  sw          $s1, 0x30($a0)
    ctx->pc = 0x32a08cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 17));
    // 0x32a090: 0x8c647378  lw          $a0, 0x7378($v1)
    ctx->pc = 0x32a090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29560)));
    // 0x32a094: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x32a094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x32a098: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x32A098u;
    SET_GPR_U32(ctx, 31, 0x32A0A0u);
    ctx->pc = 0x32A09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A098u;
            // 0x32a09c: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A0A0u; }
        if (ctx->pc != 0x32A0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A0A0u; }
        if (ctx->pc != 0x32A0A0u) { return; }
    }
    ctx->pc = 0x32A0A0u;
label_32a0a0:
    // 0x32a0a0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x32a0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32a0a4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x32a0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x32a0a8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x32a0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32a0ac: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x32a0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x32a0b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32a0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32a0b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32a0b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a0b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32a0b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x32A0BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A0BCu;
            // 0x32a0c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32A0C4u;
    // 0x32a0c4: 0x0  nop
    ctx->pc = 0x32a0c4u;
    // NOP
    // 0x32a0c8: 0x0  nop
    ctx->pc = 0x32a0c8u;
    // NOP
    // 0x32a0cc: 0x0  nop
    ctx->pc = 0x32a0ccu;
    // NOP
label_32a0d0:
    // 0x32a0d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32a0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32a0d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32a0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32a0d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32a0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32a0dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32a0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32a0e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32a0e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a0e4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x32A0E4u;
    {
        const bool branch_taken_0x32a0e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A0E4u;
            // 0x32a0e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a0e4) {
            ctx->pc = 0x32A140u;
            goto label_32a140;
        }
    }
    ctx->pc = 0x32A0ECu;
    // 0x32a0ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x32a0f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x32a0f4: 0x246346b0  addiu       $v1, $v1, 0x46B0
    ctx->pc = 0x32a0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18096));
    // 0x32a0f8: 0x244246e8  addiu       $v0, $v0, 0x46E8
    ctx->pc = 0x32a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18152));
    // 0x32a0fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32a0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x32a100: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32A100u;
    {
        const bool branch_taken_0x32a100 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A100u;
            // 0x32a104: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a100) {
            ctx->pc = 0x32A128u;
            goto label_32a128;
        }
    }
    ctx->pc = 0x32A108u;
    // 0x32a108: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32a108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x32a10c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x32a110: 0x24634760  addiu       $v1, $v1, 0x4760
    ctx->pc = 0x32a110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18272));
    // 0x32a114: 0x24424798  addiu       $v0, $v0, 0x4798
    ctx->pc = 0x32a114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18328));
    // 0x32a118: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32a118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x32a11c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32a11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a120: 0xc0ca858  jal         func_32A160
    ctx->pc = 0x32A120u;
    SET_GPR_U32(ctx, 31, 0x32A128u);
    ctx->pc = 0x32A124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A120u;
            // 0x32a124: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32A160u;
    if (runtime->hasFunction(0x32A160u)) {
        auto targetFn = runtime->lookupFunction(0x32A160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A128u; }
        if (ctx->pc != 0x32A128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032A160_0x32a160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A128u; }
        if (ctx->pc != 0x32A128u) { return; }
    }
    ctx->pc = 0x32A128u;
label_32a128:
    // 0x32a128: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x32a128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x32a12c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32a12cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32a130: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32A130u;
    {
        const bool branch_taken_0x32a130 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x32a130) {
            ctx->pc = 0x32A134u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32A130u;
            // 0x32a134: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32A144u;
            goto label_32a144;
        }
    }
    ctx->pc = 0x32A138u;
    // 0x32a138: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x32A138u;
    SET_GPR_U32(ctx, 31, 0x32A140u);
    ctx->pc = 0x32A13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A138u;
            // 0x32a13c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A140u; }
        if (ctx->pc != 0x32A140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A140u; }
        if (ctx->pc != 0x32A140u) { return; }
    }
    ctx->pc = 0x32A140u;
label_32a140:
    // 0x32a140: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32a140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32a144:
    // 0x32a144: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32a144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32a148: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32a148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a14c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32a14cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a150: 0x3e00008  jr          $ra
    ctx->pc = 0x32A150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A150u;
            // 0x32a154: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32A158u;
    // 0x32a158: 0x0  nop
    ctx->pc = 0x32a158u;
    // NOP
    // 0x32a15c: 0x0  nop
    ctx->pc = 0x32a15cu;
    // NOP
}
