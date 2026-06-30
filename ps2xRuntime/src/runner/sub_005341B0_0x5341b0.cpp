#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005341B0
// Address: 0x5341b0 - 0x534480
void sub_005341B0_0x5341b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005341B0_0x5341b0");
#endif

    switch (ctx->pc) {
        case 0x534240u: goto label_534240;
        case 0x5343ecu: goto label_5343ec;
        default: break;
    }

    ctx->pc = 0x5341b0u;

    // 0x5341b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x5341b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x5341b4: 0x3c0700be  lui         $a3, 0xBE
    ctx->pc = 0x5341b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)190 << 16));
    // 0x5341b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5341b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x5341bc: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5341bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x5341c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5341c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x5341c4: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x5341c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x5341c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5341c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x5341cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5341ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5341d0: 0x8c48cf98  lw          $t0, -0x3068($v0)
    ctx->pc = 0x5341d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
    // 0x5341d4: 0x24e7b610  addiu       $a3, $a3, -0x49F0
    ctx->pc = 0x5341d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948368));
    // 0x5341d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x5341d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5341dc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x5341dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x5341e0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5341e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x5341e4: 0xac68cf98  sw          $t0, -0x3068($v1)
    ctx->pc = 0x5341e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 8));
    // 0x5341e8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x5341e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x5341ec: 0x8c42cf98  lw          $v0, -0x3068($v0)
    ctx->pc = 0x5341ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
    // 0x5341f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x5341f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x5341f4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x5341f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x5341f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x5341f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x5341fc: 0x10440046  beq         $v0, $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x5341FCu;
    {
        const bool branch_taken_0x5341fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x534200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5341FCu;
            // 0x534200: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5341fc) {
            ctx->pc = 0x534318u;
            goto label_534318;
        }
    }
    ctx->pc = 0x534204u;
    // 0x534204: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x534204u;
    {
        const bool branch_taken_0x534204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x534204) {
            ctx->pc = 0x534214u;
            goto label_534214;
        }
    }
    ctx->pc = 0x53420Cu;
    // 0x53420c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x53420Cu;
    {
        const bool branch_taken_0x53420c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53420c) {
            ctx->pc = 0x534398u;
            goto label_534398;
        }
    }
    ctx->pc = 0x534214u;
label_534214:
    // 0x534214: 0x4a2001e  bltzl       $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x534214u;
    {
        const bool branch_taken_0x534214 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x534214) {
            ctx->pc = 0x534218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534214u;
            // 0x534218: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534290u;
            goto label_534290;
        }
    }
    ctx->pc = 0x53421Cu;
    // 0x53421c: 0xae250058  sw          $a1, 0x58($s1)
    ctx->pc = 0x53421cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 5));
    // 0x534220: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x534220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x534224: 0x50450004  beql        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x534224u;
    {
        const bool branch_taken_0x534224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x534224) {
            ctx->pc = 0x534228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534224u;
            // 0x534228: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534238u;
            goto label_534238;
        }
    }
    ctx->pc = 0x53422Cu;
    // 0x53422c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x53422cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x534230: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x534230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x534234: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x534234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_534238:
    // 0x534238: 0xc0489b2  jal         func_1226C8
    ctx->pc = 0x534238u;
    SET_GPR_U32(ctx, 31, 0x534240u);
    ctx->pc = 0x1226C8u;
    if (runtime->hasFunction(0x1226C8u)) {
        auto targetFn = runtime->lookupFunction(0x1226C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534240u; }
        if (ctx->pc != 0x534240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001226C8_0x1226c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534240u; }
        if (ctx->pc != 0x534240u) { return; }
    }
    ctx->pc = 0x534240u;
label_534240:
    // 0x534240: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x534240u;
    {
        const bool branch_taken_0x534240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x534244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534240u;
            // 0x534244: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534240) {
            ctx->pc = 0x53426Cu;
            goto label_53426c;
        }
    }
    ctx->pc = 0x534248u;
    // 0x534248: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x534248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x53424c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x53424cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x534250: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x534250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x534254: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x534254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
    // 0x534258: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x534258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x53425c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x53425cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x534260: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x534260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x534264: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x534264u;
    {
        const bool branch_taken_0x534264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x534268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534264u;
            // 0x534268: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534264) {
            ctx->pc = 0x5343B0u;
            goto label_5343b0;
        }
    }
    ctx->pc = 0x53426Cu;
