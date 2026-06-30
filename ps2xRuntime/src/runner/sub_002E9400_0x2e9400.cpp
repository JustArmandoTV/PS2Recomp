#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E9400
// Address: 0x2e9400 - 0x2e96d0
void sub_002E9400_0x2e9400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9400_0x2e9400");
#endif

    switch (ctx->pc) {
        case 0x2e9458u: goto label_2e9458;
        case 0x2e950cu: goto label_2e950c;
        case 0x2e9530u: goto label_2e9530;
        case 0x2e953cu: goto label_2e953c;
        case 0x2e9570u: goto label_2e9570;
        case 0x2e9594u: goto label_2e9594;
        case 0x2e95a0u: goto label_2e95a0;
        case 0x2e95b4u: goto label_2e95b4;
        default: break;
    }

    ctx->pc = 0x2e9400u;

    // 0x2e9400: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e9400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e9404: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e9404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2e9408: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e9408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e940c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e940cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e9410: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e9410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e9414: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e9414u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9418: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e9418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e941c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e941cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9420: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e9420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e9424: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x2e9424u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2e9428: 0x8c700e80  lw          $s0, 0xE80($v1)
    ctx->pc = 0x2e9428u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x2e942c: 0x8c840e38  lw          $a0, 0xE38($a0)
    ctx->pc = 0x2e942cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3640)));
    // 0x2e9430: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9430u;
    {
        const bool branch_taken_0x2e9430 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2E9434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9430u;
            // 0x2e9434: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9430) {
            ctx->pc = 0x2E9448u;
            goto label_2e9448;
        }
    }
    ctx->pc = 0x2E9438u;
    // 0x2e9438: 0x28810004  slti        $at, $a0, 0x4
    ctx->pc = 0x2e9438u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2e943c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E943Cu;
    {
        const bool branch_taken_0x2e943c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e943c) {
            ctx->pc = 0x2E9448u;
            goto label_2e9448;
        }
    }
    ctx->pc = 0x2E9444u;
    // 0x2e9444: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x2e9444u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e9448:
    // 0x2e9448: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E9448u;
    {
        const bool branch_taken_0x2e9448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9448) {
            ctx->pc = 0x2E944Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9448u;
            // 0x2e944c: 0x8e640e34  lw          $a0, 0xE34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9468u;
            goto label_2e9468;
        }
    }
    ctx->pc = 0x2E9450u;
    // 0x2e9450: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x2E9450u;
    SET_GPR_U32(ctx, 31, 0x2E9458u);
    ctx->pc = 0x2E9454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9450u;
            // 0x2e9454: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9458u; }
        if (ctx->pc != 0x2E9458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9458u; }
        if (ctx->pc != 0x2E9458u) { return; }
    }
    ctx->pc = 0x2E9458u;
label_2e9458:
    // 0x2e9458: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9458u;
    {
        const bool branch_taken_0x2e9458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9458) {
            ctx->pc = 0x2E9464u;
            goto label_2e9464;
        }
    }
    ctx->pc = 0x2E9460u;
    // 0x2e9460: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e9460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9464:
    // 0x2e9464: 0x8e640e34  lw          $a0, 0xE34($s3)
    ctx->pc = 0x2e9464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_2e9468:
    // 0x2e9468: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x2e9468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2e946c: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x2e946cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2e9470: 0x38840005  xori        $a0, $a0, 0x5
    ctx->pc = 0x2e9470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)5);
    // 0x2e9474: 0x1020008c  beqz        $at, . + 4 + (0x8C << 2)
    ctx->pc = 0x2E9474u;
    {
        const bool branch_taken_0x2e9474 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9474u;
            // 0x2e9478: 0x2c870001  sltiu       $a3, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9474) {
            ctx->pc = 0x2E96A8u;
            goto label_2e96a8;
        }
    }
    ctx->pc = 0x2E947Cu;
    // 0x2e947c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2e947cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x2e9480: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e9480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e9484: 0x24841f70  addiu       $a0, $a0, 0x1F70
    ctx->pc = 0x2e9484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8048));
    // 0x2e9488: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e9488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e948c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2e948cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e9490: 0x600008  jr          $v1
    ctx->pc = 0x2E9490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E9498u: goto label_2e9498;
            case 0x2E95A8u: goto label_2e95a8;
            case 0x2E95E4u: goto label_2e95e4;
            case 0x2E9614u: goto label_2e9614;
            case 0x2E9648u: goto label_2e9648;
            case 0x2E9678u: goto label_2e9678;
            case 0x2E96A8u: goto label_2e96a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2E9498u;
