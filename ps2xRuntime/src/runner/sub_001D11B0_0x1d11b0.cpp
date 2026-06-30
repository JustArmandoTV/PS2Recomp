#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D11B0
// Address: 0x1d11b0 - 0x1d1370
void sub_001D11B0_0x1d11b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D11B0_0x1d11b0");
#endif

    switch (ctx->pc) {
        case 0x1d11f0u: goto label_1d11f0;
        case 0x1d11f8u: goto label_1d11f8;
        case 0x1d11fcu: goto label_1d11fc;
        case 0x1d1238u: goto label_1d1238;
        case 0x1d12d4u: goto label_1d12d4;
        case 0x1d12e8u: goto label_1d12e8;
        case 0x1d1348u: goto label_1d1348;
        case 0x1d135cu: goto label_1d135c;
        default: break;
    }

    ctx->pc = 0x1d11b0u;

    // 0x1d11b0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1d11b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1d11b4: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x1d11b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x1d11b8: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x1d11b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x1d11bc: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x1d11bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x1d11c0: 0x2610a240  addiu       $s0, $s0, -0x5DC0
    ctx->pc = 0x1d11c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943296));
    // 0x1d11c4: 0xffb300b0  sd          $s3, 0xB0($sp)
    ctx->pc = 0x1d11c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
    // 0x1d11c8: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x1d11c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x1d11cc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1d11ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d11d0: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x1d11d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x1d11d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d11d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d11d8: 0x26130080  addiu       $s3, $s0, 0x80
    ctx->pc = 0x1d11d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1d11dc: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1d11dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1d11e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d11e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d11e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d11e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d11e8: 0xc043316  jal         func_10CC58
    ctx->pc = 0x1D11E8u;
    SET_GPR_U32(ctx, 31, 0x1D11F0u);
    ctx->pc = 0x1D11ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D11E8u;
            // 0x1d11ec: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC58u;
    if (runtime->hasFunction(0x10CC58u)) {
        auto targetFn = runtime->lookupFunction(0x10CC58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D11F0u; }
        if (ctx->pc != 0x1D11F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC58_0x10cc58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D11F0u; }
        if (ctx->pc != 0x1D11F0u) { return; }
    }
    ctx->pc = 0x1D11F0u;
label_1d11f0:
    // 0x1d11f0: 0xc045968  jal         func_1165A0
    ctx->pc = 0x1D11F0u;
    SET_GPR_U32(ctx, 31, 0x1D11F8u);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D11F8u; }
        if (ctx->pc != 0x1D11F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D11F8u; }
        if (ctx->pc != 0x1D11F8u) { return; }
    }
    ctx->pc = 0x1D11F8u;
label_1d11f8:
    // 0x1d11f8: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x1d11f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d11fc:
    // 0x1d11fc: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x1d11fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1200: 0xde040008  ld          $a0, 0x8($s0)
    ctx->pc = 0x1d1200u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d1204: 0xde050010  ld          $a1, 0x10($s0)
    ctx->pc = 0x1d1204u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d1208: 0xde060018  ld          $a2, 0x18($s0)
    ctx->pc = 0x1d1208u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d120c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d120cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d1210: 0xfc440008  sd          $a0, 0x8($v0)
    ctx->pc = 0x1d1210u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
    // 0x1d1214: 0xfc450010  sd          $a1, 0x10($v0)
    ctx->pc = 0x1d1214u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x1d1218: 0xfc460018  sd          $a2, 0x18($v0)
    ctx->pc = 0x1d1218u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 6));
    // 0x1d121c: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1d121cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1d1220: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1d1220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1d1224: 0x0  nop
    ctx->pc = 0x1d1224u;
    // NOP
    // 0x1d1228: 0x1613fff4  bne         $s0, $s3, . + 4 + (-0xC << 2)
    ctx->pc = 0x1D1228u;
    {
        const bool branch_taken_0x1d1228 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x1d1228) {
            ctx->pc = 0x1D11FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d11fc;
        }
    }
    ctx->pc = 0x1D1230u;
    // 0x1d1230: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x1D1230u;
    SET_GPR_U32(ctx, 31, 0x1D1238u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1238u; }
        if (ctx->pc != 0x1D1238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1238u; }
        if (ctx->pc != 0x1D1238u) { return; }
    }
    ctx->pc = 0x1D1238u;
