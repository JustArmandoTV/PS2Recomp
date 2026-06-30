#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00534480
// Address: 0x534480 - 0x5345e0
void sub_00534480_0x534480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00534480_0x534480");
#endif

    switch (ctx->pc) {
        case 0x53450cu: goto label_53450c;
        case 0x534590u: goto label_534590;
        default: break;
    }

    ctx->pc = 0x534480u;

    // 0x534480: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x534480u;
    {
        const bool branch_taken_0x534480 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x534484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534480u;
            // 0x534484: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534480) {
            ctx->pc = 0x5344A0u;
            goto label_5344a0;
        }
    }
    ctx->pc = 0x534488u;
    // 0x534488: 0xac850058  sw          $a1, 0x58($a0)
    ctx->pc = 0x534488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 5));
    // 0x53448c: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x53448cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x534490: 0x10650012  beq         $v1, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x534490u;
    {
        const bool branch_taken_0x534490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x534490) {
            ctx->pc = 0x5344DCu;
            goto label_5344dc;
        }
    }
    ctx->pc = 0x534498u;
    // 0x534498: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x534498u;
    {
        const bool branch_taken_0x534498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53449Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534498u;
            // 0x53449c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534498) {
            ctx->pc = 0x5344DCu;
            goto label_5344dc;
        }
    }
    ctx->pc = 0x5344A0u;
label_5344a0:
    // 0x5344a0: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x5344a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x5344a4: 0x50a3000d  beql        $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x5344A4u;
    {
        const bool branch_taken_0x5344a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5344a4) {
            ctx->pc = 0x5344A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5344A4u;
            // 0x5344a8: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5344DCu;
            goto label_5344dc;
        }
    }
    ctx->pc = 0x5344ACu;
    // 0x5344ac: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x5344acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x5344b0: 0x50a3000a  beql        $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x5344B0u;
    {
        const bool branch_taken_0x5344b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5344b0) {
            ctx->pc = 0x5344B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5344B0u;
            // 0x5344b4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5344DCu;
            goto label_5344dc;
        }
    }
    ctx->pc = 0x5344B8u;
    // 0x5344b8: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x5344b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x5344bc: 0x50a30007  beql        $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x5344BCu;
    {
        const bool branch_taken_0x5344bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5344bc) {
            ctx->pc = 0x5344C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5344BCu;
            // 0x5344c0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5344DCu;
            goto label_5344dc;
        }
    }
    ctx->pc = 0x5344C4u;
    // 0x5344c4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x5344c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x5344c8: 0x50a30004  beql        $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x5344C8u;
    {
        const bool branch_taken_0x5344c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5344c8) {
            ctx->pc = 0x5344CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5344C8u;
            // 0x5344cc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5344DCu;
            goto label_5344dc;
        }
    }
    ctx->pc = 0x5344D0u;
    // 0x5344d0: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x5344D0u;
    {
        const bool branch_taken_0x5344d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x5344d0) {
            ctx->pc = 0x5344DCu;
            goto label_5344dc;
        }
    }
    ctx->pc = 0x5344D8u;
    // 0x5344d8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x5344d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_5344dc:
    // 0x5344dc: 0x3e00008  jr          $ra
    ctx->pc = 0x5344DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5344E4u;
    // 0x5344e4: 0x0  nop
    ctx->pc = 0x5344e4u;
    // NOP
    // 0x5344e8: 0x0  nop
    ctx->pc = 0x5344e8u;
    // NOP
    // 0x5344ec: 0x0  nop
    ctx->pc = 0x5344ecu;
    // NOP
    // 0x5344f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5344f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x5344f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5344f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x5344f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5344f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x5344fc: 0xac860054  sw          $a2, 0x54($a0)
    ctx->pc = 0x5344fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 6));
    // 0x534500: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x534500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x534504: 0xc048706  jal         func_121C18
    ctx->pc = 0x534504u;
    SET_GPR_U32(ctx, 31, 0x53450Cu);
    ctx->pc = 0x534508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x534504u;
            // 0x534508: 0x8c840050  lw          $a0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121C18u;
    if (runtime->hasFunction(0x121C18u)) {
        auto targetFn = runtime->lookupFunction(0x121C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53450Cu; }
        if (ctx->pc != 0x53450Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00121C18_0x121c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53450Cu; }
        if (ctx->pc != 0x53450Cu) { return; }
    }
    ctx->pc = 0x53450Cu;