label_53426c:
    // 0x53426c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x53426cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x534270: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x534270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x534274: 0x8c43cf98  lw          $v1, -0x3068($v0)
    ctx->pc = 0x534274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
    // 0x534278: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x534278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x53427c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x53427cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x534280: 0x2442b610  addiu       $v0, $v0, -0x49F0
    ctx->pc = 0x534280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
    // 0x534284: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x534284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x534288: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x534288u;
    {
        const bool branch_taken_0x534288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53428Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534288u;
            // 0x53428c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534288) {
            ctx->pc = 0x534398u;
            goto label_534398;
        }
    }
    ctx->pc = 0x534290u;
label_534290:
    // 0x534290: 0x50a20017  beql        $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x534290u;
    {
        const bool branch_taken_0x534290 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x534290) {
            ctx->pc = 0x534294u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534290u;
            // 0x534294: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5342F0u;
            goto label_5342f0;
        }
    }
    ctx->pc = 0x534298u;
    // 0x534298: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x534298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x53429c: 0x50a20012  beql        $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x53429Cu;
    {
        const bool branch_taken_0x53429c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x53429c) {
            ctx->pc = 0x5342A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53429Cu;
            // 0x5342a0: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5342E8u;
            goto label_5342e8;
        }
    }
    ctx->pc = 0x5342A4u;
    // 0x5342a4: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x5342a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x5342a8: 0x50a2000d  beql        $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x5342A8u;
    {
        const bool branch_taken_0x5342a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x5342a8) {
            ctx->pc = 0x5342ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5342A8u;
            // 0x5342ac: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5342E0u;
            goto label_5342e0;
        }
    }
    ctx->pc = 0x5342B0u;
    // 0x5342b0: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x5342b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x5342b4: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x5342B4u;
    {
        const bool branch_taken_0x5342b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x5342b4) {
            ctx->pc = 0x5342B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5342B4u;
            // 0x5342b8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5342D8u;
            goto label_5342d8;
        }
    }
    ctx->pc = 0x5342BCu;
    // 0x5342bc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x5342bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x5342c0: 0x50a20003  beql        $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x5342C0u;
    {
        const bool branch_taken_0x5342c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x5342c0) {
            ctx->pc = 0x5342C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5342C0u;
            // 0x5342c4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5342D0u;
            goto label_5342d0;
        }
    }
    ctx->pc = 0x5342C8u;
    // 0x5342c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x5342C8u;
    {
        const bool branch_taken_0x5342c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5342CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5342C8u;
            // 0x5342cc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5342c8) {
            ctx->pc = 0x5342F8u;
            goto label_5342f8;
        }
    }
    ctx->pc = 0x5342D0u;
label_5342d0:
    // 0x5342d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x5342D0u;
    {
        const bool branch_taken_0x5342d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5342D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5342D0u;
            // 0x5342d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5342d0) {
            ctx->pc = 0x5342FCu;
            goto label_5342fc;
        }
    }
    ctx->pc = 0x5342D8u;
label_5342d8:
    // 0x5342d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x5342D8u;
    {
        const bool branch_taken_0x5342d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5342DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5342D8u;
            // 0x5342dc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5342d8) {
            ctx->pc = 0x5342FCu;
            goto label_5342fc;
        }
    }
    ctx->pc = 0x5342E0u;
label_5342e0:
    // 0x5342e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x5342E0u;
    {
        const bool branch_taken_0x5342e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5342E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5342E0u;
            // 0x5342e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5342e0) {
            ctx->pc = 0x5342FCu;
            goto label_5342fc;
        }
    }
    ctx->pc = 0x5342E8u;
label_5342e8:
    // 0x5342e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x5342E8u;
    {
        const bool branch_taken_0x5342e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5342ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5342E8u;
            // 0x5342ec: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5342e8) {
            ctx->pc = 0x5342FCu;
            goto label_5342fc;
        }
    }
    ctx->pc = 0x5342F0u;
label_5342f0:
    // 0x5342f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x5342F0u;
    {
        const bool branch_taken_0x5342f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5342F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5342F0u;
            // 0x5342f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5342f0) {
            ctx->pc = 0x5342FCu;
            goto label_5342fc;
        }
    }
    ctx->pc = 0x5342F8u;
