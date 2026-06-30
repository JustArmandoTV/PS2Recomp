#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A72D0
// Address: 0x4a72d0 - 0x4a73f0
void sub_004A72D0_0x4a72d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A72D0_0x4a72d0");
#endif

    switch (ctx->pc) {
        case 0x4a7340u: goto label_4a7340;
        case 0x4a7394u: goto label_4a7394;
        case 0x4a73d8u: goto label_4a73d8;
        default: break;
    }

    ctx->pc = 0x4a72d0u;

    // 0x4a72d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a72d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a72d4: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x4a72d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x4a72d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4a72d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a72dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a72dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4a72e0: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x4A72E0u;
    {
        const bool branch_taken_0x4a72e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x4A72E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A72E0u;
            // 0x4a72e4: 0x24c6f780  addiu       $a2, $a2, -0x880 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a72e0) {
            ctx->pc = 0x4A739Cu;
            goto label_4a739c;
        }
    }
    ctx->pc = 0x4A72E8u;
    // 0x4a72e8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4a72e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a72ec: 0x10880016  beq         $a0, $t0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4A72ECu;
    {
        const bool branch_taken_0x4a72ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        if (branch_taken_0x4a72ec) {
            ctx->pc = 0x4A7348u;
            goto label_4a7348;
        }
    }
    ctx->pc = 0x4A72F4u;
    // 0x4a72f4: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4A72F4u;
    {
        const bool branch_taken_0x4a72f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a72f4) {
            ctx->pc = 0x4A7348u;
            goto label_4a7348;
        }
    }
    ctx->pc = 0x4A72FCu;
    // 0x4a72fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4a72fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4a7300: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A7300u;
    {
        const bool branch_taken_0x4a7300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a7300) {
            ctx->pc = 0x4A7304u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7300u;
            // 0x4a7304: 0xffa40000  sd          $a0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A7310u;
            goto label_4a7310;
        }
    }
    ctx->pc = 0x4A7308u;
    // 0x4a7308: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x4A7308u;
    {
        const bool branch_taken_0x4a7308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A730Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7308u;
            // 0x4a730c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7308) {
            ctx->pc = 0x4A73DCu;
            goto label_4a73dc;
        }
    }
    ctx->pc = 0x4A7310u;
label_4a7310:
    // 0x4a7310: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4a7310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a7314: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x4a7314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x4a7318: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4a7318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a731c: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x4a731cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x4a7320: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4a7320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x4a7324: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a7324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4a7328: 0x24a5f790  addiu       $a1, $a1, -0x870
    ctx->pc = 0x4a7328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965136));
    // 0x4a732c: 0x8c470eb8  lw          $a3, 0xEB8($v0)
    ctx->pc = 0x4a732cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3768)));
    // 0x4a7330: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x4a7330u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4a7334: 0x240a0007  addiu       $t2, $zero, 0x7
    ctx->pc = 0x4a7334u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4a7338: 0xc129cfc  jal         func_4A73F0
    ctx->pc = 0x4A7338u;
    SET_GPR_U32(ctx, 31, 0x4A7340u);
    ctx->pc = 0x4A733Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7338u;
            // 0x4a733c: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A73F0u;
    if (runtime->hasFunction(0x4A73F0u)) {
        auto targetFn = runtime->lookupFunction(0x4A73F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7340u; }
        if (ctx->pc != 0x4A7340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A73F0_0x4a73f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7340u; }
        if (ctx->pc != 0x4A7340u) { return; }
    }
    ctx->pc = 0x4A7340u;
label_4a7340:
    // 0x4a7340: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x4A7340u;
    {
        const bool branch_taken_0x4a7340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a7340) {
            ctx->pc = 0x4A73D8u;
            goto label_4a73d8;
        }
    }
    ctx->pc = 0x4A7348u;
label_4a7348:
    // 0x4a7348: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a7348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4a734c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4a734cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4a7350: 0x244250a0  addiu       $v0, $v0, 0x50A0
    ctx->pc = 0x4a7350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20640));
    // 0x4a7354: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4a7354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7358: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a7358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a735c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4a735cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x4a7360: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x4a7360u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a7364: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4a7364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a7368: 0x24a5f790  addiu       $a1, $a1, -0x870
    ctx->pc = 0x4a7368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965136));
    // 0x4a736c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4a736cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a7370: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x4a7370u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4a7374: 0x240a0007  addiu       $t2, $zero, 0x7
    ctx->pc = 0x4a7374u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4a7378: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x4a7378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x4a737c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a737cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4a7380: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x4a7380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x4a7384: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x4a7384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x4a7388: 0x8c470eb8  lw          $a3, 0xEB8($v0)
    ctx->pc = 0x4a7388u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3768)));
    // 0x4a738c: 0xc129cfc  jal         func_4A73F0
    ctx->pc = 0x4A738Cu;
    SET_GPR_U32(ctx, 31, 0x4A7394u);
    ctx->pc = 0x4A7390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A738Cu;
            // 0x4a7390: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A73F0u;
    if (runtime->hasFunction(0x4A73F0u)) {
        auto targetFn = runtime->lookupFunction(0x4A73F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7394u; }
        if (ctx->pc != 0x4A7394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A73F0_0x4a73f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7394u; }
        if (ctx->pc != 0x4A7394u) { return; }
    }
    ctx->pc = 0x4A7394u;
label_4a7394:
    // 0x4a7394: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4A7394u;
    {
        const bool branch_taken_0x4a7394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a7394) {
            ctx->pc = 0x4A73D8u;
            goto label_4a73d8;
        }
    }
    ctx->pc = 0x4A739Cu;
label_4a739c:
    // 0x4a739c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x4a739cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4a73a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4a73a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a73a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4a73a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a73a8: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x4a73a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x4a73ac: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x4a73acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x4a73b0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4a73b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x4a73b4: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x4a73b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x4a73b8: 0x24a5f790  addiu       $a1, $a1, -0x870
    ctx->pc = 0x4a73b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965136));
    // 0x4a73bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a73bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4a73c0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4a73c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a73c4: 0x8c470eb8  lw          $a3, 0xEB8($v0)
    ctx->pc = 0x4a73c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3768)));
    // 0x4a73c8: 0x2409000b  addiu       $t1, $zero, 0xB
    ctx->pc = 0x4a73c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4a73cc: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x4a73ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4a73d0: 0xc129cfc  jal         func_4A73F0
    ctx->pc = 0x4A73D0u;
    SET_GPR_U32(ctx, 31, 0x4A73D8u);
    ctx->pc = 0x4A73D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A73D0u;
            // 0x4a73d4: 0x240b000d  addiu       $t3, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A73F0u;
    if (runtime->hasFunction(0x4A73F0u)) {
        auto targetFn = runtime->lookupFunction(0x4A73F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A73D8u; }
        if (ctx->pc != 0x4A73D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A73F0_0x4a73f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A73D8u; }
        if (ctx->pc != 0x4A73D8u) { return; }
    }
    ctx->pc = 0x4A73D8u;
label_4a73d8:
    // 0x4a73d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a73d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4a73dc:
    // 0x4a73dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4A73DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A73E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A73DCu;
            // 0x4a73e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A73E4u;
    // 0x4a73e4: 0x0  nop
    ctx->pc = 0x4a73e4u;
    // NOP
    // 0x4a73e8: 0x0  nop
    ctx->pc = 0x4a73e8u;
    // NOP
    // 0x4a73ec: 0x0  nop
    ctx->pc = 0x4a73ecu;
    // NOP
}
