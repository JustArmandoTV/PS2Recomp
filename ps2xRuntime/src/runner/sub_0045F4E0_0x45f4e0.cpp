#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0045F4E0
// Address: 0x45f4e0 - 0x45f680
void sub_0045F4E0_0x45f4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045F4E0_0x45f4e0");
#endif

    switch (ctx->pc) {
        case 0x45f508u: goto label_45f508;
        case 0x45f514u: goto label_45f514;
        case 0x45f62cu: goto label_45f62c;
        case 0x45f63cu: goto label_45f63c;
        case 0x45f664u: goto label_45f664;
        default: break;
    }

    ctx->pc = 0x45f4e0u;

    // 0x45f4e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x45f4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x45f4e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x45f4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x45f4e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x45f4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x45f4ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x45f4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x45f4f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x45f4f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45f4f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x45f4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x45f4f8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x45f4f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x45f4fc: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x45f4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x45f500: 0xc0c9a58  jal         func_326960
    ctx->pc = 0x45F500u;
    SET_GPR_U32(ctx, 31, 0x45F508u);
    ctx->pc = 0x45F504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45F500u;
            // 0x45f504: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F508u; }
        if (ctx->pc != 0x45F508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F508u; }
        if (ctx->pc != 0x45F508u) { return; }
    }
    ctx->pc = 0x45F508u;
label_45f508:
    // 0x45f508: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45f508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x45f50c: 0xc123328  jal         func_48CCA0
    ctx->pc = 0x45F50Cu;
    SET_GPR_U32(ctx, 31, 0x45F514u);
    ctx->pc = 0x45F510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45F50Cu;
            // 0x45f510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F514u; }
        if (ctx->pc != 0x45F514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F514u; }
        if (ctx->pc != 0x45F514u) { return; }
    }
    ctx->pc = 0x45F514u;
label_45f514:
    // 0x45f514: 0x3c033f26  lui         $v1, 0x3F26
    ctx->pc = 0x45f514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16166 << 16));
    // 0x45f518: 0x2c410044  sltiu       $at, $v0, 0x44
    ctx->pc = 0x45f518u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)68) ? 1 : 0);
    // 0x45f51c: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x45f51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x45f520: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x45f520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45f524: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x45f524u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x45f528: 0x10200044  beqz        $at, . + 4 + (0x44 << 2)
    ctx->pc = 0x45F528u;
    {
        const bool branch_taken_0x45f528 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F528u;
            // 0x45f52c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f528) {
            ctx->pc = 0x45F63Cu;
            goto label_45f63c;
        }
    }
    ctx->pc = 0x45F530u;
    // 0x45f530: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x45f530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x45f534: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45f534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x45f538: 0x2484e390  addiu       $a0, $a0, -0x1C70
    ctx->pc = 0x45f538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960016));
    // 0x45f53c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45f53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45f540: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x45f540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x45f544: 0x600008  jr          $v1
    ctx->pc = 0x45F544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x45F54Cu: goto label_45f54c;
            case 0x45F554u: goto label_45f554;
            case 0x45F55Cu: goto label_45f55c;
            case 0x45F564u: goto label_45f564;
            case 0x45F56Cu: goto label_45f56c;
            case 0x45F574u: goto label_45f574;
            case 0x45F57Cu: goto label_45f57c;
            case 0x45F584u: goto label_45f584;
            case 0x45F58Cu: goto label_45f58c;
            case 0x45F594u: goto label_45f594;
            case 0x45F59Cu: goto label_45f59c;
            case 0x45F5A4u: goto label_45f5a4;
            case 0x45F5ACu: goto label_45f5ac;
            case 0x45F5B4u: goto label_45f5b4;
            case 0x45F5BCu: goto label_45f5bc;
            case 0x45F5C4u: goto label_45f5c4;
            case 0x45F5CCu: goto label_45f5cc;
            case 0x45F5D4u: goto label_45f5d4;
            case 0x45F5DCu: goto label_45f5dc;
            case 0x45F5E4u: goto label_45f5e4;
            case 0x45F5ECu: goto label_45f5ec;
            case 0x45F604u: goto label_45f604;
            case 0x45F60Cu: goto label_45f60c;
            case 0x45F614u: goto label_45f614;
            case 0x45F61Cu: goto label_45f61c;
            case 0x45F624u: goto label_45f624;
            case 0x45F634u: goto label_45f634;
            case 0x45F63Cu: goto label_45f63c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x45F54Cu;