label_5342f8:
    // 0x5342f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x5342f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_5342fc:
    // 0x5342fc: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5342fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x534300: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x534300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x534304: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x534304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
    // 0x534308: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x534308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x53430c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x53430cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x534310: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x534310u;
    {
        const bool branch_taken_0x534310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x534314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534310u;
            // 0x534314: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534310) {
            ctx->pc = 0x5343B0u;
            goto label_5343b0;
        }
    }
    ctx->pc = 0x534318u;
label_534318:
    // 0x534318: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x534318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x53431c: 0x50a20014  beql        $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x53431Cu;
    {
        const bool branch_taken_0x53431c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x53431c) {
            ctx->pc = 0x534320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53431Cu;
            // 0x534320: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534370u;
            goto label_534370;
        }
    }
    ctx->pc = 0x534324u;
    // 0x534324: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x534324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x534328: 0x50a2000f  beql        $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x534328u;
    {
        const bool branch_taken_0x534328 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x534328) {
            ctx->pc = 0x53432Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534328u;
            // 0x53432c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534368u;
            goto label_534368;
        }
    }
    ctx->pc = 0x534330u;
    // 0x534330: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x534330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x534334: 0x50a2000a  beql        $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x534334u;
    {
        const bool branch_taken_0x534334 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x534334) {
            ctx->pc = 0x534338u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534334u;
            // 0x534338: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534360u;
            goto label_534360;
        }
    }
    ctx->pc = 0x53433Cu;
    // 0x53433c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x53433cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x534340: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x534340u;
    {
        const bool branch_taken_0x534340 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x534340) {
            ctx->pc = 0x534344u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534340u;
            // 0x534344: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534358u;
            goto label_534358;
        }
    }
    ctx->pc = 0x534348u;
    // 0x534348: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x534348u;
    {
        const bool branch_taken_0x534348 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x534348) {
            ctx->pc = 0x53437Cu;
            goto label_53437c;
        }
    }
    ctx->pc = 0x534350u;
    // 0x534350: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x534350u;
    {
        const bool branch_taken_0x534350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x534354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534350u;
            // 0x534354: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534350) {
            ctx->pc = 0x534378u;
            goto label_534378;
        }
    }
    ctx->pc = 0x534358u;
label_534358:
    // 0x534358: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x534358u;
    {
        const bool branch_taken_0x534358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53435Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534358u;
            // 0x53435c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534358) {
            ctx->pc = 0x53437Cu;
            goto label_53437c;
        }
    }
    ctx->pc = 0x534360u;
label_534360:
    // 0x534360: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x534360u;
    {
        const bool branch_taken_0x534360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x534364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534360u;
            // 0x534364: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534360) {
            ctx->pc = 0x53437Cu;
            goto label_53437c;
        }
    }
    ctx->pc = 0x534368u;
label_534368:
    // 0x534368: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x534368u;
    {
        const bool branch_taken_0x534368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53436Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534368u;
            // 0x53436c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534368) {
            ctx->pc = 0x53437Cu;
            goto label_53437c;
        }
    }
    ctx->pc = 0x534370u;
label_534370:
    // 0x534370: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x534370u;
    {
        const bool branch_taken_0x534370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x534374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534370u;
            // 0x534374: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534370) {
            ctx->pc = 0x53437Cu;
            goto label_53437c;
        }
    }
    ctx->pc = 0x534378u;
label_534378:
    // 0x534378: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x534378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_53437c:
    // 0x53437c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x53437cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x534380: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x534380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x534384: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x534384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
    // 0x534388: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x534388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x53438c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x53438cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x534390: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x534390u;
    {
        const bool branch_taken_0x534390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x534394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534390u;
            // 0x534394: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534390) {
            ctx->pc = 0x5343B0u;
            goto label_5343b0;
        }
    }
    ctx->pc = 0x534398u;
label_534398:
    // 0x534398: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x534398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x53439c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x53439cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x5343a0: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x5343a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
    // 0x5343a4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x5343a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x5343a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x5343a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5343ac: 0xac64cf98  sw          $a0, -0x3068($v1)
    ctx->pc = 0x5343acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
