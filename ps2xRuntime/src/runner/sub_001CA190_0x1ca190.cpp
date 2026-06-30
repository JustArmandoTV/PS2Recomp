#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CA190
// Address: 0x1ca190 - 0x1ca2b0
void sub_001CA190_0x1ca190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA190_0x1ca190");
#endif

    switch (ctx->pc) {
        case 0x1ca1acu: goto label_1ca1ac;
        case 0x1ca1d0u: goto label_1ca1d0;
        default: break;
    }

    ctx->pc = 0x1ca190u;

    // 0x1ca190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca194: 0x3404f900  ori         $a0, $zero, 0xF900
    ctx->pc = 0x1ca194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63744);
    // 0x1ca198: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca19c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ca19cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca1a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ca1a4: 0xc0728d0  jal         func_1CA340
    ctx->pc = 0x1CA1A4u;
    SET_GPR_U32(ctx, 31, 0x1CA1ACu);
    ctx->pc = 0x1CA1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA1A4u;
            // 0x1ca1a8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA340u;
    if (runtime->hasFunction(0x1CA340u)) {
        auto targetFn = runtime->lookupFunction(0x1CA340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA1ACu; }
        if (ctx->pc != 0x1CA1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA340_0x1ca340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA1ACu; }
        if (ctx->pc != 0x1CA1ACu) { return; }
    }
    ctx->pc = 0x1CA1ACu;
label_1ca1ac:
    // 0x1ca1ac: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1ca1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1ca1b0: 0x2464a70c  addiu       $a0, $v1, -0x58F4
    ctx->pc = 0x1ca1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944524));
    // 0x1ca1b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ca1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ca1b8: 0x90430ab4  lbu         $v1, 0xAB4($v0)
    ctx->pc = 0x1ca1b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2740)));
    // 0x1ca1bc: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1CA1BCu;
    {
        const bool branch_taken_0x1ca1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA1BCu;
            // 0x1ca1c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca1bc) {
            ctx->pc = 0x1CA234u;
            goto label_1ca234;
        }
    }
    ctx->pc = 0x1CA1C4u;
    // 0x1ca1c4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1ca1c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca1c8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1ca1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ca1cc: 0x0  nop
    ctx->pc = 0x1ca1ccu;
    // NOP
label_1ca1d0:
    // 0x1ca1d0: 0x90a30ab6  lbu         $v1, 0xAB6($a1)
    ctx->pc = 0x1ca1d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2742)));
    // 0x1ca1d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ca1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ca1d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ca1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ca1dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ca1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ca1e0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ca1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ca1e4: 0xa44000b4  sh          $zero, 0xB4($v0)
    ctx->pc = 0x1ca1e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 180), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ca1e8: 0x90a30ab6  lbu         $v1, 0xAB6($a1)
    ctx->pc = 0x1ca1e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2742)));
    // 0x1ca1ec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ca1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ca1f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ca1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ca1f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ca1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ca1f8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ca1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ca1fc: 0xac4000c0  sw          $zero, 0xC0($v0)
    ctx->pc = 0x1ca1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 0));
    // 0x1ca200: 0x90a30ab6  lbu         $v1, 0xAB6($a1)
    ctx->pc = 0x1ca200u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2742)));
    // 0x1ca204: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ca204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ca208: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x1ca208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x1ca20c: 0xa0a30ab6  sb          $v1, 0xAB6($a1)
    ctx->pc = 0x1ca20cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2742), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ca210: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1ca210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ca214: 0x90820ab4  lbu         $v0, 0xAB4($a0)
    ctx->pc = 0x1ca214u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2740)));
    // 0x1ca218: 0x244200ff  addiu       $v0, $v0, 0xFF
    ctx->pc = 0x1ca218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x1ca21c: 0xa0820ab4  sb          $v0, 0xAB4($a0)
    ctx->pc = 0x1ca21cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2740), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ca220: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1ca220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ca224: 0x90620ab4  lbu         $v0, 0xAB4($v1)
    ctx->pc = 0x1ca224u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2740)));
    // 0x1ca228: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1CA228u;
    {
        const bool branch_taken_0x1ca228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca228) {
            ctx->pc = 0x1CA22Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA228u;
            // 0x1ca22c: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CA1D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ca1d0;
        }
    }
    ctx->pc = 0x1CA230u;
    // 0x1ca230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ca234:
    // 0x1ca234: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA234u;
            // 0x1ca238: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA23Cu;
    // 0x1ca23c: 0x0  nop
    ctx->pc = 0x1ca23cu;
    // NOP
    // 0x1ca240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca244: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1ca244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1ca248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ca24c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca24cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca250: 0x8c43a70c  lw          $v1, -0x58F4($v0)
    ctx->pc = 0x1ca250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944524)));
    // 0x1ca254: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ca254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca25c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1ca25cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ca260: 0xac641880  sw          $a0, 0x1880($v1)
    ctx->pc = 0x1ca260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6272), GPR_U32(ctx, 4));
    // 0x1ca264: 0x24041700  addiu       $a0, $zero, 0x1700
    ctx->pc = 0x1ca264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5888));
    // 0x1ca268: 0x80728d0  j           func_1CA340
    ctx->pc = 0x1CA268u;
    ctx->pc = 0x1CA26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA268u;
            // 0x1ca26c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA340u;
    if (runtime->hasFunction(0x1CA340u)) {
        auto targetFn = runtime->lookupFunction(0x1CA340u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CA340_0x1ca340(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CA270u;
    // 0x1ca270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca274: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1ca274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1ca278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ca27c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca280: 0x8c43a70c  lw          $v1, -0x58F4($v0)
    ctx->pc = 0x1ca280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944524)));
    // 0x1ca284: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ca284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca28c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1ca28cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ca290: 0xac641884  sw          $a0, 0x1884($v1)
    ctx->pc = 0x1ca290u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6276), GPR_U32(ctx, 4));
    // 0x1ca294: 0x24041b00  addiu       $a0, $zero, 0x1B00
    ctx->pc = 0x1ca294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6912));
    // 0x1ca298: 0x80728d0  j           func_1CA340
    ctx->pc = 0x1CA298u;
    ctx->pc = 0x1CA29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA298u;
            // 0x1ca29c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA340u;
    if (runtime->hasFunction(0x1CA340u)) {
        auto targetFn = runtime->lookupFunction(0x1CA340u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CA340_0x1ca340(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CA2A0u;
    // 0x1ca2a0: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1ca2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
    // 0x1ca2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA2A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA2A4u;
            // 0x1ca2a8: 0x90623e88  lbu         $v0, 0x3E88($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16008)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA2ACu;
    // 0x1ca2ac: 0x0  nop
    ctx->pc = 0x1ca2acu;
    // NOP
}
