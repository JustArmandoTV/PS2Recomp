#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012A188
// Address: 0x12a188 - 0x12a390
void sub_0012A188_0x12a188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A188_0x12a188");
#endif

    switch (ctx->pc) {
        case 0x12a1e4u: goto label_12a1e4;
        case 0x12a200u: goto label_12a200;
        case 0x12a240u: goto label_12a240;
        case 0x12a258u: goto label_12a258;
        case 0x12a2ccu: goto label_12a2cc;
        case 0x12a350u: goto label_12a350;
        default: break;
    }

    ctx->pc = 0x12a188u;

    // 0x12a188: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12a188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12a18c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12a18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12a190: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12a190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12a194: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12a194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12a198: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12a198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a19c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12a19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12a1a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12a1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12a1a4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x12a1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x12a1a8: 0x8cb30010  lw          $s3, 0x10($a1)
    ctx->pc = 0x12a1a8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x12a1ac: 0x8cd20010  lw          $s2, 0x10($a2)
    ctx->pc = 0x12a1acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x12a1b0: 0x272782a  slt         $t7, $s3, $s2
    ctx->pc = 0x12a1b0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x12a1b4: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A1B4u;
    {
        const bool branch_taken_0x12a1b4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A1B4u;
            // 0x12a1b8: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a1b4) {
            ctx->pc = 0x12A1CCu;
            goto label_12a1cc;
        }
    }
    ctx->pc = 0x12A1BCu;
    // 0x12a1bc: 0x8cd30010  lw          $s3, 0x10($a2)
    ctx->pc = 0x12a1bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x12a1c0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x12a1c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a1c4: 0x8cb20010  lw          $s2, 0x10($a1)
    ctx->pc = 0x12a1c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x12a1c8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x12a1c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12a1cc:
    // 0x12a1cc: 0x8e0f0008  lw          $t7, 0x8($s0)
    ctx->pc = 0x12a1ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12a1d0: 0x2728821  addu        $s1, $s3, $s2
    ctx->pc = 0x12a1d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x12a1d4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x12a1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12a1d8: 0x1f1782a  slt         $t7, $t7, $s1
    ctx->pc = 0x12a1d8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x12a1dc: 0xc04a740  jal         func_129D00
    ctx->pc = 0x12A1DCu;
    SET_GPR_U32(ctx, 31, 0x12A1E4u);
    ctx->pc = 0x12A1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A1DCu;
            // 0x12a1e0: 0xaf2821  addu        $a1, $a1, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129D00u;
    if (runtime->hasFunction(0x129D00u)) {
        auto targetFn = runtime->lookupFunction(0x129D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A1E4u; }
        if (ctx->pc != 0x12A1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129D00_0x129d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A1E4u; }
        if (ctx->pc != 0x12A1E4u) { return; }
    }
    ctx->pc = 0x12A1E4u;
label_12a1e4:
    // 0x12a1e4: 0x24580014  addiu       $t8, $v0, 0x14
    ctx->pc = 0x12a1e4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x12a1e8: 0x11c880  sll         $t9, $s1, 2
    ctx->pc = 0x12a1e8u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x12a1ec: 0x3191821  addu        $v1, $t8, $t9
    ctx->pc = 0x12a1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
    // 0x12a1f0: 0x303782b  sltu        $t7, $t8, $v1
    ctx->pc = 0x12a1f0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12a1f4: 0x11e00009  beqz        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x12A1F4u;
    {
        const bool branch_taken_0x12a1f4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A1F4u;
            // 0x12a1f8: 0x300482d  daddu       $t1, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a1f4) {
            ctx->pc = 0x12A21Cu;
            goto label_12a21c;
        }
    }
    ctx->pc = 0x12A1FCu;
    // 0x12a1fc: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x12a1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
label_12a200:
    // 0x12a200: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x12a200u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x12a204: 0x123782b  sltu        $t7, $t1, $v1
    ctx->pc = 0x12a204u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12a208: 0x0  nop
    ctx->pc = 0x12a208u;
    // NOP
    // 0x12a20c: 0x0  nop
    ctx->pc = 0x12a20cu;
    // NOP
    // 0x12a210: 0x0  nop
    ctx->pc = 0x12a210u;
    // NOP
    // 0x12a214: 0x55e0fffa  bnel        $t7, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12A214u;
    {
        const bool branch_taken_0x12a214 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a214) {
            ctx->pc = 0x12A218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A214u;
            // 0x12a218: 0xad200000  sw          $zero, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A200u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a200;
        }
    }
    ctx->pc = 0x12A21Cu;
