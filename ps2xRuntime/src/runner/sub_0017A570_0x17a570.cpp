#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017A570
// Address: 0x17a570 - 0x17a610
void sub_0017A570_0x17a570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A570_0x17a570");
#endif

    switch (ctx->pc) {
        case 0x17a58cu: goto label_17a58c;
        case 0x17a5acu: goto label_17a5ac;
        case 0x17a5dcu: goto label_17a5dc;
        case 0x17a5e4u: goto label_17a5e4;
        default: break;
    }

    ctx->pc = 0x17a570u;

    // 0x17a570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a574: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17a574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17a578: 0x3c11005e  lui         $s1, 0x5E
    ctx->pc = 0x17a578u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)94 << 16));
    // 0x17a57c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17a57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a580: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17a580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17a584: 0xc061f80  jal         func_187E00
    ctx->pc = 0x17A584u;
    SET_GPR_U32(ctx, 31, 0x17A58Cu);
    ctx->pc = 0x17A588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A584u;
            // 0x17a588: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187E00u;
    if (runtime->hasFunction(0x187E00u)) {
        auto targetFn = runtime->lookupFunction(0x187E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A58Cu; }
        if (ctx->pc != 0x17A58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187E00_0x187e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A58Cu; }
        if (ctx->pc != 0x17A58Cu) { return; }
    }
    ctx->pc = 0x17A58Cu;
label_17a58c:
    // 0x17a58c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17a58cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17a590: 0x26224388  addiu       $v0, $s1, 0x4388
    ctx->pc = 0x17a590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 17288));
    // 0x17a594: 0x24845830  addiu       $a0, $a0, 0x5830
    ctx->pc = 0x17a594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
    // 0x17a598: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17a598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a59c: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17A59Cu;
    {
        const bool branch_taken_0x17a59c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x17A5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A59Cu;
            // 0x17a5a0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a59c) {
            ctx->pc = 0x17A5B8u;
            goto label_17a5b8;
        }
    }
    ctx->pc = 0x17A5A4u;
    // 0x17a5a4: 0xc043c12  jal         func_10F048
    ctx->pc = 0x17A5A4u;
    SET_GPR_U32(ctx, 31, 0x17A5ACu);
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A5ACu; }
        if (ctx->pc != 0x17A5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A5ACu; }
        if (ctx->pc != 0x17A5ACu) { return; }
    }
    ctx->pc = 0x17A5ACu;
label_17a5ac:
    // 0x17a5ac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x17A5ACu;
    {
        const bool branch_taken_0x17a5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A5ACu;
            // 0x17a5b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a5ac) {
            ctx->pc = 0x17A600u;
            goto label_17a600;
        }
    }
    ctx->pc = 0x17A5B4u;
    // 0x17a5b4: 0x0  nop
    ctx->pc = 0x17a5b4u;
    // NOP
label_17a5b8:
    // 0x17a5b8: 0x82040002  lb          $a0, 0x2($s0)
    ctx->pc = 0x17a5b8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x17a5bc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17A5BCu;
    {
        const bool branch_taken_0x17a5bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A5BCu;
            // 0x17a5c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a5bc) {
            ctx->pc = 0x17A5DCu;
            goto label_17a5dc;
        }
    }
    ctx->pc = 0x17A5C4u;
    // 0x17a5c4: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17A5C4u;
    {
        const bool branch_taken_0x17a5c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x17A5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A5C4u;
            // 0x17a5c8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a5c4) {
            ctx->pc = 0x17A5DCu;
            goto label_17a5dc;
        }
    }
    ctx->pc = 0x17A5CCu;
    // 0x17a5cc: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A5CCu;
    {
        const bool branch_taken_0x17a5cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x17A5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A5CCu;
            // 0x17a5d0: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a5cc) {
            ctx->pc = 0x17A5DCu;
            goto label_17a5dc;
        }
    }
    ctx->pc = 0x17A5D4u;
    // 0x17a5d4: 0xc043c12  jal         func_10F048
    ctx->pc = 0x17A5D4u;
    SET_GPR_U32(ctx, 31, 0x17A5DCu);
    ctx->pc = 0x17A5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A5D4u;
            // 0x17a5d8: 0x24845870  addiu       $a0, $a0, 0x5870 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A5DCu; }
        if (ctx->pc != 0x17A5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A5DCu; }
        if (ctx->pc != 0x17A5DCu) { return; }
    }
    ctx->pc = 0x17A5DCu;
label_17a5dc:
    // 0x17a5dc: 0xc05e92e  jal         func_17A4B8
    ctx->pc = 0x17A5DCu;
    SET_GPR_U32(ctx, 31, 0x17A5E4u);
    ctx->pc = 0x17A4B8u;
    if (runtime->hasFunction(0x17A4B8u)) {
        auto targetFn = runtime->lookupFunction(0x17A4B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A5E4u; }
        if (ctx->pc != 0x17A5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A4B8_0x17a4b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A5E4u; }
        if (ctx->pc != 0x17A5E4u) { return; }
    }
    ctx->pc = 0x17A5E4u;
label_17a5e4:
    // 0x17a5e4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17a5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17a5e8: 0xa2204388  sb          $zero, 0x4388($s1)
    ctx->pc = 0x17a5e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17288), (uint8_t)GPR_U32(ctx, 0));
    // 0x17a5ec: 0x246343ec  addiu       $v1, $v1, 0x43EC
    ctx->pc = 0x17a5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17388));
    // 0x17a5f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17a5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17a5f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17a5f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x17a5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x17a5fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17a5fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17a600:
    // 0x17a600: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17a600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17a604: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17a604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a608: 0x8061f9e  j           func_187E78
    ctx->pc = 0x17A608u;
    ctx->pc = 0x17A60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A608u;
            // 0x17a60c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187E78u;
    if (runtime->hasFunction(0x187E78u)) {
        auto targetFn = runtime->lookupFunction(0x187E78u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187E78_0x187e78(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17A610u;
}