label_5343b0:
    // 0x5343b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5343b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5343b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5343b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5343b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5343b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5343bc: 0x3e00008  jr          $ra
    ctx->pc = 0x5343BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5343C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5343BCu;
            // 0x5343c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5343C4u;
    // 0x5343c4: 0x0  nop
    ctx->pc = 0x5343c4u;
    // NOP
    // 0x5343c8: 0x0  nop
    ctx->pc = 0x5343c8u;
    // NOP
    // 0x5343cc: 0x0  nop
    ctx->pc = 0x5343ccu;
    // NOP
    // 0x5343d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5343d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x5343d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5343d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x5343d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5343d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x5343dc: 0xac860054  sw          $a2, 0x54($a0)
    ctx->pc = 0x5343dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 6));
    // 0x5343e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5343e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5343e4: 0xc04874c  jal         func_121D30
    ctx->pc = 0x5343E4u;
    SET_GPR_U32(ctx, 31, 0x5343ECu);
    ctx->pc = 0x5343E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5343E4u;
            // 0x5343e8: 0x8c840050  lw          $a0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121D30u;
    if (runtime->hasFunction(0x121D30u)) {
        auto targetFn = runtime->lookupFunction(0x121D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5343ECu; }
        if (ctx->pc != 0x5343ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00121D30_0x121d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5343ECu; }
        if (ctx->pc != 0x5343ECu) { return; }
    }
    ctx->pc = 0x5343ECu;
label_5343ec:
    // 0x5343ec: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x5343ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x5343f0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x5343f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x5343f4: 0x8c66cf98  lw          $a2, -0x3068($v1)
    ctx->pc = 0x5343f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954904)));
    // 0x5343f8: 0x3c0500be  lui         $a1, 0xBE
    ctx->pc = 0x5343f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)190 << 16));
    // 0x5343fc: 0x24a5b610  addiu       $a1, $a1, -0x49F0
    ctx->pc = 0x5343fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948368));
    // 0x534400: 0x2404ff2e  addiu       $a0, $zero, -0xD2
    ctx->pc = 0x534400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
    // 0x534404: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x534404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x534408: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x534408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x53440c: 0xac66cf98  sw          $a2, -0x3068($v1)
    ctx->pc = 0x53440cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 6));
    // 0x534410: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x534410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x534414: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x534414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x534418: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x534418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x53441c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x53441cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x534420: 0x50a4000d  beql        $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x534420u;
    {
        const bool branch_taken_0x534420 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x534420) {
            ctx->pc = 0x534424u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534420u;
            // 0x534424: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534458u;
            goto label_534458;
        }
    }
    ctx->pc = 0x534428u;
    // 0x534428: 0x2403ff38  addiu       $v1, $zero, -0xC8
    ctx->pc = 0x534428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x53442c: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x53442Cu;
    {
        const bool branch_taken_0x53442c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53442c) {
            ctx->pc = 0x534454u;
            goto label_534454;
        }
    }
    ctx->pc = 0x534434u;
    // 0x534434: 0x2403ff9c  addiu       $v1, $zero, -0x64
    ctx->pc = 0x534434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x534438: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x534438u;
    {
        const bool branch_taken_0x534438 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x534438) {
            ctx->pc = 0x534454u;
            goto label_534454;
        }
    }
    ctx->pc = 0x534440u;
    // 0x534440: 0x2403ffa5  addiu       $v1, $zero, -0x5B
    ctx->pc = 0x534440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
    // 0x534444: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x534444u;
    {
        const bool branch_taken_0x534444 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x534444) {
            ctx->pc = 0x534454u;
            goto label_534454;
        }
    }
    ctx->pc = 0x53444Cu;
    // 0x53444c: 0x50a00002  beql        $a1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x53444Cu;
    {
        const bool branch_taken_0x53444c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x53444c) {
            ctx->pc = 0x534450u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53444Cu;
            // 0x534450: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534458u;
            goto label_534458;
        }
    }
    ctx->pc = 0x534454u;
label_534454:
    // 0x534454: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x534454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_534458:
    // 0x534458: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x534458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x53445c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x53445cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x534460: 0x8c64cf98  lw          $a0, -0x3068($v1)
    ctx->pc = 0x534460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954904)));
    // 0x534464: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x534464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x534468: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x534468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x53446c: 0xac64cf98  sw          $a0, -0x3068($v1)
    ctx->pc = 0x53446cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
    // 0x534470: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x534470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x534474: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x534474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x534478: 0x3e00008  jr          $ra
    ctx->pc = 0x534478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53447Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534478u;
            // 0x53447c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x534480u;
}