label_12a21c:
    // 0x12a21c: 0x26860014  addiu       $a2, $s4, 0x14
    ctx->pc = 0x12a21cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x12a220: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x12a220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x12a224: 0x137880  sll         $t7, $s3, 2
    ctx->pc = 0x12a224u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x12a228: 0x127080  sll         $t6, $s2, 2
    ctx->pc = 0x12a228u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x12a22c: 0xce8021  addu        $s0, $a2, $t6
    ctx->pc = 0x12a22cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x12a230: 0x6f2821  addu        $a1, $v1, $t7
    ctx->pc = 0x12a230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x12a234: 0xd0782b  sltu        $t7, $a2, $s0
    ctx->pc = 0x12a234u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x12a238: 0x11e0003e  beqz        $t7, . + 4 + (0x3E << 2)
    ctx->pc = 0x12A238u;
    {
        const bool branch_taken_0x12a238 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A238u;
            // 0x12a23c: 0x300202d  daddu       $a0, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a238) {
            ctx->pc = 0x12A334u;
            goto label_12a334;
        }
    }
    ctx->pc = 0x12A240u;
label_12a240:
    // 0x12a240: 0x8ccf0000  lw          $t7, 0x0($a2)
    ctx->pc = 0x12a240u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12a244: 0x31e7ffff  andi        $a3, $t7, 0xFFFF
    ctx->pc = 0x12a244u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x12a248: 0x10e00019  beqz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x12A248u;
    {
        const bool branch_taken_0x12a248 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A248u;
            // 0x12a24c: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a248) {
            ctx->pc = 0x12A2B0u;
            goto label_12a2b0;
        }
    }
    ctx->pc = 0x12A250u;
    // 0x12a250: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x12a250u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a254: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12a254u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12a258:
    // 0x12a258: 0x8d2f0000  lw          $t7, 0x0($t1)
    ctx->pc = 0x12a258u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x12a25c: 0x8d4d0000  lw          $t5, 0x0($t2)
    ctx->pc = 0x12a25cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x12a260: 0x31eeffff  andi        $t6, $t7, 0xFFFF
    ctx->pc = 0x12a260u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x12a264: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x12a264u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x12a268: 0x1c77018  mult        $t6, $t6, $a3
    ctx->pc = 0x12a268u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x12a26c: 0xf7c02  srl         $t7, $t7, 16
    ctx->pc = 0x12a26cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
    // 0x12a270: 0x71e77818  mult1       $t7, $t7, $a3
    ctx->pc = 0x12a270u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x12a274: 0x31acffff  andi        $t4, $t5, 0xFFFF
    ctx->pc = 0x12a274u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x12a278: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x12a278u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x12a27c: 0x125582b  sltu        $t3, $t1, $a1
    ctx->pc = 0x12a27cu;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12a280: 0x1cc7021  addu        $t6, $t6, $t4
    ctx->pc = 0x12a280u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x12a284: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x12a284u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x12a288: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x12a288u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x12a28c: 0xe4402  srl         $t0, $t6, 16
    ctx->pc = 0x12a28cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 14), 16));
    // 0x12a290: 0xa54e0000  sh          $t6, 0x0($t2)
    ctx->pc = 0x12a290u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x12a294: 0x1e87821  addu        $t7, $t7, $t0
    ctx->pc = 0x12a294u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x12a298: 0xa54f0002  sh          $t7, 0x2($t2)
    ctx->pc = 0x12a298u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 15));
    // 0x12a29c: 0xf4402  srl         $t0, $t7, 16
    ctx->pc = 0x12a29cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
    // 0x12a2a0: 0x1560ffed  bnez        $t3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x12A2A0u;
    {
        const bool branch_taken_0x12a2a0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A2A0u;
            // 0x12a2a4: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a2a0) {
            ctx->pc = 0x12A258u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a258;
        }
    }
    ctx->pc = 0x12A2A8u;
    // 0x12a2a8: 0xad480000  sw          $t0, 0x0($t2)
    ctx->pc = 0x12a2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
    // 0x12a2ac: 0x8ccf0000  lw          $t7, 0x0($a2)
    ctx->pc = 0x12a2acu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_12a2b0:
    // 0x12a2b0: 0xf3c02  srl         $a3, $t7, 16
    ctx->pc = 0x12a2b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
    // 0x12a2b4: 0x10e0001b  beqz        $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x12A2B4u;
    {
        const bool branch_taken_0x12a2b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A2B4u;
            // 0x12a2b8: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a2b4) {
            ctx->pc = 0x12A324u;
            goto label_12a324;
        }
    }
    ctx->pc = 0x12A2BCu;
    // 0x12a2bc: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x12a2bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12a2c0: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x12a2c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a2c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12a2c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a2c8: 0x1e0582d  daddu       $t3, $t7, $zero
    ctx->pc = 0x12a2c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_12a2cc:
    // 0x12a2cc: 0x8d2d0000  lw          $t5, 0x0($t1)
    ctx->pc = 0x12a2ccu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x12a2d0: 0xb7402  srl         $t6, $t3, 16
    ctx->pc = 0x12a2d0u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x12a2d4: 0xa54f0000  sh          $t7, 0x0($t2)
    ctx->pc = 0x12a2d4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 15));
    // 0x12a2d8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x12a2d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x12a2dc: 0x31afffff  andi        $t7, $t5, 0xFFFF
    ctx->pc = 0x12a2dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x12a2e0: 0x125602b  sltu        $t4, $t1, $a1
    ctx->pc = 0x12a2e0u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12a2e4: 0x1e77818  mult        $t7, $t7, $a3
    ctx->pc = 0x12a2e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x12a2e8: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x12a2e8u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x12a2ec: 0x71a76818  mult1       $t5, $t5, $a3
    ctx->pc = 0x12a2ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x12a2f0: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12a2f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x12a2f4: 0x1e87021  addu        $t6, $t7, $t0
    ctx->pc = 0x12a2f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x12a2f8: 0xa54e0002  sh          $t6, 0x2($t2)
    ctx->pc = 0x12a2f8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 14));
    // 0x12a2fc: 0xe4402  srl         $t0, $t6, 16
    ctx->pc = 0x12a2fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 14), 16));
    // 0x12a300: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x12a300u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x12a304: 0x8d4f0000  lw          $t7, 0x0($t2)
    ctx->pc = 0x12a304u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x12a308: 0x31eeffff  andi        $t6, $t7, 0xFFFF
    ctx->pc = 0x12a308u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x12a30c: 0x1e0582d  daddu       $t3, $t7, $zero
    ctx->pc = 0x12a30cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a310: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x12a310u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x12a314: 0x1a87821  addu        $t7, $t5, $t0
    ctx->pc = 0x12a314u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x12a318: 0x1580ffec  bnez        $t4, . + 4 + (-0x14 << 2)
    ctx->pc = 0x12A318u;
    {
        const bool branch_taken_0x12a318 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A318u;
            // 0x12a31c: 0xf4402  srl         $t0, $t7, 16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a318) {
            ctx->pc = 0x12A2CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a2cc;
        }
    }
    ctx->pc = 0x12A320u;
    // 0x12a320: 0xad4f0000  sw          $t7, 0x0($t2)
    ctx->pc = 0x12a320u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 15));