label_2e9498:
    // 0x2e9498: 0x52200084  beql        $s1, $zero, . + 4 + (0x84 << 2)
    ctx->pc = 0x2E9498u;
    {
        const bool branch_taken_0x2e9498 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9498) {
            ctx->pc = 0x2E949Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9498u;
            // 0x2e949c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E96ACu;
            goto label_2e96ac;
        }
    }
    ctx->pc = 0x2E94A0u;
    // 0x2e94a0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x2e94a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x2e94a4: 0x8e660d98  lw          $a2, 0xD98($s3)
    ctx->pc = 0x2e94a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
    // 0x2e94a8: 0x8c65d120  lw          $a1, -0x2EE0($v1)
    ctx->pc = 0x2e94a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
    // 0x2e94ac: 0x8e040968  lw          $a0, 0x968($s0)
    ctx->pc = 0x2e94acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
    // 0x2e94b0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2e94b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2e94b4: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x2e94b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2e94b8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2e94b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e94bc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2e94bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2e94c0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2e94c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e94c4: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2E94C4u;
    {
        const bool branch_taken_0x2e94c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E94C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E94C4u;
            // 0x2e94c8: 0x24b00200  addiu       $s0, $a1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e94c4) {
            ctx->pc = 0x2E9544u;
            goto label_2e9544;
        }
    }
    ctx->pc = 0x2E94CCu;
    // 0x2e94cc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2e94ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e94d0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E94D0u;
    {
        const bool branch_taken_0x2e94d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e94d0) {
            ctx->pc = 0x2E94E0u;
            goto label_2e94e0;
        }
    }
    ctx->pc = 0x2E94D8u;
    // 0x2e94d8: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x2E94D8u;
    {
        const bool branch_taken_0x2e94d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e94d8) {
            ctx->pc = 0x2E96A8u;
            goto label_2e96a8;
        }
    }
    ctx->pc = 0x2E94E0u;
label_2e94e0:
    // 0x2e94e0: 0x54e00014  bnel        $a3, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E94E0u;
    {
        const bool branch_taken_0x2e94e0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e94e0) {
            ctx->pc = 0x2E94E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E94E0u;
            // 0x2e94e4: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9534u;
            goto label_2e9534;
        }
    }
    ctx->pc = 0x2E94E8u;
    // 0x2e94e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e94e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e94ec: 0x926411aa  lbu         $a0, 0x11AA($s3)
    ctx->pc = 0x2e94ecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4522)));
    // 0x2e94f0: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2e94f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2e94f4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2e94f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e94f8: 0x26660890  addiu       $a2, $s3, 0x890
    ctx->pc = 0x2e94f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
    // 0x2e94fc: 0x266702c0  addiu       $a3, $s3, 0x2C0
    ctx->pc = 0x2e94fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
    // 0x2e9500: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e9500u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9504: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2E9504u;
    SET_GPR_U32(ctx, 31, 0x2E950Cu);
    ctx->pc = 0x2E9508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9504u;
            // 0x2e9508: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E950Cu; }
        if (ctx->pc != 0x2E950Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E950Cu; }
        if (ctx->pc != 0x2E950Cu) { return; }
    }
    ctx->pc = 0x2E950Cu;
