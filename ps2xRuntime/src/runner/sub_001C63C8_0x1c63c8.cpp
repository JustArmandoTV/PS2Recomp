#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C63C8
// Address: 0x1c63c8 - 0x1c6488
void sub_001C63C8_0x1c63c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C63C8_0x1c63c8");
#endif

    switch (ctx->pc) {
        case 0x1c63f0u: goto label_1c63f0;
        case 0x1c6444u: goto label_1c6444;
        case 0x1c6464u: goto label_1c6464;
        default: break;
    }

    ctx->pc = 0x1c63c8u;

    // 0x1c63c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c63c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c63cc: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x1c63ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1c63d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c63d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c63d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c63d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c63d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c63d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c63dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c63dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c63e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c63e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c63e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c63e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c63e8: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1C63E8u;
    SET_GPR_U32(ctx, 31, 0x1C63F0u);
    ctx->pc = 0x1C63ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C63E8u;
            // 0x1c63ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C63F0u; }
        if (ctx->pc != 0x1C63F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C63F0u; }
        if (ctx->pc != 0x1C63F0u) { return; }
    }
    ctx->pc = 0x1C63F0u;
label_1c63f0:
    // 0x1c63f0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1c63f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c63f4: 0x3c074349  lui         $a3, 0x4349
    ctx->pc = 0x1c63f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17225 << 16));
    // 0x1c63f8: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x1c63f8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c63fc: 0x3c085a4f  lui         $t0, 0x5A4F
    ctx->pc = 0x1c63fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)23119 << 16));
    // 0x1c6400: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x1c6400u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x1c6404: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x1c6404u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x1c6408: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c6408u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c640c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c640cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c6410: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1c6410u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1c6414: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x1c6414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x1c6418: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1c6418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1c641c: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x1c641cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1c6420: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c6420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c6424: 0x34e74d46  ori         $a3, $a3, 0x4D46
    ctx->pc = 0x1c6424u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)19782);
    // 0x1c6428: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1c6428u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1c642c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c642cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6430: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c6430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6434: 0x14c70006  bne         $a2, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6434u;
    {
        const bool branch_taken_0x1c6434 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x1C6438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6434u;
            // 0x1c6438: 0x35084e45  ori         $t0, $t0, 0x4E45 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)20037);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6434) {
            ctx->pc = 0x1C6450u;
            goto label_1c6450;
        }
    }
    ctx->pc = 0x1C643Cu;
    // 0x1c643c: 0xc0719ea  jal         func_1C67A8
    ctx->pc = 0x1C643Cu;
    SET_GPR_U32(ctx, 31, 0x1C6444u);
    ctx->pc = 0x1C67A8u;
    if (runtime->hasFunction(0x1C67A8u)) {
        auto targetFn = runtime->lookupFunction(0x1C67A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6444u; }
        if (ctx->pc != 0x1C6444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C67A8_0x1c67a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6444u; }
        if (ctx->pc != 0x1C6444u) { return; }
    }
    ctx->pc = 0x1C6444u;
label_1c6444:
    // 0x1c6444: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C6444u;
    {
        const bool branch_taken_0x1c6444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6444u;
            // 0x1c6448: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6444) {
            ctx->pc = 0x1C6474u;
            goto label_1c6474;
        }
    }
    ctx->pc = 0x1C644Cu;
    // 0x1c644c: 0x0  nop
    ctx->pc = 0x1c644cu;
    // NOP
label_1c6450:
    // 0x1c6450: 0x54c80007  bnel        $a2, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6450u;
    {
        const bool branch_taken_0x1c6450 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        if (branch_taken_0x1c6450) {
            ctx->pc = 0x1C6454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6450u;
            // 0x1c6454: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6470u;
            goto label_1c6470;
        }
    }
    ctx->pc = 0x1C6458u;
    // 0x1c6458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c645c: 0xc07187c  jal         func_1C61F0
    ctx->pc = 0x1C645Cu;
    SET_GPR_U32(ctx, 31, 0x1C6464u);
    ctx->pc = 0x1C6460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C645Cu;
            // 0x1c6460: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C61F0u;
    if (runtime->hasFunction(0x1C61F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C61F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6464u; }
        if (ctx->pc != 0x1C6464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C61F0_0x1c61f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6464u; }
        if (ctx->pc != 0x1C6464u) { return; }
    }
    ctx->pc = 0x1C6464u;
label_1c6464:
    // 0x1c6464: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6464u;
    {
        const bool branch_taken_0x1c6464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6464u;
            // 0x1c6468: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6464) {
            ctx->pc = 0x1C6474u;
            goto label_1c6474;
        }
    }
    ctx->pc = 0x1C646Cu;
    // 0x1c646c: 0x0  nop
    ctx->pc = 0x1c646cu;
    // NOP
label_1c6470:
    // 0x1c6470: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c6474:
    // 0x1c6474: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6474u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6478: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c647c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C647Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C647Cu;
            // 0x1c6480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C6484u;
    // 0x1c6484: 0x0  nop
    ctx->pc = 0x1c6484u;
    // NOP
}