label_12a324:
    // 0x12a324: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x12a324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x12a328: 0xd0782b  sltu        $t7, $a2, $s0
    ctx->pc = 0x12a328u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x12a32c: 0x15e0ffc4  bnez        $t7, . + 4 + (-0x3C << 2)
    ctx->pc = 0x12A32Cu;
    {
        const bool branch_taken_0x12a32c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A32Cu;
            // 0x12a330: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a32c) {
            ctx->pc = 0x12A240u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a240;
        }
    }
    ctx->pc = 0x12A334u;
label_12a334:
    // 0x12a334: 0x1a20000c  blez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x12A334u;
    {
        const bool branch_taken_0x12a334 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x12A338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A334u;
            // 0x12a338: 0x3195021  addu        $t2, $t8, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a334) {
            ctx->pc = 0x12A368u;
            goto label_12a368;
        }
    }
    ctx->pc = 0x12A33Cu;
    // 0x12a33c: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x12a33cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x12a340: 0x8d4f0000  lw          $t7, 0x0($t2)
    ctx->pc = 0x12a340u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x12a344: 0x55e00009  bnel        $t7, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x12A344u;
    {
        const bool branch_taken_0x12a344 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a344) {
            ctx->pc = 0x12A348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A344u;
            // 0x12a348: 0xac510010  sw          $s1, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A36Cu;
            goto label_12a36c;
        }
    }
    ctx->pc = 0x12A34Cu;
    // 0x12a34c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x12a34cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_12a350:
    // 0x12a350: 0x5a200006  blezl       $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A350u;
    {
        const bool branch_taken_0x12a350 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x12a350) {
            ctx->pc = 0x12A354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A350u;
            // 0x12a354: 0xac510010  sw          $s1, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A36Cu;
            goto label_12a36c;
        }
    }
    ctx->pc = 0x12A358u;
    // 0x12a358: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x12a358u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x12a35c: 0x8d4f0000  lw          $t7, 0x0($t2)
    ctx->pc = 0x12a35cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x12a360: 0x51e0fffb  beql        $t7, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12A360u;
    {
        const bool branch_taken_0x12a360 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a360) {
            ctx->pc = 0x12A364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A360u;
            // 0x12a364: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A350u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a350;
        }
    }
    ctx->pc = 0x12A368u;
label_12a368:
    // 0x12a368: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x12a368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
label_12a36c:
    // 0x12a36c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12a36cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a370: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12a370u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12a374: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12a374u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a378: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12a378u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12a37c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12a37cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a380: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x12a380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a384: 0x3e00008  jr          $ra
    ctx->pc = 0x12A384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A384u;
            // 0x12a388: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12A38Cu;
    // 0x12a38c: 0x0  nop
    ctx->pc = 0x12a38cu;
    // NOP
}