label_2e950c:
    // 0x2e950c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e950cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e9510: 0x926411aa  lbu         $a0, 0x11AA($s3)
    ctx->pc = 0x2e9510u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4522)));
    // 0x2e9514: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2e9514u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2e9518: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e9518u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e951c: 0x26660890  addiu       $a2, $s3, 0x890
    ctx->pc = 0x2e951cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
    // 0x2e9520: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x2e9520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2e9524: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e9524u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9528: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2E9528u;
    SET_GPR_U32(ctx, 31, 0x2E9530u);
    ctx->pc = 0x2E952Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9528u;
            // 0x2e952c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9530u; }
        if (ctx->pc != 0x2E9530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9530u; }
        if (ctx->pc != 0x2E9530u) { return; }
    }
    ctx->pc = 0x2E9530u;
label_2e9530:
    // 0x2e9530: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2e9530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_2e9534:
    // 0x2e9534: 0xc073234  jal         func_1CC8D0
    ctx->pc = 0x2E9534u;
    SET_GPR_U32(ctx, 31, 0x2E953Cu);
    ctx->pc = 0x2E9538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9534u;
            // 0x2e9538: 0x34440da9  ori         $a0, $v0, 0xDA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3497);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E953Cu; }
        if (ctx->pc != 0x2E953Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E953Cu; }
        if (ctx->pc != 0x2E953Cu) { return; }
    }
    ctx->pc = 0x2E953Cu;
label_2e953c:
    // 0x2e953c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2E953Cu;
    {
        const bool branch_taken_0x2e953c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e953c) {
            ctx->pc = 0x2E96A8u;
            goto label_2e96a8;
        }
    }
    ctx->pc = 0x2E9544u;
label_2e9544:
    // 0x2e9544: 0x54e00014  bnel        $a3, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E9544u;
    {
        const bool branch_taken_0x2e9544 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9544) {
            ctx->pc = 0x2E9548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9544u;
            // 0x2e9548: 0x3c020006  lui         $v0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9598u;
            goto label_2e9598;
        }
    }
    ctx->pc = 0x2E954Cu;
    // 0x2e954c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e954cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e9550: 0x926411aa  lbu         $a0, 0x11AA($s3)
    ctx->pc = 0x2e9550u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4522)));
    // 0x2e9554: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2e9554u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2e9558: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x2e9558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2e955c: 0x26660890  addiu       $a2, $s3, 0x890
    ctx->pc = 0x2e955cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
    // 0x2e9560: 0x266702c0  addiu       $a3, $s3, 0x2C0
    ctx->pc = 0x2e9560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
    // 0x2e9564: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e9564u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9568: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2E9568u;
    SET_GPR_U32(ctx, 31, 0x2E9570u);
    ctx->pc = 0x2E956Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9568u;
            // 0x2e956c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9570u; }
        if (ctx->pc != 0x2E9570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9570u; }
        if (ctx->pc != 0x2E9570u) { return; }
    }
    ctx->pc = 0x2E9570u;
label_2e9570:
    // 0x2e9570: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e9570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e9574: 0x926411aa  lbu         $a0, 0x11AA($s3)
    ctx->pc = 0x2e9574u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4522)));
    // 0x2e9578: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2e9578u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2e957c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e957cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9580: 0x26660890  addiu       $a2, $s3, 0x890
    ctx->pc = 0x2e9580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
    // 0x2e9584: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2e9584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2e9588: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e9588u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e958c: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2E958Cu;
    SET_GPR_U32(ctx, 31, 0x2E9594u);
    ctx->pc = 0x2E9590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E958Cu;
            // 0x2e9590: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9594u; }
        if (ctx->pc != 0x2E9594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9594u; }
        if (ctx->pc != 0x2E9594u) { return; }
    }
    ctx->pc = 0x2E9594u;
