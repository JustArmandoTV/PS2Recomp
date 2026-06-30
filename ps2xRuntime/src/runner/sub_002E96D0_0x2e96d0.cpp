#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E96D0
// Address: 0x2e96d0 - 0x2e97d0
void sub_002E96D0_0x2e96d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E96D0_0x2e96d0");
#endif

    switch (ctx->pc) {
        case 0x2e9734u: goto label_2e9734;
        case 0x2e9760u: goto label_2e9760;
        case 0x2e9794u: goto label_2e9794;
        case 0x2e97c0u: goto label_2e97c0;
        default: break;
    }

    ctx->pc = 0x2e96d0u;

    // 0x2e96d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e96d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e96d4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2e96d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e96d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e96d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e96dc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e96dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2e96e0: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x2e96e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x2e96e4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2e96e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e96e8: 0x8c660968  lw          $a2, 0x968($v1)
    ctx->pc = 0x2e96e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
    // 0x2e96ec: 0x10c4001e  beq         $a2, $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E96ECu;
    {
        const bool branch_taken_0x2e96ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x2e96ec) {
            ctx->pc = 0x2E9768u;
            goto label_2e9768;
        }
    }
    ctx->pc = 0x2E96F4u;
    // 0x2e96f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2e96f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e96f8: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E96F8u;
    {
        const bool branch_taken_0x2e96f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e96f8) {
            ctx->pc = 0x2E9708u;
            goto label_2e9708;
        }
    }
    ctx->pc = 0x2E9700u;
    // 0x2e9700: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2E9700u;
    {
        const bool branch_taken_0x2e9700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9700u;
            // 0x2e9704: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9700) {
            ctx->pc = 0x2E97C4u;
            goto label_2e97c4;
        }
    }
    ctx->pc = 0x2E9708u;
label_2e9708:
    // 0x2e9708: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2E9708u;
    {
        const bool branch_taken_0x2e9708 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9708) {
            ctx->pc = 0x2E973Cu;
            goto label_2e973c;
        }
    }
    ctx->pc = 0x2E9710u;
    // 0x2e9710: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e9710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e9714: 0x90e411aa  lbu         $a0, 0x11AA($a3)
    ctx->pc = 0x2e9714u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4522)));
    // 0x2e9718: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2e9718u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2e971c: 0x24e60890  addiu       $a2, $a3, 0x890
    ctx->pc = 0x2e971cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 2192));
    // 0x2e9720: 0x2405004b  addiu       $a1, $zero, 0x4B
    ctx->pc = 0x2e9720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x2e9724: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e9724u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9728: 0x24e702c0  addiu       $a3, $a3, 0x2C0
    ctx->pc = 0x2e9728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 704));
    // 0x2e972c: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2E972Cu;
    SET_GPR_U32(ctx, 31, 0x2E9734u);
    ctx->pc = 0x2E9730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E972Cu;
            // 0x2e9730: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9734u; }
        if (ctx->pc != 0x2E9734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9734u; }
        if (ctx->pc != 0x2E9734u) { return; }
    }
    ctx->pc = 0x2E9734u;
label_2e9734:
    // 0x2e9734: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2E9734u;
    {
        const bool branch_taken_0x2e9734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9734) {
            ctx->pc = 0x2E97C0u;
            goto label_2e97c0;
        }
    }
    ctx->pc = 0x2E973Cu;
label_2e973c:
    // 0x2e973c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e973cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e9740: 0x90e411aa  lbu         $a0, 0x11AA($a3)
    ctx->pc = 0x2e9740u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4522)));
    // 0x2e9744: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2e9744u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2e9748: 0x24e60890  addiu       $a2, $a3, 0x890
    ctx->pc = 0x2e9748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 2192));
    // 0x2e974c: 0x24050049  addiu       $a1, $zero, 0x49
    ctx->pc = 0x2e974cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x2e9750: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e9750u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9754: 0x24e702c0  addiu       $a3, $a3, 0x2C0
    ctx->pc = 0x2e9754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 704));
    // 0x2e9758: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2E9758u;
    SET_GPR_U32(ctx, 31, 0x2E9760u);
    ctx->pc = 0x2E975Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9758u;
            // 0x2e975c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9760u; }
        if (ctx->pc != 0x2E9760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9760u; }
        if (ctx->pc != 0x2E9760u) { return; }
    }
    ctx->pc = 0x2E9760u;
label_2e9760:
    // 0x2e9760: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E9760u;
    {
        const bool branch_taken_0x2e9760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9760) {
            ctx->pc = 0x2E97C0u;
            goto label_2e97c0;
        }
    }
    ctx->pc = 0x2E9768u;
label_2e9768:
    // 0x2e9768: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2E9768u;
    {
        const bool branch_taken_0x2e9768 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9768) {
            ctx->pc = 0x2E979Cu;
            goto label_2e979c;
        }
    }
    ctx->pc = 0x2E9770u;
    // 0x2e9770: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e9770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e9774: 0x90e411aa  lbu         $a0, 0x11AA($a3)
    ctx->pc = 0x2e9774u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4522)));
    // 0x2e9778: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2e9778u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2e977c: 0x24e60890  addiu       $a2, $a3, 0x890
    ctx->pc = 0x2e977cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 2192));
    // 0x2e9780: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x2e9780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2e9784: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e9784u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9788: 0x24e702c0  addiu       $a3, $a3, 0x2C0
    ctx->pc = 0x2e9788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 704));
    // 0x2e978c: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2E978Cu;
    SET_GPR_U32(ctx, 31, 0x2E9794u);
    ctx->pc = 0x2E9790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E978Cu;
            // 0x2e9790: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9794u; }
        if (ctx->pc != 0x2E9794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9794u; }
        if (ctx->pc != 0x2E9794u) { return; }
    }
    ctx->pc = 0x2E9794u;
label_2e9794:
    // 0x2e9794: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E9794u;
    {
        const bool branch_taken_0x2e9794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9794) {
            ctx->pc = 0x2E97C0u;
            goto label_2e97c0;
        }
    }
    ctx->pc = 0x2E979Cu;
label_2e979c:
    // 0x2e979c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e979cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e97a0: 0x90e411aa  lbu         $a0, 0x11AA($a3)
    ctx->pc = 0x2e97a0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4522)));
    // 0x2e97a4: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2e97a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2e97a8: 0x24e60890  addiu       $a2, $a3, 0x890
    ctx->pc = 0x2e97a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 2192));
    // 0x2e97ac: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x2e97acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2e97b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e97b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e97b4: 0x24e702c0  addiu       $a3, $a3, 0x2C0
    ctx->pc = 0x2e97b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 704));
    // 0x2e97b8: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2E97B8u;
    SET_GPR_U32(ctx, 31, 0x2E97C0u);
    ctx->pc = 0x2E97BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E97B8u;
            // 0x2e97bc: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E97C0u; }
        if (ctx->pc != 0x2E97C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E97C0u; }
        if (ctx->pc != 0x2E97C0u) { return; }
    }
    ctx->pc = 0x2E97C0u;
label_2e97c0:
    // 0x2e97c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e97c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e97c4:
    // 0x2e97c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E97C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E97C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E97C4u;
            // 0x2e97c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E97CCu;
    // 0x2e97cc: 0x0  nop
    ctx->pc = 0x2e97ccu;
    // NOP
}