label_45f54c:
    // 0x45f54c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x45F54Cu;
    {
        const bool branch_taken_0x45f54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F54Cu;
            // 0x45f550: 0x24110052  addiu       $s1, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f54c) {
            ctx->pc = 0x45F63Cu;
            goto label_45f63c;
        }
    }
    ctx->pc = 0x45F554u;
label_45f554:
    // 0x45f554: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x45F554u;
    {
        const bool branch_taken_0x45f554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F554u;
            // 0x45f558: 0x24110053  addiu       $s1, $zero, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f554) {
            ctx->pc = 0x45F63Cu;
            goto label_45f63c;
        }
    }
    ctx->pc = 0x45F55Cu;
label_45f55c:
    // 0x45f55c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x45F55Cu;
    {
        const bool branch_taken_0x45f55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F55Cu;
            // 0x45f560: 0x24110054  addiu       $s1, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f55c) {
            ctx->pc = 0x45F63Cu;
            goto label_45f63c;
        }
    }
    ctx->pc = 0x45F564u;
label_45f564:
    // 0x45f564: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x45F564u;
    {
        const bool branch_taken_0x45f564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F564u;
            // 0x45f568: 0x24110055  addiu       $s1, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f564) {
            ctx->pc = 0x45F63Cu;
            goto label_45f63c;
        }
    }
    ctx->pc = 0x45F56Cu;
label_45f56c:
    // 0x45f56c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x45F56Cu;
    {
        const bool branch_taken_0x45f56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F56Cu;
            // 0x45f570: 0x24110056  addiu       $s1, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f56c) {
            ctx->pc = 0x45F63Cu;
            goto label_45f63c;
        }
    }
    ctx->pc = 0x45F574u;
label_45f574:
    // 0x45f574: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x45F574u;
    {
        const bool branch_taken_0x45f574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F574u;
            // 0x45f578: 0x24110057  addiu       $s1, $zero, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f574) {
            ctx->pc = 0x45F63Cu;
            goto label_45f63c;
        }
    }
    ctx->pc = 0x45F57Cu;
label_45f57c:
    // 0x45f57c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x45F57Cu;
    {
        const bool branch_taken_0x45f57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F57Cu;
            // 0x45f580: 0x24110064  addiu       $s1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f57c) {
            ctx->pc = 0x45F63Cu;
            goto label_45f63c;
        }
    }
    ctx->pc = 0x45F584u;
label_45f584:
    // 0x45f584: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x45F584u;
    {
        const bool branch_taken_0x45f584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F584u;
            // 0x45f588: 0x24110065  addiu       $s1, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f584) {
            ctx->pc = 0x45F63Cu;
            goto label_45f63c;
        }
    }
    ctx->pc = 0x45F58Cu;
label_45f58c:
    // 0x45f58c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x45F58Cu;
    {
        const bool branch_taken_0x45f58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F58Cu;
            // 0x45f590: 0x24110066  addiu       $s1, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f58c) {
            ctx->pc = 0x45F63Cu;
            goto label_45f63c;
        }
    }
    ctx->pc = 0x45F594u;
label_45f594:
    // 0x45f594: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x45F594u;
    {
        const bool branch_taken_0x45f594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F594u;
            // 0x45f598: 0x24110067  addiu       $s1, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f594) {
            ctx->pc = 0x45F63Cu;
            goto label_45f63c;
        }
    }
    ctx->pc = 0x45F59Cu;
label_45f59c:
    // 0x45f59c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x45F59Cu;
    {
        const bool branch_taken_0x45f59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F59Cu;
            // 0x45f5a0: 0x24110068  addiu       $s1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f59c) {
            ctx->pc = 0x45F63Cu;
            goto label_45f63c;
        }
    }
    ctx->pc = 0x45F5A4u;
