#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001811B0
// Address: 0x1811b0 - 0x181280
void sub_001811B0_0x1811b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001811B0_0x1811b0");
#endif

    switch (ctx->pc) {
        case 0x181214u: goto label_181214;
        case 0x181234u: goto label_181234;
        default: break;
    }

    ctx->pc = 0x1811b0u;

    // 0x1811b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1811b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1811b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1811b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1811b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1811b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1811bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1811bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1811c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1811c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1811c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1811c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1811c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1811c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1811cc: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x1811ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1811d0: 0x10460025  beq         $v0, $a2, . + 4 + (0x25 << 2)
    ctx->pc = 0x1811D0u;
    {
        const bool branch_taken_0x1811d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1811D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1811D0u;
            // 0x1811d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1811d0) {
            ctx->pc = 0x181268u;
            goto label_181268;
        }
    }
    ctx->pc = 0x1811D8u;
    // 0x1811d8: 0x82120001  lb          $s2, 0x1($s0)
    ctx->pc = 0x1811d8u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1811dc: 0x56420023  bnel        $s2, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1811DCu;
    {
        const bool branch_taken_0x1811dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1811dc) {
            ctx->pc = 0x1811E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1811DCu;
            // 0x1811e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18126Cu;
            goto label_18126c;
        }
    }
    ctx->pc = 0x1811E4u;
    // 0x1811e4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1811e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1811e8: 0x58400020  blezl       $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1811E8u;
    {
        const bool branch_taken_0x1811e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1811e8) {
            ctx->pc = 0x1811ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1811E8u;
            // 0x1811ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18126Cu;
            goto label_18126c;
        }
    }
    ctx->pc = 0x1811F0u;
    // 0x1811f0: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1811f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1811f4: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x1811f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1811f8: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x1811f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1811fc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1811fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x181200: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x181200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x181204: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x181204u;
    {
        const bool branch_taken_0x181204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x181208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181204u;
            // 0x181208: 0x51140  sll         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181204) {
            ctx->pc = 0x18121Cu;
            goto label_18121c;
        }
    }
    ctx->pc = 0x18120Cu;
    // 0x18120c: 0xc0603f8  jal         func_180FE0
    ctx->pc = 0x18120Cu;
    SET_GPR_U32(ctx, 31, 0x181214u);
    ctx->pc = 0x180FE0u;
    if (runtime->hasFunction(0x180FE0u)) {
        auto targetFn = runtime->lookupFunction(0x180FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181214u; }
        if (ctx->pc != 0x181214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180FE0_0x180fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181214u; }
        if (ctx->pc != 0x181214u) { return; }
    }
    ctx->pc = 0x181214u;
label_181214:
    // 0x181214: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x181214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x181218: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x181218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_18121c:
    // 0x18121c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18121cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x181220: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x181220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x181224: 0x14720005  bne         $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x181224u;
    {
        const bool branch_taken_0x181224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x181228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181224u;
            // 0x181228: 0x51140  sll         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181224) {
            ctx->pc = 0x18123Cu;
            goto label_18123c;
        }
    }
    ctx->pc = 0x18122Cu;
    // 0x18122c: 0xc06042a  jal         func_1810A8
    ctx->pc = 0x18122Cu;
    SET_GPR_U32(ctx, 31, 0x181234u);
    ctx->pc = 0x181230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18122Cu;
            // 0x181230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1810A8u;
    if (runtime->hasFunction(0x1810A8u)) {
        auto targetFn = runtime->lookupFunction(0x1810A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181234u; }
        if (ctx->pc != 0x181234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001810A8_0x1810a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181234u; }
        if (ctx->pc != 0x181234u) { return; }
    }
    ctx->pc = 0x181234u;
label_181234:
    // 0x181234: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x181234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x181238: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x181238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_18123c:
    // 0x18123c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18123cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x181240: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x181240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x181244: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x181244u;
    {
        const bool branch_taken_0x181244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x181244) {
            ctx->pc = 0x181248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181244u;
            // 0x181248: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18126Cu;
            goto label_18126c;
        }
    }
    ctx->pc = 0x18124Cu;
    // 0x18124c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18124cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x181250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181254: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x181254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181258: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x181258u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18125c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x18125cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x181260: 0x80603ac  j           func_180EB0
    ctx->pc = 0x181260u;
    ctx->pc = 0x181264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181260u;
            // 0x181264: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180EB0u;
    {
        auto targetFn = runtime->lookupFunction(0x180EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x181268u;
label_181268:
    // 0x181268: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x181268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18126c:
    // 0x18126c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18126cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181270: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x181270u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181274: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x181274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x181278: 0x3e00008  jr          $ra
    ctx->pc = 0x181278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18127Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181278u;
            // 0x18127c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181280u;
}