label_53450c:
    // 0x53450c: 0x2403ff2e  addiu       $v1, $zero, -0xD2
    ctx->pc = 0x53450cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
    // 0x534510: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x534510u;
    {
        const bool branch_taken_0x534510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x534514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534510u;
            // 0x534514: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534510) {
            ctx->pc = 0x534544u;
            goto label_534544;
        }
    }
    ctx->pc = 0x534518u;
    // 0x534518: 0x2403ff38  addiu       $v1, $zero, -0xC8
    ctx->pc = 0x534518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x53451c: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x53451Cu;
    {
        const bool branch_taken_0x53451c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x53451c) {
            ctx->pc = 0x534520u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53451Cu;
            // 0x534520: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534548u;
            goto label_534548;
        }
    }
    ctx->pc = 0x534524u;
    // 0x534524: 0x2403ff9c  addiu       $v1, $zero, -0x64
    ctx->pc = 0x534524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x534528: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x534528u;
    {
        const bool branch_taken_0x534528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x534528) {
            ctx->pc = 0x534544u;
            goto label_534544;
        }
    }
    ctx->pc = 0x534530u;
    // 0x534530: 0x2403ffa5  addiu       $v1, $zero, -0x5B
    ctx->pc = 0x534530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
    // 0x534534: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x534534u;
    {
        const bool branch_taken_0x534534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x534534) {
            ctx->pc = 0x534544u;
            goto label_534544;
        }
    }
    ctx->pc = 0x53453Cu;
    // 0x53453c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x53453Cu;
    {
        const bool branch_taken_0x53453c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53453c) {
            ctx->pc = 0x534540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53453Cu;
            // 0x534540: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534548u;
            goto label_534548;
        }
    }
    ctx->pc = 0x534544u;
label_534544:
    // 0x534544: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x534544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_534548:
    // 0x534548: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x534548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x53454c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x53454cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x534550: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x534550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x534554: 0x3e00008  jr          $ra
    ctx->pc = 0x534554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x534558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534554u;
            // 0x534558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53455Cu;
    // 0x53455c: 0x0  nop
    ctx->pc = 0x53455cu;
    // NOP
    // 0x534560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x534560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x534564: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x534564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x534568: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x534568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x53456c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x53456cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x534570: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x534570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x534574: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x534574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x534578: 0xa0820025  sb          $v0, 0x25($a0)
    ctx->pc = 0x534578u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 37), (uint8_t)GPR_U32(ctx, 2));
    // 0x53457c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x53457cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x534580: 0x8082002c  lb          $v0, 0x2C($a0)
    ctx->pc = 0x534580u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x534584: 0x80850024  lb          $a1, 0x24($a0)
    ctx->pc = 0x534584u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x534588: 0xc04861a  jal         func_121868
    ctx->pc = 0x534588u;
    SET_GPR_U32(ctx, 31, 0x534590u);
    ctx->pc = 0x53458Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x534588u;
            // 0x53458c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121868u;
    if (runtime->hasFunction(0x121868u)) {
        auto targetFn = runtime->lookupFunction(0x121868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534590u; }
        if (ctx->pc != 0x534590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00121868_0x121868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534590u; }
        if (ctx->pc != 0x534590u) { return; }
    }
    ctx->pc = 0x534590u;
label_534590:
    // 0x534590: 0x2403ff2e  addiu       $v1, $zero, -0xD2
    ctx->pc = 0x534590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
    // 0x534594: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x534594u;
    {
        const bool branch_taken_0x534594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x534598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534594u;
            // 0x534598: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534594) {
            ctx->pc = 0x5345C8u;
            goto label_5345c8;
        }
    }
    ctx->pc = 0x53459Cu;
    // 0x53459c: 0x2403ff38  addiu       $v1, $zero, -0xC8
    ctx->pc = 0x53459cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x5345a0: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x5345A0u;
    {
        const bool branch_taken_0x5345a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x5345a0) {
            ctx->pc = 0x5345A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5345A0u;
            // 0x5345a4: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5345CCu;
            goto label_5345cc;
        }
    }
    ctx->pc = 0x5345A8u;
    // 0x5345a8: 0x2403ff9c  addiu       $v1, $zero, -0x64
    ctx->pc = 0x5345a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x5345ac: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x5345ACu;
    {
        const bool branch_taken_0x5345ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x5345ac) {
            ctx->pc = 0x5345C8u;
            goto label_5345c8;
        }
    }
    ctx->pc = 0x5345B4u;
    // 0x5345b4: 0x2403ffa5  addiu       $v1, $zero, -0x5B
    ctx->pc = 0x5345b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
    // 0x5345b8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x5345B8u;
    {
        const bool branch_taken_0x5345b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x5345b8) {
            ctx->pc = 0x5345C8u;
            goto label_5345c8;
        }
    }
    ctx->pc = 0x5345C0u;
    // 0x5345c0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x5345C0u;
    {
        const bool branch_taken_0x5345c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5345c0) {
            ctx->pc = 0x5345C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5345C0u;
            // 0x5345c4: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5345CCu;
            goto label_5345cc;
        }
    }
    ctx->pc = 0x5345C8u;
label_5345c8:
    // 0x5345c8: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x5345c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_5345cc:
    // 0x5345cc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x5345ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x5345d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5345d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5345d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5345d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5345d8: 0x3e00008  jr          $ra
    ctx->pc = 0x5345D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5345DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5345D8u;
            // 0x5345dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5345E0u;
}