label_45f5a4:
    // 0x45f5a4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x45F5A4u;
    {
        const bool branch_taken_0x45f5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F5A4u;
            // 0x45f5a8: 0x2411006a  addiu       $s1, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f5a4) {
            ctx->pc = 0x45F63Cu;
            goto label_45f63c;
        }
    }
    ctx->pc = 0x45F5ACu;
label_45f5ac:
    // 0x45f5ac: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x45F5ACu;
    {
        const bool branch_taken_0x45f5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F5ACu;
            // 0x45f5b0: 0x24110069  addiu       $s1, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f5ac) {
            ctx->pc = 0x45F63Cu;
            goto label_45f63c;
        }
    }
    ctx->pc = 0x45F5B4u;
label_45f5b4:
    // 0x45f5b4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x45F5B4u;
    {
        const bool branch_taken_0x45f5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F5B4u;
            // 0x45f5b8: 0x2411006b  addiu       $s1, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f5b4) {
            ctx->pc = 0x45F63Cu;
            goto label_45f63c;
        }
    }
    ctx->pc = 0x45F5BCu;
label_45f5bc:
    // 0x45f5bc: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x45F5BCu;
    {
        const bool branch_taken_0x45f5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F5BCu;
            // 0x45f5c0: 0x24510049  addiu       $s1, $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f5bc) {
            ctx->pc = 0x45F63Cu;
            goto label_45f63c;
        }
    }
    ctx->pc = 0x45F5C4u;
label_45f5c4:
    // 0x45f5c4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x45F5C4u;
    {
        const bool branch_taken_0x45f5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F5C4u;
            // 0x45f5c8: 0x24110063  addiu       $s1, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f5c4) {
            ctx->pc = 0x45F63Cu;
            goto label_45f63c;
        }
    }
    ctx->pc = 0x45F5CCu;
label_45f5cc:
    // 0x45f5cc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x45F5CCu;
    {
        const bool branch_taken_0x45f5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F5CCu;
            // 0x45f5d0: 0x24110062  addiu       $s1, $zero, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f5cc) {
            ctx->pc = 0x45F63Cu;
            goto label_45f63c;
        }
    }
    ctx->pc = 0x45F5D4u;
label_45f5d4:
    // 0x45f5d4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x45F5D4u;
    {
        const bool branch_taken_0x45f5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F5D4u;
            // 0x45f5d8: 0x241100d9  addiu       $s1, $zero, 0xD9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f5d4) {
            ctx->pc = 0x45F63Cu;
            goto label_45f63c;
        }
    }
    ctx->pc = 0x45F5DCu;
label_45f5dc:
    // 0x45f5dc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x45F5DCu;
    {
        const bool branch_taken_0x45f5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F5DCu;
            // 0x45f5e0: 0x241100d8  addiu       $s1, $zero, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f5dc) {
            ctx->pc = 0x45F63Cu;
            goto label_45f63c;
        }
    }
    ctx->pc = 0x45F5E4u;
label_45f5e4:
    // 0x45f5e4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x45F5E4u;
    {
        const bool branch_taken_0x45f5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F5E4u;
            // 0x45f5e8: 0x241100d7  addiu       $s1, $zero, 0xD7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f5e4) {
            ctx->pc = 0x45F63Cu;
            goto label_45f63c;
        }
    }
    ctx->pc = 0x45F5ECu;
label_45f5ec:
    // 0x45f5ec: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x45f5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x45f5f0: 0x24510072  addiu       $s1, $v0, 0x72
    ctx->pc = 0x45f5f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 114));
    // 0x45f5f4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x45f5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x45f5f8: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x45f5f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x45f5fc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x45F5FCu;
    {
        const bool branch_taken_0x45f5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F5FCu;
            // 0x45f600: 0x2410ff24  addiu       $s0, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f5fc) {
            ctx->pc = 0x45F63Cu;
            goto label_45f63c;
        }
    }
    ctx->pc = 0x45F604u;
label_45f604:
    // 0x45f604: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x45F604u;
    {
        const bool branch_taken_0x45f604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F604u;
            // 0x45f608: 0x241100db  addiu       $s1, $zero, 0xDB (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f604) {
            ctx->pc = 0x45F63Cu;
            goto label_45f63c;
        }
    }
    ctx->pc = 0x45F60Cu;