label_2e9594:
    // 0x2e9594: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x2e9594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
label_2e9598:
    // 0x2e9598: 0xc073234  jal         func_1CC8D0
    ctx->pc = 0x2E9598u;
    SET_GPR_U32(ctx, 31, 0x2E95A0u);
    ctx->pc = 0x2E959Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9598u;
            // 0x2e959c: 0x344415a9  ori         $a0, $v0, 0x15A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5545);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E95A0u; }
        if (ctx->pc != 0x2E95A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E95A0u; }
        if (ctx->pc != 0x2E95A0u) { return; }
    }
    ctx->pc = 0x2E95A0u;
label_2e95a0:
    // 0x2e95a0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2E95A0u;
    {
        const bool branch_taken_0x2e95a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e95a0) {
            ctx->pc = 0x2E96A8u;
            goto label_2e96a8;
        }
    }
    ctx->pc = 0x2E95A8u;
label_2e95a8:
    // 0x2e95a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e95a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e95ac: 0xc076310  jal         func_1D8C40
    ctx->pc = 0x2E95ACu;
    SET_GPR_U32(ctx, 31, 0x2E95B4u);
    ctx->pc = 0x2E95B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E95ACu;
            // 0x2e95b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8C40u;
    if (runtime->hasFunction(0x1D8C40u)) {
        auto targetFn = runtime->lookupFunction(0x1D8C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E95B4u; }
        if (ctx->pc != 0x2E95B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8C40_0x1d8c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E95B4u; }
        if (ctx->pc != 0x2E95B4u) { return; }
    }
    ctx->pc = 0x2E95B4u;
label_2e95b4:
    // 0x2e95b4: 0x1220003c  beqz        $s1, . + 4 + (0x3C << 2)
    ctx->pc = 0x2E95B4u;
    {
        const bool branch_taken_0x2e95b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e95b4) {
            ctx->pc = 0x2E96A8u;
            goto label_2e96a8;
        }
    }
    ctx->pc = 0x2E95BCu;
    // 0x2e95bc: 0x8e660d98  lw          $a2, 0xD98($s3)
    ctx->pc = 0x2e95bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
    // 0x2e95c0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2e95c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2e95c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e95c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e95c8: 0x90846080  lbu         $a0, 0x6080($a0)
    ctx->pc = 0x2e95c8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24704)));
    // 0x2e95cc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e95ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2e95d0: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x2e95d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x2e95d4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2e95d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2e95d8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2e95d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2e95dc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2E95DCu;
    {
        const bool branch_taken_0x2e95dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E95E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E95DCu;
            // 0x2e95e0: 0xa0646080  sb          $a0, 0x6080($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 24704), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e95dc) {
            ctx->pc = 0x2E96A8u;
            goto label_2e96a8;
        }
    }
    ctx->pc = 0x2E95E4u;
label_2e95e4:
    // 0x2e95e4: 0x12200030  beqz        $s1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2E95E4u;
    {
        const bool branch_taken_0x2e95e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e95e4) {
            ctx->pc = 0x2E96A8u;
            goto label_2e96a8;
        }
    }
    ctx->pc = 0x2E95ECu;
    // 0x2e95ec: 0x8e660d98  lw          $a2, 0xD98($s3)
    ctx->pc = 0x2e95ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
    // 0x2e95f0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2e95f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2e95f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e95f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e95f8: 0x90846080  lbu         $a0, 0x6080($a0)
    ctx->pc = 0x2e95f8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24704)));
    // 0x2e95fc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e95fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2e9600: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x2e9600u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x2e9604: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2e9604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2e9608: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2e9608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2e960c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2E960Cu;
    {
        const bool branch_taken_0x2e960c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E960Cu;
            // 0x2e9610: 0xa0646080  sb          $a0, 0x6080($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 24704), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e960c) {
            ctx->pc = 0x2E96A8u;
            goto label_2e96a8;
        }
    }
    ctx->pc = 0x2E9614u;
