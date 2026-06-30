#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017B170
// Address: 0x17b170 - 0x17b2c8
void sub_0017B170_0x17b170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B170_0x17b170");
#endif

    switch (ctx->pc) {
        case 0x17b1a0u: goto label_17b1a0;
        case 0x17b1ccu: goto label_17b1cc;
        case 0x17b1ecu: goto label_17b1ec;
        case 0x17b224u: goto label_17b224;
        case 0x17b25cu: goto label_17b25c;
        case 0x17b294u: goto label_17b294;
        default: break;
    }

    ctx->pc = 0x17b170u;

label_17b170:
    // 0x17b170: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17b170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17b174: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b174u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b178: 0x244243d8  addiu       $v0, $v0, 0x43D8
    ctx->pc = 0x17b178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17368));
    // 0x17b17c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b180: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17b180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17b184: 0x3c08005e  lui         $t0, 0x5E
    ctx->pc = 0x17b184u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)94 << 16));
    // 0x17b188: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17b188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b18c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17b18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b190: 0x3c061964  lui         $a2, 0x1964
    ctx->pc = 0x17b190u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6500 << 16));
    // 0x17b194: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17b194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17b198: 0x8d0243c4  lw          $v0, 0x43C4($t0)
    ctx->pc = 0x17b198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 17348)));
    // 0x17b19c: 0x0  nop
    ctx->pc = 0x17b19cu;
    // NOP
label_17b1a0:
    // 0x17b1a0: 0x1447000b  bne         $v0, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x17B1A0u;
    {
        const bool branch_taken_0x17b1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x17B1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B1A0u;
            // 0x17b1a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b1a0) {
            ctx->pc = 0x17B1D0u;
            goto label_17b1d0;
        }
    }
    ctx->pc = 0x17B1A8u;
    // 0x17b1a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x17b1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17b1ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17b1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17b1b0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x17b1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x17b1b4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x17b1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17b1b8: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x17b1b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x17b1bc: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17B1BCu;
    {
        const bool branch_taken_0x17b1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b1bc) {
            ctx->pc = 0x17B1C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17B1BCu;
            // 0x17b1c0: 0x8d0243c4  lw          $v0, 0x43C4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 17348)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17B1A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17b1a0;
        }
    }
    ctx->pc = 0x17B1C4u;
    // 0x17b1c4: 0xc043c12  jal         func_10F048
    ctx->pc = 0x17B1C4u;
    SET_GPR_U32(ctx, 31, 0x17B1CCu);
    ctx->pc = 0x17B1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B1C4u;
            // 0x17b1c8: 0x24845998  addiu       $a0, $a0, 0x5998 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B1CCu; }
        if (ctx->pc != 0x17B1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B1CCu; }
        if (ctx->pc != 0x17B1CCu) { return; }
    }
    ctx->pc = 0x17B1CCu;
label_17b1cc:
    // 0x17b1cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17b1d0:
    // 0x17b1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x17B1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B1D0u;
            // 0x17b1d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B1D8u;
    // 0x17b1d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b1dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b1e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17b1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17b1e4: 0xc05ec5c  jal         func_17B170
    ctx->pc = 0x17B1E4u;
    SET_GPR_U32(ctx, 31, 0x17B1ECu);
    ctx->pc = 0x17B1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B1E4u;
            // 0x17b1e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B170u;
    goto label_17b170;
    ctx->pc = 0x17B1ECu;
label_17b1ec:
    // 0x17b1ec: 0x108600  sll         $s0, $s0, 24
    ctx->pc = 0x17b1ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x17b1f0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17b1f4: 0x244243c8  addiu       $v0, $v0, 0x43C8
    ctx->pc = 0x17b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17352));
    // 0x17b1f8: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x17b1f8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x17b1fc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x17b1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x17b200: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17b200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b204: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b208: 0x3e00008  jr          $ra
    ctx->pc = 0x17B208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B208u;
            // 0x17b20c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B210u;
    // 0x17b210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b214: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b218: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17b218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17b21c: 0xc05ec5c  jal         func_17B170
    ctx->pc = 0x17B21Cu;
    SET_GPR_U32(ctx, 31, 0x17B224u);
    ctx->pc = 0x17B220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B21Cu;
            // 0x17b220: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B170u;
    goto label_17b170;
    ctx->pc = 0x17B224u;
label_17b224:
    // 0x17b224: 0x108600  sll         $s0, $s0, 24
    ctx->pc = 0x17b224u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x17b228: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17b228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17b22c: 0x244243cc  addiu       $v0, $v0, 0x43CC
    ctx->pc = 0x17b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17356));
    // 0x17b230: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x17b230u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x17b234: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x17b234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x17b238: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17b238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b23c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b23cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b240: 0x3e00008  jr          $ra
    ctx->pc = 0x17B240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B240u;
            // 0x17b244: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B248u;
    // 0x17b248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b24c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b250: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17b250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17b254: 0xc05ec5c  jal         func_17B170
    ctx->pc = 0x17B254u;
    SET_GPR_U32(ctx, 31, 0x17B25Cu);
    ctx->pc = 0x17B258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B254u;
            // 0x17b258: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B170u;
    goto label_17b170;
    ctx->pc = 0x17B25Cu;
label_17b25c:
    // 0x17b25c: 0x108600  sll         $s0, $s0, 24
    ctx->pc = 0x17b25cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x17b260: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17b260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17b264: 0x244243d0  addiu       $v0, $v0, 0x43D0
    ctx->pc = 0x17b264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17360));
    // 0x17b268: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x17b268u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x17b26c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x17b26cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x17b270: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17b270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b274: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b278: 0x3e00008  jr          $ra
    ctx->pc = 0x17B278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B278u;
            // 0x17b27c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B280u;
    // 0x17b280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b284: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b288: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17b288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17b28c: 0xc05ec5c  jal         func_17B170
    ctx->pc = 0x17B28Cu;
    SET_GPR_U32(ctx, 31, 0x17B294u);
    ctx->pc = 0x17B290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B28Cu;
            // 0x17b290: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B170u;
    goto label_17b170;
    ctx->pc = 0x17B294u;
label_17b294:
    // 0x17b294: 0x108600  sll         $s0, $s0, 24
    ctx->pc = 0x17b294u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x17b298: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17b298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17b29c: 0x244243d4  addiu       $v0, $v0, 0x43D4
    ctx->pc = 0x17b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17364));
    // 0x17b2a0: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x17b2a0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x17b2a4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x17b2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x17b2a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17b2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b2ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b2acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x17B2B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B2B0u;
            // 0x17b2b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B2B8u;
    // 0x17b2b8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17b2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17b2bc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x17b2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17b2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x17B2C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B2C0u;
            // 0x17b2c4: 0xa062438a  sb          $v0, 0x438A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 17290), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B2C8u;
}