label_1d1238:
    // 0x1d1238: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1d1238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d123c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1D123Cu;
    {
        const bool branch_taken_0x1d123c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D123Cu;
            // 0x1d1240: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d123c) {
            ctx->pc = 0x1D1270u;
            goto label_1d1270;
        }
    }
    ctx->pc = 0x1D1244u;
    // 0x1d1244: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1244u;
    {
        const bool branch_taken_0x1d1244 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1244u;
            // 0x1d1248: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1244) {
            ctx->pc = 0x1D1258u;
            goto label_1d1258;
        }
    }
    ctx->pc = 0x1D124Cu;
    // 0x1d124c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1d124cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1d1250: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x1d1250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1d1254: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1d1254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_1d1258:
    // 0x1d1258: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1258u;
    {
        const bool branch_taken_0x1d1258 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D125Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1258u;
            // 0x1d125c: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1258) {
            ctx->pc = 0x1D126Cu;
            goto label_1d126c;
        }
    }
    ctx->pc = 0x1D1260u;
    // 0x1d1260: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1d1260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1d1264: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x1d1264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1d1268: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x1d1268u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_1d126c:
    // 0x1d126c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d126cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1270:
    // 0x1d1270: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1d1270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d1274: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x1d1274u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d1278: 0xdfb300b0  ld          $s3, 0xB0($sp)
    ctx->pc = 0x1d1278u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d127c: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x1d127cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d1280: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x1d1280u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d1284: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x1d1284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d1288: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D128Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1288u;
            // 0x1d128c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D1290u;
    // 0x1d1290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d1290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d1294: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d1294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1d1298: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d1298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d129c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d129cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1d12a0: 0x2450a1c0  addiu       $s0, $v0, -0x5E40
    ctx->pc = 0x1d12a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943168));
    // 0x1d12a4: 0xac44a1c0  sw          $a0, -0x5E40($v0)
    ctx->pc = 0x1d12a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943168), GPR_U32(ctx, 4));
    // 0x1d12a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d12a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d12ac: 0x2464a180  addiu       $a0, $v1, -0x5E80
    ctx->pc = 0x1d12acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943104));
    // 0x1d12b0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d12b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1d12b4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d12b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d12b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d12b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d12bc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1d12bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d12c0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1d12c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d12c4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1d12c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d12c8: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1d12c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d12cc: 0xc04410c  jal         func_110430
    ctx->pc = 0x1D12CCu;
    SET_GPR_U32(ctx, 31, 0x1D12D4u);
    ctx->pc = 0x1D12D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D12CCu;
            // 0x1d12d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (runtime->hasFunction(0x110430u)) {
        auto targetFn = runtime->lookupFunction(0x110430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D12D4u; }
        if (ctx->pc != 0x1D12D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110430_0x110430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D12D4u; }
        if (ctx->pc != 0x1D12D4u) { return; }
    }
    ctx->pc = 0x1D12D4u;
label_1d12d4:
    // 0x1d12d4: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D12D4u;
    {
        const bool branch_taken_0x1d12d4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1d12d4) {
            ctx->pc = 0x1D12D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D12D4u;
            // 0x1d12d8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D12ECu;
            goto label_1d12ec;
        }
    }
    ctx->pc = 0x1D12DCu;
    // 0x1d12dc: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1d12dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1d12e0: 0xc0743ca  jal         func_1D0F28
    ctx->pc = 0x1D12E0u;
    SET_GPR_U32(ctx, 31, 0x1D12E8u);
    ctx->pc = 0x1D12E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D12E0u;
            // 0x1d12e4: 0x2484c410  addiu       $a0, $a0, -0x3BF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F28u;
    if (runtime->hasFunction(0x1D0F28u)) {
        auto targetFn = runtime->lookupFunction(0x1D0F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D12E8u; }
        if (ctx->pc != 0x1D12E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0F28_0x1d0f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D12E8u; }
        if (ctx->pc != 0x1D12E8u) { return; }
    }
    ctx->pc = 0x1D12E8u;
label_1d12e8:
    // 0x1d12e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d12e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d12ec:
    // 0x1d12ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d12ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d12f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d12f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d12f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D12F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D12F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D12F4u;
            // 0x1d12f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D12FCu;
    // 0x1d12fc: 0x0  nop
    ctx->pc = 0x1d12fcu;
    // NOP
    // 0x1d1300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d1300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d1304: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d1304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1d1308: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d1308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d130c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d130cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1d1310: 0x2450a1c0  addiu       $s0, $v0, -0x5E40
    ctx->pc = 0x1d1310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943168));
    // 0x1d1314: 0xac44a1c0  sw          $a0, -0x5E40($v0)
    ctx->pc = 0x1d1314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943168), GPR_U32(ctx, 4));
    // 0x1d1318: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d1318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d131c: 0x2464a180  addiu       $a0, $v1, -0x5E80
    ctx->pc = 0x1d131cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943104));
    // 0x1d1320: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x1d1320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x1d1324: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d1324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1328: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d1328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1d132c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d132cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d1330: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1d1330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1334: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1d1334u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1338: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1d1338u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d133c: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1d133cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1340: 0xc04410c  jal         func_110430
    ctx->pc = 0x1D1340u;
    SET_GPR_U32(ctx, 31, 0x1D1348u);
    ctx->pc = 0x1D1344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1340u;
            // 0x1d1344: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (runtime->hasFunction(0x110430u)) {
        auto targetFn = runtime->lookupFunction(0x110430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1348u; }
        if (ctx->pc != 0x1D1348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110430_0x110430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1348u; }
        if (ctx->pc != 0x1D1348u) { return; }
    }
    ctx->pc = 0x1D1348u;
label_1d1348:
    // 0x1d1348: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1348u;
    {
        const bool branch_taken_0x1d1348 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1d1348) {
            ctx->pc = 0x1D134Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1348u;
            // 0x1d134c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1360u;
            goto label_1d1360;
        }
    }
    ctx->pc = 0x1D1350u;
    // 0x1d1350: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1d1350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1d1354: 0xc0743ca  jal         func_1D0F28
    ctx->pc = 0x1D1354u;
    SET_GPR_U32(ctx, 31, 0x1D135Cu);
    ctx->pc = 0x1D1358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1354u;
            // 0x1d1358: 0x2484c438  addiu       $a0, $a0, -0x3BC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F28u;
    if (runtime->hasFunction(0x1D0F28u)) {
        auto targetFn = runtime->lookupFunction(0x1D0F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D135Cu; }
        if (ctx->pc != 0x1D135Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0F28_0x1d0f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D135Cu; }
        if (ctx->pc != 0x1D135Cu) { return; }
    }
    ctx->pc = 0x1D135Cu;
label_1d135c:
    // 0x1d135c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d135cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1360:
    // 0x1d1360: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d1360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1364: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d1364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1368: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D136Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1368u;
            // 0x1d136c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D1370u;
}