label_2e9614:
    // 0x2e9614: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2E9614u;
    {
        const bool branch_taken_0x2e9614 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9614) {
            ctx->pc = 0x2E96A8u;
            goto label_2e96a8;
        }
    }
    ctx->pc = 0x2E961Cu;
    // 0x2e961c: 0x8e660d98  lw          $a2, 0xD98($s3)
    ctx->pc = 0x2e961cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
    // 0x2e9620: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e9620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9624: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2e9624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2e9628: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e9628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2e962c: 0x90846080  lbu         $a0, 0x6080($a0)
    ctx->pc = 0x2e962cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24704)));
    // 0x2e9630: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x2e9630u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x2e9634: 0xa02827  not         $a1, $a1
    ctx->pc = 0x2e9634u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x2e9638: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2e9638u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2e963c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x2e963cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x2e9640: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2E9640u;
    {
        const bool branch_taken_0x2e9640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9640u;
            // 0x2e9644: 0xa0646080  sb          $a0, 0x6080($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 24704), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9640) {
            ctx->pc = 0x2E96A8u;
            goto label_2e96a8;
        }
    }
    ctx->pc = 0x2E9648u;
label_2e9648:
    // 0x2e9648: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E9648u;
    {
        const bool branch_taken_0x2e9648 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9648) {
            ctx->pc = 0x2E96A8u;
            goto label_2e96a8;
        }
    }
    ctx->pc = 0x2E9650u;
    // 0x2e9650: 0x8e660d98  lw          $a2, 0xD98($s3)
    ctx->pc = 0x2e9650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
    // 0x2e9654: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2e9654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2e9658: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e9658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e965c: 0x90846080  lbu         $a0, 0x6080($a0)
    ctx->pc = 0x2e965cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24704)));
    // 0x2e9660: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e9660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2e9664: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x2e9664u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x2e9668: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2e9668u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2e966c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2e966cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2e9670: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E9670u;
    {
        const bool branch_taken_0x2e9670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9670u;
            // 0x2e9674: 0xa0646080  sb          $a0, 0x6080($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 24704), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9670) {
            ctx->pc = 0x2E96A8u;
            goto label_2e96a8;
        }
    }
    ctx->pc = 0x2E9678u;
label_2e9678:
    // 0x2e9678: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2E9678u;
    {
        const bool branch_taken_0x2e9678 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9678) {
            ctx->pc = 0x2E96A8u;
            goto label_2e96a8;
        }
    }
    ctx->pc = 0x2E9680u;
    // 0x2e9680: 0x8e660d98  lw          $a2, 0xD98($s3)
    ctx->pc = 0x2e9680u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
    // 0x2e9684: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e9684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9688: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2e9688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2e968c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e968cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2e9690: 0x90846080  lbu         $a0, 0x6080($a0)
    ctx->pc = 0x2e9690u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24704)));
    // 0x2e9694: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x2e9694u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x2e9698: 0xa02827  not         $a1, $a1
    ctx->pc = 0x2e9698u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x2e969c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2e969cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2e96a0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x2e96a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x2e96a4: 0xa0646080  sb          $a0, 0x6080($v1)
    ctx->pc = 0x2e96a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 24704), (uint8_t)GPR_U32(ctx, 4));
label_2e96a8:
    // 0x2e96a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e96a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e96ac:
    // 0x2e96ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e96acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e96b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e96b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e96b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e96b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e96b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e96b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e96bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E96BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E96C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E96BCu;
            // 0x2e96c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E96C4u;
    // 0x2e96c4: 0x0  nop
    ctx->pc = 0x2e96c4u;
    // NOP
    // 0x2e96c8: 0x0  nop
    ctx->pc = 0x2e96c8u;
    // NOP
    // 0x2e96cc: 0x0  nop
    ctx->pc = 0x2e96ccu;
    // NOP
}
