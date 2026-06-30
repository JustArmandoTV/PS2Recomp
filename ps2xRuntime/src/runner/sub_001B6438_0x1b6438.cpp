#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6438
// Address: 0x1b6438 - 0x1b6500
void sub_001B6438_0x1b6438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6438_0x1b6438");
#endif

    switch (ctx->pc) {
        case 0x1b648cu: goto label_1b648c;
        default: break;
    }

    ctx->pc = 0x1b6438u;

    // 0x1b6438: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1b6438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1b643c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b643cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b6440: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b6440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b6444: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b6444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b6448: 0x8c421fa8  lw          $v0, 0x1FA8($v0)
    ctx->pc = 0x1b6448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8104)));
    // 0x1b644c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B644Cu;
    {
        const bool branch_taken_0x1b644c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b644c) {
            ctx->pc = 0x1B6450u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B644Cu;
            // 0x1b6450: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B6460u;
            goto label_1b6460;
        }
    }
    ctx->pc = 0x1B6454u;
    // 0x1b6454: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6454u;
            // 0x1b6458: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B645Cu;
    // 0x1b645c: 0x0  nop
    ctx->pc = 0x1b645cu;
    // NOP
label_1b6460:
    // 0x1b6460: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6460u;
            // 0x1b6464: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6468u;
    // 0x1b6468: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b646c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b646cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6470: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6474: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b6474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b6478: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b6478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b647c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b647cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b6480: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b6480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b6484: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B6484u;
    SET_GPR_U32(ctx, 31, 0x1B648Cu);
    ctx->pc = 0x1B6488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6484u;
            // 0x1b6488: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B648Cu; }
        if (ctx->pc != 0x1B648Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B648Cu; }
        if (ctx->pc != 0x1B648Cu) { return; }
    }
    ctx->pc = 0x1B648Cu;
label_1b648c:
    // 0x1b648c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b648cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b6490: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b6490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6494: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B6494u;
    {
        const bool branch_taken_0x1b6494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6494u;
            // 0x1b6498: 0x34a5011c  ori         $a1, $a1, 0x11C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)284);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6494) {
            ctx->pc = 0x1B64B8u;
            goto label_1b64b8;
        }
    }
    ctx->pc = 0x1B649Cu;
    // 0x1b649c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b649cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b64a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b64a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b64a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b64a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b64a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b64a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b64ac: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B64ACu;
    ctx->pc = 0x1B64B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B64ACu;
            // 0x1b64b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B64B4u;
    // 0x1b64b4: 0x0  nop
    ctx->pc = 0x1b64b4u;
    // NOP
label_1b64b8:
    // 0x1b64b8: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1b64b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1b64bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B64BCu;
    {
        const bool branch_taken_0x1b64bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B64C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B64BCu;
            // 0x1b64c0: 0x2602010c  addiu       $v0, $s0, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b64bc) {
            ctx->pc = 0x1B64D8u;
            goto label_1b64d8;
        }
    }
    ctx->pc = 0x1B64C4u;
    // 0x1b64c4: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x1b64c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1b64c8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1b64c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1b64cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B64CCu;
    {
        const bool branch_taken_0x1b64cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B64D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B64CCu;
            // 0x1b64d0: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b64cc) {
            ctx->pc = 0x1B64E0u;
            goto label_1b64e0;
        }
    }
    ctx->pc = 0x1B64D4u;
    // 0x1b64d4: 0x0  nop
    ctx->pc = 0x1b64d4u;
    // NOP
label_1b64d8:
    // 0x1b64d8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1b64d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1b64dc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1b64dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1b64e0:
    // 0x1b64e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b64e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b64e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b64e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b64e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b64e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b64ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b64ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b64f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b64f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b64f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B64F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B64F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B64F4u;
            // 0x1b64f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B64FCu;
    // 0x1b64fc: 0x0  nop
    ctx->pc = 0x1b64fcu;
    // NOP
}