label_45f60c:
    // 0x45f60c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x45F60Cu;
    {
        const bool branch_taken_0x45f60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F60Cu;
            // 0x45f610: 0x241100dc  addiu       $s1, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f60c) {
            ctx->pc = 0x45F63Cu;
            goto label_45f63c;
        }
    }
    ctx->pc = 0x45F614u;
label_45f614:
    // 0x45f614: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x45F614u;
    {
        const bool branch_taken_0x45f614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F614u;
            // 0x45f618: 0x241100da  addiu       $s1, $zero, 0xDA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f614) {
            ctx->pc = 0x45F63Cu;
            goto label_45f63c;
        }
    }
    ctx->pc = 0x45F61Cu;
label_45f61c:
    // 0x45f61c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x45F61Cu;
    {
        const bool branch_taken_0x45f61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F61Cu;
            // 0x45f620: 0x245100a6  addiu       $s1, $v0, 0xA6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 166));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f61c) {
            ctx->pc = 0x45F63Cu;
            goto label_45f63c;
        }
    }
    ctx->pc = 0x45F624u;
label_45f624:
    // 0x45f624: 0xc117dd4  jal         func_45F750
    ctx->pc = 0x45F624u;
    SET_GPR_U32(ctx, 31, 0x45F62Cu);
    ctx->pc = 0x45F628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45F624u;
            // 0x45f628: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x45F750u;
    if (runtime->hasFunction(0x45F750u)) {
        auto targetFn = runtime->lookupFunction(0x45F750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F62Cu; }
        if (ctx->pc != 0x45F62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045F750_0x45f750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F62Cu; }
        if (ctx->pc != 0x45F62Cu) { return; }
    }
    ctx->pc = 0x45F62Cu;
label_45f62c:
    // 0x45f62c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x45F62Cu;
    {
        const bool branch_taken_0x45f62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F62Cu;
            // 0x45f630: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f62c) {
            ctx->pc = 0x45F640u;
            goto label_45f640;
        }
    }
    ctx->pc = 0x45F634u;
label_45f634:
    // 0x45f634: 0xc117da0  jal         func_45F680
    ctx->pc = 0x45F634u;
    SET_GPR_U32(ctx, 31, 0x45F63Cu);
    ctx->pc = 0x45F638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45F634u;
            // 0x45f638: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x45F680u;
    if (runtime->hasFunction(0x45F680u)) {
        auto targetFn = runtime->lookupFunction(0x45F680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F63Cu; }
        if (ctx->pc != 0x45F63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045F680_0x45f680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F63Cu; }
        if (ctx->pc != 0x45F63Cu) { return; }
    }
    ctx->pc = 0x45F63Cu;
label_45f63c:
    // 0x45f63c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x45f63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45f640:
    // 0x45f640: 0x52230009  beql        $s1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x45F640u;
    {
        const bool branch_taken_0x45f640 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x45f640) {
            ctx->pc = 0x45F644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45F640u;
            // 0x45f644: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45F668u;
            goto label_45f668;
        }
    }
    ctx->pc = 0x45F648u;
    // 0x45f648: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x45f648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x45f64c: 0x2407fc18  addiu       $a3, $zero, -0x3E8
    ctx->pc = 0x45f64cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    // 0x45f650: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x45f650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45f654: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x45f654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45f658: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x45f658u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x45f65c: 0xc0c85cc  jal         func_321730
    ctx->pc = 0x45F65Cu;
    SET_GPR_U32(ctx, 31, 0x45F664u);
    ctx->pc = 0x45F660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45F65Cu;
            // 0x45f660: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321730u;
    if (runtime->hasFunction(0x321730u)) {
        auto targetFn = runtime->lookupFunction(0x321730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F664u; }
        if (ctx->pc != 0x45F664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321730_0x321730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F664u; }
        if (ctx->pc != 0x45F664u) { return; }
    }
    ctx->pc = 0x45F664u;
label_45f664:
    // 0x45f664: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x45f664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_45f668:
    // 0x45f668: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x45f668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x45f66c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x45f66cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45f670: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x45f670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45f674: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x45f674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45f678: 0x3e00008  jr          $ra
    ctx->pc = 0x45F678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45F67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F678u;
            // 0x45f67c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45F680u;
}
