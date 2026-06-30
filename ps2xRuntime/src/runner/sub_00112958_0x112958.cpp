#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00112958
// Address: 0x112958 - 0x113ed8
void sub_00112958_0x112958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112958_0x112958");
#endif

    switch (ctx->pc) {
        case 0x112998u: goto label_112998;
        case 0x1129b0u: goto label_1129b0;
        case 0x1129d8u: goto label_1129d8;
        case 0x112a44u: goto label_112a44;
        case 0x112a84u: goto label_112a84;
        case 0x112a94u: goto label_112a94;
        case 0x112a9cu: goto label_112a9c;
        case 0x112ab0u: goto label_112ab0;
        case 0x112ac0u: goto label_112ac0;
        case 0x112ad0u: goto label_112ad0;
        case 0x112ad8u: goto label_112ad8;
        case 0x112b18u: goto label_112b18;
        case 0x112b68u: goto label_112b68;
        case 0x112b80u: goto label_112b80;
        case 0x112ba8u: goto label_112ba8;
        case 0x112c1cu: goto label_112c1c;
        case 0x112c5cu: goto label_112c5c;
        case 0x112c6cu: goto label_112c6c;
        case 0x112c74u: goto label_112c74;
        case 0x112c88u: goto label_112c88;
        case 0x112c98u: goto label_112c98;
        case 0x112ca8u: goto label_112ca8;
        case 0x112cb0u: goto label_112cb0;
        case 0x112cf0u: goto label_112cf0;
        case 0x112d48u: goto label_112d48;
        case 0x112d60u: goto label_112d60;
        case 0x112d80u: goto label_112d80;
        case 0x112de8u: goto label_112de8;
        case 0x112e28u: goto label_112e28;
        case 0x112e50u: goto label_112e50;
        case 0x112eb0u: goto label_112eb0;
        case 0x112ed0u: goto label_112ed0;
        case 0x112efcu: goto label_112efc;
        case 0x112f0cu: goto label_112f0c;
        case 0x112f14u: goto label_112f14;
        case 0x112f28u: goto label_112f28;
        case 0x112f38u: goto label_112f38;
        case 0x112f48u: goto label_112f48;
        case 0x112f50u: goto label_112f50;
        case 0x112facu: goto label_112fac;
        case 0x112fc4u: goto label_112fc4;
        case 0x112fe8u: goto label_112fe8;
        case 0x113038u: goto label_113038;
        case 0x113048u: goto label_113048;
        case 0x113050u: goto label_113050;
        case 0x113064u: goto label_113064;
        case 0x113074u: goto label_113074;
        case 0x113084u: goto label_113084;
        case 0x11308cu: goto label_11308c;
        case 0x1130c0u: goto label_1130c0;
        case 0x1130f0u: goto label_1130f0;
        case 0x113108u: goto label_113108;
        case 0x113110u: goto label_113110;
        case 0x113118u: goto label_113118;
        case 0x113134u: goto label_113134;
        case 0x113148u: goto label_113148;
        case 0x11315cu: goto label_11315c;
        case 0x11317cu: goto label_11317c;
        case 0x1131c0u: goto label_1131c0;
        case 0x1131ccu: goto label_1131cc;
        case 0x1131f8u: goto label_1131f8;
        case 0x113224u: goto label_113224;
        case 0x113274u: goto label_113274;
        case 0x113284u: goto label_113284;
        case 0x11328cu: goto label_11328c;
        case 0x1132a4u: goto label_1132a4;
        case 0x1132b4u: goto label_1132b4;
        case 0x1132c4u: goto label_1132c4;
        case 0x1132ccu: goto label_1132cc;
        case 0x113328u: goto label_113328;
        case 0x113334u: goto label_113334;
        case 0x113360u: goto label_113360;
        case 0x113390u: goto label_113390;
        case 0x1133e0u: goto label_1133e0;
        case 0x1133f0u: goto label_1133f0;
        case 0x1133f8u: goto label_1133f8;
        case 0x11340cu: goto label_11340c;
        case 0x11341cu: goto label_11341c;
        case 0x11342cu: goto label_11342c;
        case 0x113434u: goto label_113434;
        case 0x113498u: goto label_113498;
        case 0x1134b0u: goto label_1134b0;
        case 0x1134d8u: goto label_1134d8;
        case 0x113548u: goto label_113548;
        case 0x113588u: goto label_113588;
        case 0x113598u: goto label_113598;
        case 0x1135a0u: goto label_1135a0;
        case 0x1135b4u: goto label_1135b4;
        case 0x1135c4u: goto label_1135c4;
        case 0x1135d4u: goto label_1135d4;
        case 0x1135dcu: goto label_1135dc;
        case 0x113658u: goto label_113658;
        case 0x113670u: goto label_113670;
        case 0x113698u: goto label_113698;
        case 0x113788u: goto label_113788;
        case 0x1137a8u: goto label_1137a8;
        case 0x1137d4u: goto label_1137d4;
        case 0x1137e4u: goto label_1137e4;
        case 0x1137ecu: goto label_1137ec;
        case 0x113800u: goto label_113800;
        case 0x113810u: goto label_113810;
        case 0x113820u: goto label_113820;
        case 0x113828u: goto label_113828;
        case 0x11389cu: goto label_11389c;
        case 0x1138b4u: goto label_1138b4;
        case 0x1138e0u: goto label_1138e0;
        case 0x113948u: goto label_113948;
        case 0x11399cu: goto label_11399c;
        case 0x1139bcu: goto label_1139bc;
        case 0x1139e8u: goto label_1139e8;
        case 0x1139f8u: goto label_1139f8;
        case 0x113a00u: goto label_113a00;
        case 0x113a14u: goto label_113a14;
        case 0x113a24u: goto label_113a24;
        case 0x113a34u: goto label_113a34;
        case 0x113a3cu: goto label_113a3c;
        case 0x113a78u: goto label_113a78;
        case 0x113ac4u: goto label_113ac4;
        case 0x113adcu: goto label_113adc;
        case 0x113b08u: goto label_113b08;
        case 0x113b74u: goto label_113b74;
        case 0x113bb4u: goto label_113bb4;
        case 0x113bc4u: goto label_113bc4;
        case 0x113bccu: goto label_113bcc;
        case 0x113be0u: goto label_113be0;
        case 0x113bf0u: goto label_113bf0;
        case 0x113c00u: goto label_113c00;
        case 0x113c08u: goto label_113c08;
        case 0x113c88u: goto label_113c88;
        case 0x113ca0u: goto label_113ca0;
        case 0x113cc0u: goto label_113cc0;
        case 0x113d18u: goto label_113d18;
        case 0x113d58u: goto label_113d58;
        case 0x113d80u: goto label_113d80;
        case 0x113de4u: goto label_113de4;
        case 0x113e04u: goto label_113e04;
        case 0x113e30u: goto label_113e30;
        case 0x113e40u: goto label_113e40;
        case 0x113e48u: goto label_113e48;
        case 0x113e5cu: goto label_113e5c;
        case 0x113e6cu: goto label_113e6c;
        case 0x113e7cu: goto label_113e7c;
        case 0x113e84u: goto label_113e84;
        case 0x113ec8u: goto label_113ec8;
        default: break;
    }

    ctx->pc = 0x112958u;

label_112958:
    // 0x112958: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x112958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x11295c: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x11295cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x112960: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x112960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x112964: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x112964u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112968: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x112968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11296c: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x11296cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x112970: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x112970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x112974: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x112974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112978: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x112978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x11297c: 0x3c17006c  lui         $s7, 0x6C
    ctx->pc = 0x11297cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)108 << 16));
    // 0x112980: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x112980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x112984: 0x26f3b440  addiu       $s3, $s7, -0x4BC0
    ctx->pc = 0x112984u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 4294947904));
    // 0x112988: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x112988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x11298c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x11298cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x112990: 0xc044492  jal         func_111248
    ctx->pc = 0x112990u;
    SET_GPR_U32(ctx, 31, 0x112998u);
    ctx->pc = 0x112994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112990u;
            // 0x112994: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111248u;
    if (runtime->hasFunction(0x111248u)) {
        auto targetFn = runtime->lookupFunction(0x111248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112998u; }
        if (ctx->pc != 0x112998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111248_0x111248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112998u; }
        if (ctx->pc != 0x112998u) { return; }
    }
    ctx->pc = 0x112998u;
label_112998:
    // 0x112998: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x112998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x11299c: 0x8c43e43c  lw          $v1, -0x1BC4($v0)
    ctx->pc = 0x11299cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960188)));
    // 0x1129a0: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1129A0u;
    {
        const bool branch_taken_0x1129a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1129a0) {
            ctx->pc = 0x1129A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1129A0u;
            // 0x1129a4: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1129B4u;
            goto label_1129b4;
        }
    }
    ctx->pc = 0x1129A8u;
    // 0x1129a8: 0xc0444dc  jal         func_111370
    ctx->pc = 0x1129A8u;
    SET_GPR_U32(ctx, 31, 0x1129B0u);
    ctx->pc = 0x111370u;
    if (runtime->hasFunction(0x111370u)) {
        auto targetFn = runtime->lookupFunction(0x111370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1129B0u; }
        if (ctx->pc != 0x1129B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111370_0x111370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1129B0u; }
        if (ctx->pc != 0x1129B0u) { return; }
    }
    ctx->pc = 0x1129B0u;
label_1129b0:
    // 0x1129b0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1129b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1129b4:
    // 0x1129b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1129b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1129b8: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1129b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1129bc: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1129BCu;
    {
        const bool branch_taken_0x1129bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1129C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1129BCu;
            // 0x1129c0: 0xa262000c  sb          $v0, 0xC($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1129bc) {
            ctx->pc = 0x112A04u;
            goto label_112a04;
        }
    }
    ctx->pc = 0x1129C4u;
    // 0x1129c4: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1129c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1129c8: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1129c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1129cc: 0x3c15006c  lui         $s5, 0x6C
    ctx->pc = 0x1129ccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
    // 0x1129d0: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x1129d0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
    // 0x1129d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1129d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1129d8:
    // 0x1129d8: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x1129d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1129dc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1129DCu;
    {
        const bool branch_taken_0x1129dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1129E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1129DCu;
            // 0x1129e0: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1129dc) {
            ctx->pc = 0x112A14u;
            goto label_112a14;
        }
    }
    ctx->pc = 0x1129E4u;
    // 0x1129e4: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x1129e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1129e8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1129e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1129ec: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1129ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1129f0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1129f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1129f4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1129F4u;
    {
        const bool branch_taken_0x1129f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1129f4) {
            ctx->pc = 0x1129F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1129F4u;
            // 0x1129f8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1129D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1129d8;
        }
    }
    ctx->pc = 0x1129FCu;
    // 0x1129fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1129FCu;
    {
        const bool branch_taken_0x1129fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1129FCu;
            // 0x112a00: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1129fc) {
            ctx->pc = 0x112A18u;
            goto label_112a18;
        }
    }
    ctx->pc = 0x112A04u;
label_112a04:
    // 0x112a04: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x112a04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x112a08: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x112a08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x112a0c: 0x3c15006c  lui         $s5, 0x6C
    ctx->pc = 0x112a0cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
    // 0x112a10: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x112a10u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
label_112a14:
    // 0x112a14: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x112a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_112a18:
    // 0x112a18: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x112A18u;
    {
        const bool branch_taken_0x112a18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x112A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112A18u;
            // 0x112a1c: 0x24a2f008  addiu       $v0, $a1, -0xFF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a18) {
            ctx->pc = 0x112A28u;
            goto label_112a28;
        }
    }
    ctx->pc = 0x112A20u;
    // 0x112a20: 0xa260040b  sb          $zero, 0x40B($s3)
    ctx->pc = 0x112a20u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1035), (uint8_t)GPR_U32(ctx, 0));
    // 0x112a24: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x112a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_112a28:
    // 0x112a28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x112a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112a2c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x112a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x112a30: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x112a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x112a34: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x112a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x112a38: 0x2694c080  addiu       $s4, $s4, -0x3F80
    ctx->pc = 0x112a38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951040));
    // 0x112a3c: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x112A3Cu;
    SET_GPR_U32(ctx, 31, 0x112A44u);
    ctx->pc = 0x112A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112A3Cu;
            // 0x112a40: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112A44u; }
        if (ctx->pc != 0x112A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112A44u; }
        if (ctx->pc != 0x112A44u) { return; }
    }
    ctx->pc = 0x112A44u;
label_112a44:
    // 0x112a44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x112a44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a48: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x112a48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x112a4c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x112a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x112a50: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x112a50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x112a54: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x112a54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x112a58: 0x26a4cb40  addiu       $a0, $s5, -0x34C0
    ctx->pc = 0x112a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294953792));
    // 0x112a5c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x112a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a60: 0x26e7b440  addiu       $a3, $s7, -0x4BC0
    ctx->pc = 0x112a60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294947904));
    // 0x112a64: 0x2608000d  addiu       $t0, $s0, 0xD
    ctx->pc = 0x112a64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x112a68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x112a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a6c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x112a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x112a70: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x112a70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a74: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x112a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x112a78: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x112a78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x112a7c: 0xc044336  jal         func_110CD8
    ctx->pc = 0x112A7Cu;
    SET_GPR_U32(ctx, 31, 0x112A84u);
    ctx->pc = 0x112A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112A7Cu;
            // 0x112a80: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110CD8u;
    if (runtime->hasFunction(0x110CD8u)) {
        auto targetFn = runtime->lookupFunction(0x110CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112A84u; }
        if (ctx->pc != 0x112A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110CD8_0x110cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112A84u; }
        if (ctx->pc != 0x112A84u) { return; }
    }
    ctx->pc = 0x112A84u;
label_112a84:
    // 0x112a84: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x112A84u;
    {
        const bool branch_taken_0x112a84 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x112A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112A84u;
            // 0x112a88: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a84) {
            ctx->pc = 0x112AA4u;
            goto label_112aa4;
        }
    }
    ctx->pc = 0x112A8Cu;
    // 0x112a8c: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x112A8Cu;
    SET_GPR_U32(ctx, 31, 0x112A94u);
    ctx->pc = 0x112A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112A8Cu;
            // 0x112a90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112A94u; }
        if (ctx->pc != 0x112A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112A94u; }
        if (ctx->pc != 0x112A94u) { return; }
    }
    ctx->pc = 0x112A94u;
label_112a94:
    // 0x112a94: 0xc04449e  jal         func_111278
    ctx->pc = 0x112A94u;
    SET_GPR_U32(ctx, 31, 0x112A9Cu);
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112A9Cu; }
        if (ctx->pc != 0x112A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112A9Cu; }
        if (ctx->pc != 0x112A9Cu) { return; }
    }
    ctx->pc = 0x112A9Cu;
label_112a9c:
    // 0x112a9c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x112A9Cu;
    {
        const bool branch_taken_0x112a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112A9Cu;
            // 0x112aa0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a9c) {
            ctx->pc = 0x112ADCu;
            goto label_112adc;
        }
    }
    ctx->pc = 0x112AA4u;
label_112aa4:
    // 0x112aa4: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x112aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x112aa8: 0xc04449e  jal         func_111278
    ctx->pc = 0x112AA8u;
    SET_GPR_U32(ctx, 31, 0x112AB0u);
    ctx->pc = 0x112AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112AA8u;
            // 0x112aac: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112AB0u; }
        if (ctx->pc != 0x112AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112AB0u; }
        if (ctx->pc != 0x112AB0u) { return; }
    }
    ctx->pc = 0x112AB0u;
label_112ab0:
    // 0x112ab0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112AB0u;
    {
        const bool branch_taken_0x112ab0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x112ab0) {
            ctx->pc = 0x112AC8u;
            goto label_112ac8;
        }
    }
    ctx->pc = 0x112AB8u;
    // 0x112ab8: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x112AB8u;
    SET_GPR_U32(ctx, 31, 0x112AC0u);
    ctx->pc = 0x112ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112AB8u;
            // 0x112abc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112AC0u; }
        if (ctx->pc != 0x112AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112AC0u; }
        if (ctx->pc != 0x112AC0u) { return; }
    }
    ctx->pc = 0x112AC0u;
label_112ac0:
    // 0x112ac0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x112AC0u;
    {
        const bool branch_taken_0x112ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112AC0u;
            // 0x112ac4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ac0) {
            ctx->pc = 0x112ADCu;
            goto label_112adc;
        }
    }
    ctx->pc = 0x112AC8u;
label_112ac8:
    // 0x112ac8: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x112AC8u;
    SET_GPR_U32(ctx, 31, 0x112AD0u);
    ctx->pc = 0x112ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112AC8u;
            // 0x112acc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112AD0u; }
        if (ctx->pc != 0x112AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112AD0u; }
        if (ctx->pc != 0x112AD0u) { return; }
    }
    ctx->pc = 0x112AD0u;
label_112ad0:
    // 0x112ad0: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x112AD0u;
    SET_GPR_U32(ctx, 31, 0x112AD8u);
    ctx->pc = 0x112AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112AD0u;
            // 0x112ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112AD8u; }
        if (ctx->pc != 0x112AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112AD8u; }
        if (ctx->pc != 0x112AD8u) { return; }
    }
    ctx->pc = 0x112AD8u;
label_112ad8:
    // 0x112ad8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x112ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_112adc:
    // 0x112adc: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x112adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x112ae0: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x112ae0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x112ae4: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x112ae4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x112ae8: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x112ae8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x112aec: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x112aecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x112af0: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x112af0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x112af4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x112af4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x112af8: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x112af8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x112afc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x112afcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x112b00: 0x3e00008  jr          $ra
    ctx->pc = 0x112B00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112B00u;
            // 0x112b04: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x112B08u;
    // 0x112b08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x112b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x112b0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x112b10: 0xc044a56  jal         func_112958
    ctx->pc = 0x112B10u;
    SET_GPR_U32(ctx, 31, 0x112B18u);
    ctx->pc = 0x112B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112B10u;
            // 0x112b14: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112958u;
    goto label_112958;
    ctx->pc = 0x112B18u;
label_112b18:
    // 0x112b18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x112B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112B1Cu;
            // 0x112b20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x112B24u;
    // 0x112b24: 0x0  nop
    ctx->pc = 0x112b24u;
    // NOP
    // 0x112b28: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x112b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x112b2c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x112b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x112b30: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x112b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x112b34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x112b34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112b38: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x112b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x112b3c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x112b3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112b40: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x112b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x112b44: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x112b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x112b48: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x112b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x112b4c: 0x3c17006c  lui         $s7, 0x6C
    ctx->pc = 0x112b4cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)108 << 16));
    // 0x112b50: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x112b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x112b54: 0x26f2b440  addiu       $s2, $s7, -0x4BC0
    ctx->pc = 0x112b54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294947904));
    // 0x112b58: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x112b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x112b5c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x112b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x112b60: 0xc044492  jal         func_111248
    ctx->pc = 0x112B60u;
    SET_GPR_U32(ctx, 31, 0x112B68u);
    ctx->pc = 0x112B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112B60u;
            // 0x112b64: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111248u;
    if (runtime->hasFunction(0x111248u)) {
        auto targetFn = runtime->lookupFunction(0x111248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112B68u; }
        if (ctx->pc != 0x112B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111248_0x111248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112B68u; }
        if (ctx->pc != 0x112B68u) { return; }
    }
    ctx->pc = 0x112B68u;
label_112b68:
    // 0x112b68: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x112b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x112b6c: 0x8c43e43c  lw          $v1, -0x1BC4($v0)
    ctx->pc = 0x112b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960188)));
    // 0x112b70: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x112B70u;
    {
        const bool branch_taken_0x112b70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112b70) {
            ctx->pc = 0x112B74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112B70u;
            // 0x112b74: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x112B84u;
            goto label_112b84;
        }
    }
    ctx->pc = 0x112B78u;
    // 0x112b78: 0xc0444dc  jal         func_111370
    ctx->pc = 0x112B78u;
    SET_GPR_U32(ctx, 31, 0x112B80u);
    ctx->pc = 0x111370u;
    if (runtime->hasFunction(0x111370u)) {
        auto targetFn = runtime->lookupFunction(0x111370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112B80u; }
        if (ctx->pc != 0x112B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111370_0x111370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112B80u; }
        if (ctx->pc != 0x112B80u) { return; }
    }
    ctx->pc = 0x112B80u;
label_112b80:
    // 0x112b80: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x112b80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_112b84:
    // 0x112b84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x112b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112b88: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x112b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x112b8c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x112B8Cu;
    {
        const bool branch_taken_0x112b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x112B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112B8Cu;
            // 0x112b90: 0xa2420010  sb          $v0, 0x10($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b8c) {
            ctx->pc = 0x112BD4u;
            goto label_112bd4;
        }
    }
    ctx->pc = 0x112B94u;
    // 0x112b94: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x112b94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x112b98: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x112b98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x112b9c: 0x3c15006c  lui         $s5, 0x6C
    ctx->pc = 0x112b9cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
    // 0x112ba0: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x112ba0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
    // 0x112ba4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x112ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_112ba8:
    // 0x112ba8: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x112ba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x112bac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x112BACu;
    {
        const bool branch_taken_0x112bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112BACu;
            // 0x112bb0: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112bac) {
            ctx->pc = 0x112BE4u;
            goto label_112be4;
        }
    }
    ctx->pc = 0x112BB4u;
    // 0x112bb4: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x112bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x112bb8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x112bb8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112bbc: 0xa0830010  sb          $v1, 0x10($a0)
    ctx->pc = 0x112bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x112bc0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x112bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x112bc4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x112BC4u;
    {
        const bool branch_taken_0x112bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112bc4) {
            ctx->pc = 0x112BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112BC4u;
            // 0x112bc8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x112BA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_112ba8;
        }
    }
    ctx->pc = 0x112BCCu;
    // 0x112bcc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x112BCCu;
    {
        const bool branch_taken_0x112bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112BCCu;
            // 0x112bd0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112bcc) {
            ctx->pc = 0x112BE8u;
            goto label_112be8;
        }
    }
    ctx->pc = 0x112BD4u;
label_112bd4:
    // 0x112bd4: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x112bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x112bd8: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x112bd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x112bdc: 0x3c15006c  lui         $s5, 0x6C
    ctx->pc = 0x112bdcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
    // 0x112be0: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x112be0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
label_112be4:
    // 0x112be4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x112be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_112be8:
    // 0x112be8: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x112BE8u;
    {
        const bool branch_taken_0x112be8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x112be8) {
            ctx->pc = 0x112BECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112BE8u;
            // 0x112bec: 0xae56000c  sw          $s6, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x112BFCu;
            goto label_112bfc;
        }
    }
    ctx->pc = 0x112BF0u;
    // 0x112bf0: 0xa240040f  sb          $zero, 0x40F($s2)
    ctx->pc = 0x112bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1039), (uint8_t)GPR_U32(ctx, 0));
    // 0x112bf4: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x112bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x112bf8: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x112bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_112bfc:
    // 0x112bfc: 0x24a3f020  addiu       $v1, $a1, -0xFE0
    ctx->pc = 0x112bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963232));
    // 0x112c00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x112c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112c04: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x112c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x112c08: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x112c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x112c0c: 0x2694c080  addiu       $s4, $s4, -0x3F80
    ctx->pc = 0x112c0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951040));
    // 0x112c10: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x112c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x112c14: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x112C14u;
    SET_GPR_U32(ctx, 31, 0x112C1Cu);
    ctx->pc = 0x112C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112C14u;
            // 0x112c18: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112C1Cu; }
        if (ctx->pc != 0x112C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112C1Cu; }
        if (ctx->pc != 0x112C1Cu) { return; }
    }
    ctx->pc = 0x112C1Cu;
label_112c1c:
    // 0x112c1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x112c1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c20: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x112c20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x112c24: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x112c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x112c28: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x112c28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x112c2c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x112c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x112c30: 0x26a4cb40  addiu       $a0, $s5, -0x34C0
    ctx->pc = 0x112c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294953792));
    // 0x112c34: 0x26e7b440  addiu       $a3, $s7, -0x4BC0
    ctx->pc = 0x112c34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294947904));
    // 0x112c38: 0x26080011  addiu       $t0, $s0, 0x11
    ctx->pc = 0x112c38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x112c3c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x112c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x112c40: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x112c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x112c44: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x112c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x112c48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x112c48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c4c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x112c4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c50: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x112c50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x112c54: 0xc044336  jal         func_110CD8
    ctx->pc = 0x112C54u;
    SET_GPR_U32(ctx, 31, 0x112C5Cu);
    ctx->pc = 0x112C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112C54u;
            // 0x112c58: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110CD8u;
    if (runtime->hasFunction(0x110CD8u)) {
        auto targetFn = runtime->lookupFunction(0x110CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112C5Cu; }
        if (ctx->pc != 0x112C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110CD8_0x110cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112C5Cu; }
        if (ctx->pc != 0x112C5Cu) { return; }
    }
    ctx->pc = 0x112C5Cu;
label_112c5c:
    // 0x112c5c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x112C5Cu;
    {
        const bool branch_taken_0x112c5c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x112C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112C5Cu;
            // 0x112c60: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c5c) {
            ctx->pc = 0x112C7Cu;
            goto label_112c7c;
        }
    }
    ctx->pc = 0x112C64u;
    // 0x112c64: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x112C64u;
    SET_GPR_U32(ctx, 31, 0x112C6Cu);
    ctx->pc = 0x112C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112C64u;
            // 0x112c68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112C6Cu; }
        if (ctx->pc != 0x112C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112C6Cu; }
        if (ctx->pc != 0x112C6Cu) { return; }
    }
    ctx->pc = 0x112C6Cu;
label_112c6c:
    // 0x112c6c: 0xc04449e  jal         func_111278
    ctx->pc = 0x112C6Cu;
    SET_GPR_U32(ctx, 31, 0x112C74u);
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112C74u; }
        if (ctx->pc != 0x112C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112C74u; }
        if (ctx->pc != 0x112C74u) { return; }
    }
    ctx->pc = 0x112C74u;
label_112c74:
    // 0x112c74: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x112C74u;
    {
        const bool branch_taken_0x112c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112C74u;
            // 0x112c78: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c74) {
            ctx->pc = 0x112CB4u;
            goto label_112cb4;
        }
    }
    ctx->pc = 0x112C7Cu;
label_112c7c:
    // 0x112c7c: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x112c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x112c80: 0xc04449e  jal         func_111278
    ctx->pc = 0x112C80u;
    SET_GPR_U32(ctx, 31, 0x112C88u);
    ctx->pc = 0x112C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112C80u;
            // 0x112c84: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112C88u; }
        if (ctx->pc != 0x112C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112C88u; }
        if (ctx->pc != 0x112C88u) { return; }
    }
    ctx->pc = 0x112C88u;
label_112c88:
    // 0x112c88: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112C88u;
    {
        const bool branch_taken_0x112c88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x112c88) {
            ctx->pc = 0x112CA0u;
            goto label_112ca0;
        }
    }
    ctx->pc = 0x112C90u;
    // 0x112c90: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x112C90u;
    SET_GPR_U32(ctx, 31, 0x112C98u);
    ctx->pc = 0x112C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112C90u;
            // 0x112c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112C98u; }
        if (ctx->pc != 0x112C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112C98u; }
        if (ctx->pc != 0x112C98u) { return; }
    }
    ctx->pc = 0x112C98u;
label_112c98:
    // 0x112c98: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x112C98u;
    {
        const bool branch_taken_0x112c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112C98u;
            // 0x112c9c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c98) {
            ctx->pc = 0x112CB4u;
            goto label_112cb4;
        }
    }
    ctx->pc = 0x112CA0u;
label_112ca0:
    // 0x112ca0: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x112CA0u;
    SET_GPR_U32(ctx, 31, 0x112CA8u);
    ctx->pc = 0x112CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112CA0u;
            // 0x112ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112CA8u; }
        if (ctx->pc != 0x112CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112CA8u; }
        if (ctx->pc != 0x112CA8u) { return; }
    }
    ctx->pc = 0x112CA8u;
label_112ca8:
    // 0x112ca8: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x112CA8u;
    SET_GPR_U32(ctx, 31, 0x112CB0u);
    ctx->pc = 0x112CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112CA8u;
            // 0x112cac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112CB0u; }
        if (ctx->pc != 0x112CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112CB0u; }
        if (ctx->pc != 0x112CB0u) { return; }
    }
    ctx->pc = 0x112CB0u;
label_112cb0:
    // 0x112cb0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x112cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_112cb4:
    // 0x112cb4: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x112cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x112cb8: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x112cb8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x112cbc: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x112cbcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x112cc0: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x112cc0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x112cc4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x112cc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x112cc8: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x112cc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x112ccc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x112cccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x112cd0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x112cd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x112cd4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x112cd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x112cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x112CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112CD8u;
            // 0x112cdc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x112CE0u;
    // 0x112ce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x112ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x112ce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x112ce8: 0xc044a56  jal         func_112958
    ctx->pc = 0x112CE8u;
    SET_GPR_U32(ctx, 31, 0x112CF0u);
    ctx->pc = 0x112CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112CE8u;
            // 0x112cec: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112958u;
    goto label_112958;
    ctx->pc = 0x112CF0u;
label_112cf0:
    // 0x112cf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x112CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112CF4u;
            // 0x112cf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x112CFCu;
    // 0x112cfc: 0x0  nop
    ctx->pc = 0x112cfcu;
    // NOP
    // 0x112d00: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x112d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x112d04: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x112d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x112d08: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x112d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x112d0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x112d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112d10: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x112d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x112d14: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x112d14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112d18: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x112d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x112d1c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x112d1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112d20: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x112d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x112d24: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x112d24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112d28: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x112d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x112d2c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x112d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x112d30: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x112d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x112d34: 0x3c17006c  lui         $s7, 0x6C
    ctx->pc = 0x112d34u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)108 << 16));
    // 0x112d38: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x112d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x112d3c: 0x26f3b440  addiu       $s3, $s7, -0x4BC0
    ctx->pc = 0x112d3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 4294947904));
    // 0x112d40: 0xc044492  jal         func_111248
    ctx->pc = 0x112D40u;
    SET_GPR_U32(ctx, 31, 0x112D48u);
    ctx->pc = 0x112D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112D40u;
            // 0x112d44: 0xffb40080  sd          $s4, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111248u;
    if (runtime->hasFunction(0x111248u)) {
        auto targetFn = runtime->lookupFunction(0x111248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112D48u; }
        if (ctx->pc != 0x112D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111248_0x111248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112D48u; }
        if (ctx->pc != 0x112D48u) { return; }
    }
    ctx->pc = 0x112D48u;
label_112d48:
    // 0x112d48: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x112d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x112d4c: 0x8c43e43c  lw          $v1, -0x1BC4($v0)
    ctx->pc = 0x112d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960188)));
    // 0x112d50: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x112D50u;
    {
        const bool branch_taken_0x112d50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112d50) {
            ctx->pc = 0x112D54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112D50u;
            // 0x112d54: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x112D64u;
            goto label_112d64;
        }
    }
    ctx->pc = 0x112D58u;
    // 0x112d58: 0xc0444dc  jal         func_111370
    ctx->pc = 0x112D58u;
    SET_GPR_U32(ctx, 31, 0x112D60u);
    ctx->pc = 0x111370u;
    if (runtime->hasFunction(0x111370u)) {
        auto targetFn = runtime->lookupFunction(0x111370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112D60u; }
        if (ctx->pc != 0x112D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111370_0x111370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112D60u; }
        if (ctx->pc != 0x112D60u) { return; }
    }
    ctx->pc = 0x112D60u;
label_112d60:
    // 0x112d60: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x112d60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_112d64:
    // 0x112d64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x112d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112d68: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x112d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x112d6c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x112D6Cu;
    {
        const bool branch_taken_0x112d6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x112D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112D6Cu;
            // 0x112d70: 0xa262000c  sb          $v0, 0xC($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d6c) {
            ctx->pc = 0x112DACu;
            goto label_112dac;
        }
    }
    ctx->pc = 0x112D74u;
    // 0x112d74: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x112d74u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x112d78: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x112d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x112d7c: 0x0  nop
    ctx->pc = 0x112d7cu;
    // NOP
label_112d80:
    // 0x112d80: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x112d80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x112d84: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x112D84u;
    {
        const bool branch_taken_0x112d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112D84u;
            // 0x112d88: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d84) {
            ctx->pc = 0x112DB0u;
            goto label_112db0;
        }
    }
    ctx->pc = 0x112D8Cu;
    // 0x112d8c: 0x2652021  addu        $a0, $s3, $a1
    ctx->pc = 0x112d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x112d90: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x112d90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112d94: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x112d94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x112d98: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x112d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x112d9c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x112D9Cu;
    {
        const bool branch_taken_0x112d9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112d9c) {
            ctx->pc = 0x112DA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112D9Cu;
            // 0x112da0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x112D80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_112d80;
        }
    }
    ctx->pc = 0x112DA4u;
    // 0x112da4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x112DA4u;
    {
        const bool branch_taken_0x112da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112DA4u;
            // 0x112da8: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112da4) {
            ctx->pc = 0x112DB4u;
            goto label_112db4;
        }
    }
    ctx->pc = 0x112DACu;
label_112dac:
    // 0x112dac: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x112dacu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
label_112db0:
    // 0x112db0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x112db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_112db4:
    // 0x112db4: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x112DB4u;
    {
        const bool branch_taken_0x112db4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x112db4) {
            ctx->pc = 0x112DB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112DB4u;
            // 0x112db8: 0xa260040b  sb          $zero, 0x40B($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1035), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x112DBCu;
            goto label_112dbc;
        }
    }
    ctx->pc = 0x112DBCu;
label_112dbc:
    // 0x112dbc: 0x56400003  bnel        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x112DBCu;
    {
        const bool branch_taken_0x112dbc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x112dbc) {
            ctx->pc = 0x112DC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112DBCu;
            // 0x112dc0: 0x92420000  lbu         $v0, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x112DCCu;
            goto label_112dcc;
        }
    }
    ctx->pc = 0x112DC4u;
    // 0x112dc4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x112DC4u;
    {
        const bool branch_taken_0x112dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112DC4u;
            // 0x112dc8: 0xa260040c  sb          $zero, 0x40C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1036), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112dc4) {
            ctx->pc = 0x112E18u;
            goto label_112e18;
        }
    }
    ctx->pc = 0x112DCCu;
label_112dcc:
    // 0x112dcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x112dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112dd0: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x112dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x112dd4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x112DD4u;
    {
        const bool branch_taken_0x112dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x112DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112DD4u;
            // 0x112dd8: 0xa262040c  sb          $v0, 0x40C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112dd4) {
            ctx->pc = 0x112E0Cu;
            goto label_112e0c;
        }
    }
    ctx->pc = 0x112DDCu;
    // 0x112ddc: 0x2666040c  addiu       $a2, $s3, 0x40C
    ctx->pc = 0x112ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1036));
    // 0x112de0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x112de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x112de4: 0x0  nop
    ctx->pc = 0x112de4u;
    // NOP
label_112de8:
    // 0x112de8: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x112de8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x112dec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x112DECu;
    {
        const bool branch_taken_0x112dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112DECu;
            // 0x112df0: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112dec) {
            ctx->pc = 0x112E0Cu;
            goto label_112e0c;
        }
    }
    ctx->pc = 0x112DF4u;
    // 0x112df4: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x112df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x112df8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x112df8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112dfc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x112dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x112e00: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x112e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x112e04: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x112E04u;
    {
        const bool branch_taken_0x112e04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112e04) {
            ctx->pc = 0x112E08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112E04u;
            // 0x112e08: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x112DE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_112de8;
        }
    }
    ctx->pc = 0x112E0Cu;
label_112e0c:
    // 0x112e0c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x112e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x112e10: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x112E10u;
    {
        const bool branch_taken_0x112e10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x112e10) {
            ctx->pc = 0x112E14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112E10u;
            // 0x112e14: 0xa260080b  sb          $zero, 0x80B($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2059), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x112E18u;
            goto label_112e18;
        }
    }
    ctx->pc = 0x112E18u;
label_112e18:
    // 0x112e18: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x112E18u;
    {
        const bool branch_taken_0x112e18 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x112e18) {
            ctx->pc = 0x112E30u;
            goto label_112e30;
        }
    }
    ctx->pc = 0x112E20u;
    // 0x112e20: 0xc04449e  jal         func_111278
    ctx->pc = 0x112E20u;
    SET_GPR_U32(ctx, 31, 0x112E28u);
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112E28u; }
        if (ctx->pc != 0x112E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112E28u; }
        if (ctx->pc != 0x112E28u) { return; }
    }
    ctx->pc = 0x112E28u;
label_112e28:
    // 0x112e28: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x112E28u;
    {
        const bool branch_taken_0x112e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112E28u;
            // 0x112e2c: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e28) {
            ctx->pc = 0x112F54u;
            goto label_112f54;
        }
    }
    ctx->pc = 0x112E30u;
label_112e30:
    // 0x112e30: 0x1a200011  blez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x112E30u;
    {
        const bool branch_taken_0x112e30 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x112E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112E30u;
            // 0x112e34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e30) {
            ctx->pc = 0x112E78u;
            goto label_112e78;
        }
    }
    ctx->pc = 0x112E38u;
    // 0x112e38: 0x2666080c  addiu       $a2, $s3, 0x80C
    ctx->pc = 0x112e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2060));
    // 0x112e3c: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x112e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
    // 0x112e40: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x112e40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x112e44: 0x3c15006c  lui         $s5, 0x6C
    ctx->pc = 0x112e44u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
    // 0x112e48: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x112e48u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
    // 0x112e4c: 0x0  nop
    ctx->pc = 0x112e4cu;
    // NOP
label_112e50:
    // 0x112e50: 0x2c51021  addu        $v0, $s6, $a1
    ctx->pc = 0x112e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x112e54: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x112e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x112e58: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x112e58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112e5c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x112e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x112e60: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x112e60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x112e64: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x112e64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x112e68: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x112E68u;
    {
        const bool branch_taken_0x112e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112e68) {
            ctx->pc = 0x112E50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_112e50;
        }
    }
    ctx->pc = 0x112E70u;
    // 0x112e70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x112E70u;
    {
        const bool branch_taken_0x112e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112E70u;
            // 0x112e74: 0xae710c0c  sw          $s1, 0xC0C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3084), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e70) {
            ctx->pc = 0x112E8Cu;
            goto label_112e8c;
        }
    }
    ctx->pc = 0x112E78u;
label_112e78:
    // 0x112e78: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x112e78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
    // 0x112e7c: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x112e7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x112e80: 0x3c15006c  lui         $s5, 0x6C
    ctx->pc = 0x112e80u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
    // 0x112e84: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x112e84u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
    // 0x112e88: 0xae710c0c  sw          $s1, 0xC0C($s3)
    ctx->pc = 0x112e88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3084), GPR_U32(ctx, 17));
label_112e8c:
    // 0x112e8c: 0x24e3f038  addiu       $v1, $a3, -0xFC8
    ctx->pc = 0x112e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963256));
    // 0x112e90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x112e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112e94: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x112e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x112e98: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x112e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x112e9c: 0x26f0b440  addiu       $s0, $s7, -0x4BC0
    ctx->pc = 0x112e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294947904));
    // 0x112ea0: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x112ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x112ea4: 0x2694c080  addiu       $s4, $s4, -0x3F80
    ctx->pc = 0x112ea4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951040));
    // 0x112ea8: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x112EA8u;
    SET_GPR_U32(ctx, 31, 0x112EB0u);
    ctx->pc = 0x112EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112EA8u;
            // 0x112eac: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112EB0u; }
        if (ctx->pc != 0x112EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112EB0u; }
        if (ctx->pc != 0x112EB0u) { return; }
    }
    ctx->pc = 0x112EB0u;
label_112eb0:
    // 0x112eb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x112eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112eb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112eb8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x112eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x112ebc: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x112ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x112ec0: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x112ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x112ec4: 0x24050c10  addiu       $a1, $zero, 0xC10
    ctx->pc = 0x112ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3088));
    // 0x112ec8: 0xc043e7e  jal         func_10F9F8
    ctx->pc = 0x112EC8u;
    SET_GPR_U32(ctx, 31, 0x112ED0u);
    ctx->pc = 0x112ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112EC8u;
            // 0x112ecc: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F9F8u;
    if (runtime->hasFunction(0x10F9F8u)) {
        auto targetFn = runtime->lookupFunction(0x10F9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112ED0u; }
        if (ctx->pc != 0x112ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F9F8_0x10f9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112ED0u; }
        if (ctx->pc != 0x112ED0u) { return; }
    }
    ctx->pc = 0x112ED0u;
label_112ed0:
    // 0x112ed0: 0x26a4cb40  addiu       $a0, $s5, -0x34C0
    ctx->pc = 0x112ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294953792));
    // 0x112ed4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x112ed4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112ed8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x112ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x112edc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x112edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x112ee0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x112ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x112ee4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x112ee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112ee8: 0x24080c10  addiu       $t0, $zero, 0xC10
    ctx->pc = 0x112ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3088));
    // 0x112eec: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x112eecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112ef0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x112ef0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x112ef4: 0xc044336  jal         func_110CD8
    ctx->pc = 0x112EF4u;
    SET_GPR_U32(ctx, 31, 0x112EFCu);
    ctx->pc = 0x112EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112EF4u;
            // 0x112ef8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110CD8u;
    if (runtime->hasFunction(0x110CD8u)) {
        auto targetFn = runtime->lookupFunction(0x110CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112EFCu; }
        if (ctx->pc != 0x112EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110CD8_0x110cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112EFCu; }
        if (ctx->pc != 0x112EFCu) { return; }
    }
    ctx->pc = 0x112EFCu;
label_112efc:
    // 0x112efc: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x112EFCu;
    {
        const bool branch_taken_0x112efc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x112F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112EFCu;
            // 0x112f00: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112efc) {
            ctx->pc = 0x112F1Cu;
            goto label_112f1c;
        }
    }
    ctx->pc = 0x112F04u;
    // 0x112f04: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x112F04u;
    SET_GPR_U32(ctx, 31, 0x112F0Cu);
    ctx->pc = 0x112F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112F04u;
            // 0x112f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112F0Cu; }
        if (ctx->pc != 0x112F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112F0Cu; }
        if (ctx->pc != 0x112F0Cu) { return; }
    }
    ctx->pc = 0x112F0Cu;
label_112f0c:
    // 0x112f0c: 0xc04449e  jal         func_111278
    ctx->pc = 0x112F0Cu;
    SET_GPR_U32(ctx, 31, 0x112F14u);
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112F14u; }
        if (ctx->pc != 0x112F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112F14u; }
        if (ctx->pc != 0x112F14u) { return; }
    }
    ctx->pc = 0x112F14u;
label_112f14:
    // 0x112f14: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x112F14u;
    {
        const bool branch_taken_0x112f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112F14u;
            // 0x112f18: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f14) {
            ctx->pc = 0x112F54u;
            goto label_112f54;
        }
    }
    ctx->pc = 0x112F1Cu;
label_112f1c:
    // 0x112f1c: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x112f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x112f20: 0xc04449e  jal         func_111278
    ctx->pc = 0x112F20u;
    SET_GPR_U32(ctx, 31, 0x112F28u);
    ctx->pc = 0x112F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112F20u;
            // 0x112f24: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112F28u; }
        if (ctx->pc != 0x112F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112F28u; }
        if (ctx->pc != 0x112F28u) { return; }
    }
    ctx->pc = 0x112F28u;
label_112f28:
    // 0x112f28: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112F28u;
    {
        const bool branch_taken_0x112f28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x112f28) {
            ctx->pc = 0x112F40u;
            goto label_112f40;
        }
    }
    ctx->pc = 0x112F30u;
    // 0x112f30: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x112F30u;
    SET_GPR_U32(ctx, 31, 0x112F38u);
    ctx->pc = 0x112F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112F30u;
            // 0x112f34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112F38u; }
        if (ctx->pc != 0x112F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112F38u; }
        if (ctx->pc != 0x112F38u) { return; }
    }
    ctx->pc = 0x112F38u;
label_112f38:
    // 0x112f38: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x112F38u;
    {
        const bool branch_taken_0x112f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112F38u;
            // 0x112f3c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f38) {
            ctx->pc = 0x112F54u;
            goto label_112f54;
        }
    }
    ctx->pc = 0x112F40u;
label_112f40:
    // 0x112f40: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x112F40u;
    SET_GPR_U32(ctx, 31, 0x112F48u);
    ctx->pc = 0x112F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112F40u;
            // 0x112f44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112F48u; }
        if (ctx->pc != 0x112F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112F48u; }
        if (ctx->pc != 0x112F48u) { return; }
    }
    ctx->pc = 0x112F48u;
label_112f48:
    // 0x112f48: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x112F48u;
    SET_GPR_U32(ctx, 31, 0x112F50u);
    ctx->pc = 0x112F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112F48u;
            // 0x112f4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112F50u; }
        if (ctx->pc != 0x112F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112F50u; }
        if (ctx->pc != 0x112F50u) { return; }
    }
    ctx->pc = 0x112F50u;
label_112f50:
    // 0x112f50: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x112f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_112f54:
    // 0x112f54: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x112f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x112f58: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x112f58u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x112f5c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x112f5cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x112f60: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x112f60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x112f64: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x112f64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x112f68: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x112f68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x112f6c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x112f6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x112f70: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x112f70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x112f74: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x112f74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x112f78: 0x3e00008  jr          $ra
    ctx->pc = 0x112F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112F78u;
            // 0x112f7c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x112F80u;
    // 0x112f80: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x112f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x112f84: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x112f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x112f88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x112f88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112f8c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x112f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x112f90: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x112f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x112f94: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x112f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x112f98: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x112f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x112f9c: 0x3c13006c  lui         $s3, 0x6C
    ctx->pc = 0x112f9cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)108 << 16));
    // 0x112fa0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x112fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x112fa4: 0xc044492  jal         func_111248
    ctx->pc = 0x112FA4u;
    SET_GPR_U32(ctx, 31, 0x112FACu);
    ctx->pc = 0x112FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112FA4u;
            // 0x112fa8: 0x2670b440  addiu       $s0, $s3, -0x4BC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294947904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111248u;
    if (runtime->hasFunction(0x111248u)) {
        auto targetFn = runtime->lookupFunction(0x111248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112FACu; }
        if (ctx->pc != 0x112FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111248_0x111248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112FACu; }
        if (ctx->pc != 0x112FACu) { return; }
    }
    ctx->pc = 0x112FACu;
label_112fac:
    // 0x112fac: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x112facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x112fb0: 0x8c62e43c  lw          $v0, -0x1BC4($v1)
    ctx->pc = 0x112fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960188)));
    // 0x112fb4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x112FB4u;
    {
        const bool branch_taken_0x112fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112FB4u;
            // 0x112fb8: 0x3c020063  lui         $v0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112fb4) {
            ctx->pc = 0x112FC8u;
            goto label_112fc8;
        }
    }
    ctx->pc = 0x112FBCu;
    // 0x112fbc: 0xc0444dc  jal         func_111370
    ctx->pc = 0x112FBCu;
    SET_GPR_U32(ctx, 31, 0x112FC4u);
    ctx->pc = 0x111370u;
    if (runtime->hasFunction(0x111370u)) {
        auto targetFn = runtime->lookupFunction(0x111370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112FC4u; }
        if (ctx->pc != 0x112FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111370_0x111370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112FC4u; }
        if (ctx->pc != 0x112FC4u) { return; }
    }
    ctx->pc = 0x112FC4u;
label_112fc4:
    // 0x112fc4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x112fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_112fc8:
    // 0x112fc8: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x112fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x112fcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x112fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112fd0: 0x2442f050  addiu       $v0, $v0, -0xFB0
    ctx->pc = 0x112fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963280));
    // 0x112fd4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x112fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x112fd8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x112fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x112fdc: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x112fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x112fe0: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x112FE0u;
    SET_GPR_U32(ctx, 31, 0x112FE8u);
    ctx->pc = 0x112FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112FE0u;
            // 0x112fe4: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112FE8u; }
        if (ctx->pc != 0x112FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112FE8u; }
        if (ctx->pc != 0x112FE8u) { return; }
    }
    ctx->pc = 0x112FE8u;
label_112fe8:
    // 0x112fe8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x112fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112fec: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x112fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x112ff0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x112ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x112ff4: 0xae71b440  sw          $s1, -0x4BC0($s3)
    ctx->pc = 0x112ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294947904), GPR_U32(ctx, 17));
    // 0x112ff8: 0x2452c080  addiu       $s2, $v0, -0x3F80
    ctx->pc = 0x112ff8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951040));
    // 0x112ffc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x112ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x113000: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x113000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x113004: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x113004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x113008: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x113008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x11300c: 0x2484cb40  addiu       $a0, $a0, -0x34C0
    ctx->pc = 0x11300cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953792));
    // 0x113010: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x113010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113014: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x113014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x113018: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x113018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11301c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11301cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113020: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x113020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x113024: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x113024u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x113028: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x113028u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11302c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x11302cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x113030: 0xc044336  jal         func_110CD8
    ctx->pc = 0x113030u;
    SET_GPR_U32(ctx, 31, 0x113038u);
    ctx->pc = 0x113034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113030u;
            // 0x113034: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110CD8u;
    if (runtime->hasFunction(0x110CD8u)) {
        auto targetFn = runtime->lookupFunction(0x110CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113038u; }
        if (ctx->pc != 0x113038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110CD8_0x110cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113038u; }
        if (ctx->pc != 0x113038u) { return; }
    }
    ctx->pc = 0x113038u;
label_113038:
    // 0x113038: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x113038u;
    {
        const bool branch_taken_0x113038 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11303Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113038u;
            // 0x11303c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113038) {
            ctx->pc = 0x113058u;
            goto label_113058;
        }
    }
    ctx->pc = 0x113040u;
    // 0x113040: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x113040u;
    SET_GPR_U32(ctx, 31, 0x113048u);
    ctx->pc = 0x113044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113040u;
            // 0x113044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113048u; }
        if (ctx->pc != 0x113048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113048u; }
        if (ctx->pc != 0x113048u) { return; }
    }
    ctx->pc = 0x113048u;
label_113048:
    // 0x113048: 0xc04449e  jal         func_111278
    ctx->pc = 0x113048u;
    SET_GPR_U32(ctx, 31, 0x113050u);
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113050u; }
        if (ctx->pc != 0x113050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113050u; }
        if (ctx->pc != 0x113050u) { return; }
    }
    ctx->pc = 0x113050u;
label_113050:
    // 0x113050: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x113050u;
    {
        const bool branch_taken_0x113050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113050u;
            // 0x113054: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113050) {
            ctx->pc = 0x113090u;
            goto label_113090;
        }
    }
    ctx->pc = 0x113058u;
label_113058:
    // 0x113058: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x113058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x11305c: 0xc04449e  jal         func_111278
    ctx->pc = 0x11305Cu;
    SET_GPR_U32(ctx, 31, 0x113064u);
    ctx->pc = 0x113060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11305Cu;
            // 0x113060: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113064u; }
        if (ctx->pc != 0x113064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113064u; }
        if (ctx->pc != 0x113064u) { return; }
    }
    ctx->pc = 0x113064u;
label_113064:
    // 0x113064: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x113064u;
    {
        const bool branch_taken_0x113064 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x113064) {
            ctx->pc = 0x11307Cu;
            goto label_11307c;
        }
    }
    ctx->pc = 0x11306Cu;
    // 0x11306c: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x11306Cu;
    SET_GPR_U32(ctx, 31, 0x113074u);
    ctx->pc = 0x113070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11306Cu;
            // 0x113070: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113074u; }
        if (ctx->pc != 0x113074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113074u; }
        if (ctx->pc != 0x113074u) { return; }
    }
    ctx->pc = 0x113074u;
label_113074:
    // 0x113074: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x113074u;
    {
        const bool branch_taken_0x113074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113074u;
            // 0x113078: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113074) {
            ctx->pc = 0x113090u;
            goto label_113090;
        }
    }
    ctx->pc = 0x11307Cu;
label_11307c:
    // 0x11307c: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x11307Cu;
    SET_GPR_U32(ctx, 31, 0x113084u);
    ctx->pc = 0x113080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11307Cu;
            // 0x113080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113084u; }
        if (ctx->pc != 0x113084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113084u; }
        if (ctx->pc != 0x113084u) { return; }
    }
    ctx->pc = 0x113084u;
label_113084:
    // 0x113084: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x113084u;
    SET_GPR_U32(ctx, 31, 0x11308Cu);
    ctx->pc = 0x113088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113084u;
            // 0x113088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11308Cu; }
        if (ctx->pc != 0x11308Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11308Cu; }
        if (ctx->pc != 0x11308Cu) { return; }
    }
    ctx->pc = 0x11308Cu;
label_11308c:
    // 0x11308c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x11308cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_113090:
    // 0x113090: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x113090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x113094: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x113094u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x113098: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x113098u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11309c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x11309cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1130a0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1130a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1130a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1130A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1130A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1130A4u;
            // 0x1130a8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1130ACu;
    // 0x1130ac: 0x0  nop
    ctx->pc = 0x1130acu;
    // NOP
    // 0x1130b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1130b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1130b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1130b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1130b8: 0xc044a56  jal         func_112958
    ctx->pc = 0x1130B8u;
    SET_GPR_U32(ctx, 31, 0x1130C0u);
    ctx->pc = 0x1130BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1130B8u;
            // 0x1130bc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112958u;
    goto label_112958;
    ctx->pc = 0x1130C0u;
label_1130c0:
    // 0x1130c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1130c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1130c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1130C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1130C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1130C4u;
            // 0x1130c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1130CCu;
    // 0x1130cc: 0x0  nop
    ctx->pc = 0x1130ccu;
    // NOP
    // 0x1130d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1130d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1130d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1130d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1130d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1130d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1130dc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1130dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1130e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1130e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1130e4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1130e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1130e8: 0xc044492  jal         func_111248
    ctx->pc = 0x1130E8u;
    SET_GPR_U32(ctx, 31, 0x1130F0u);
    ctx->pc = 0x1130ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1130E8u;
            // 0x1130ec: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111248u;
    if (runtime->hasFunction(0x111248u)) {
        auto targetFn = runtime->lookupFunction(0x111248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1130F0u; }
        if (ctx->pc != 0x1130F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111248_0x111248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1130F0u; }
        if (ctx->pc != 0x1130F0u) { return; }
    }
    ctx->pc = 0x1130F0u;
label_1130f0:
    // 0x1130f0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1130f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1130f4: 0x8c62e43c  lw          $v0, -0x1BC4($v1)
    ctx->pc = 0x1130f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960188)));
    // 0x1130f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1130F8u;
    {
        const bool branch_taken_0x1130f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1130f8) {
            ctx->pc = 0x113108u;
            goto label_113108;
        }
    }
    ctx->pc = 0x113100u;
    // 0x113100: 0xc0444dc  jal         func_111370
    ctx->pc = 0x113100u;
    SET_GPR_U32(ctx, 31, 0x113108u);
    ctx->pc = 0x111370u;
    if (runtime->hasFunction(0x111370u)) {
        auto targetFn = runtime->lookupFunction(0x111370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113108u; }
        if (ctx->pc != 0x113108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111370_0x111370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113108u; }
        if (ctx->pc != 0x113108u) { return; }
    }
    ctx->pc = 0x113108u;
label_113108:
    // 0x113108: 0xc04449e  jal         func_111278
    ctx->pc = 0x113108u;
    SET_GPR_U32(ctx, 31, 0x113110u);
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113110u; }
        if (ctx->pc != 0x113110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113110u; }
        if (ctx->pc != 0x113110u) { return; }
    }
    ctx->pc = 0x113110u;
label_113110:
    // 0x113110: 0xc044314  jal         func_110C50
    ctx->pc = 0x113110u;
    SET_GPR_U32(ctx, 31, 0x113118u);
    ctx->pc = 0x110C50u;
    if (runtime->hasFunction(0x110C50u)) {
        auto targetFn = runtime->lookupFunction(0x110C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113118u; }
        if (ctx->pc != 0x113118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110C50_0x110c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113118u; }
        if (ctx->pc != 0x113118u) { return; }
    }
    ctx->pc = 0x113118u;
label_113118:
    // 0x113118: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x113118u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11311c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x11311Cu;
    {
        const bool branch_taken_0x11311c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x113120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11311Cu;
            // 0x113120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11311c) {
            ctx->pc = 0x11312Cu;
            goto label_11312c;
        }
    }
    ctx->pc = 0x113124u;
    // 0x113124: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x113124u;
    {
        const bool branch_taken_0x113124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113124u;
            // 0x113128: 0x2402ffed  addiu       $v0, $zero, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113124) {
            ctx->pc = 0x113180u;
            goto label_113180;
        }
    }
    ctx->pc = 0x11312Cu;
label_11312c:
    // 0x11312c: 0xc044a56  jal         func_112958
    ctx->pc = 0x11312Cu;
    SET_GPR_U32(ctx, 31, 0x113134u);
    ctx->pc = 0x113130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11312Cu;
            // 0x113130: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112958u;
    goto label_112958;
    ctx->pc = 0x113134u;
label_113134:
    // 0x113134: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x113134u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113138: 0x6210006  bgez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x113138u;
    {
        const bool branch_taken_0x113138 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x11313Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113138u;
            // 0x11313c: 0x3c10005d  lui         $s0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113138) {
            ctx->pc = 0x113154u;
            goto label_113154;
        }
    }
    ctx->pc = 0x113140u;
    // 0x113140: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x113140u;
    SET_GPR_U32(ctx, 31, 0x113148u);
    ctx->pc = 0x113144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113140u;
            // 0x113144: 0x8e04e448  lw          $a0, -0x1BB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113148u; }
        if (ctx->pc != 0x113148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113148u; }
        if (ctx->pc != 0x113148u) { return; }
    }
    ctx->pc = 0x113148u;
label_113148:
    // 0x113148: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x113148u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x11314c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11314Cu;
    {
        const bool branch_taken_0x11314c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11314Cu;
            // 0x113150: 0x8e04e448  lw          $a0, -0x1BB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11314c) {
            ctx->pc = 0x113174u;
            goto label_113174;
        }
    }
    ctx->pc = 0x113154u;
label_113154:
    // 0x113154: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x113154u;
    SET_GPR_U32(ctx, 31, 0x11315Cu);
    ctx->pc = 0x113158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113154u;
            // 0x113158: 0x8e04e448  lw          $a0, -0x1BB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11315Cu; }
        if (ctx->pc != 0x11315Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11315Cu; }
        if (ctx->pc != 0x11315Cu) { return; }
    }
    ctx->pc = 0x11315Cu;
label_11315c:
    // 0x11315c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x11315cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x113160: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x113160u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x113164: 0x2463c940  addiu       $v1, $v1, -0x36C0
    ctx->pc = 0x113164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953280));
    // 0x113168: 0x8e04e448  lw          $a0, -0x1BB8($s0)
    ctx->pc = 0x113168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960200)));
    // 0x11316c: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x11316cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x113170: 0x38903  sra         $s1, $v1, 4
    ctx->pc = 0x113170u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 4));
label_113174:
    // 0x113174: 0xc0430e0  jal         func_10C380
    ctx->pc = 0x113174u;
    SET_GPR_U32(ctx, 31, 0x11317Cu);
    ctx->pc = 0x10C380u;
    if (runtime->hasFunction(0x10C380u)) {
        auto targetFn = runtime->lookupFunction(0x10C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11317Cu; }
        if (ctx->pc != 0x11317Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C380_0x10c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11317Cu; }
        if (ctx->pc != 0x11317Cu) { return; }
    }
    ctx->pc = 0x11317Cu;
label_11317c:
    // 0x11317c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x11317cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_113180:
    // 0x113180: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x113180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x113184: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x113184u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113188: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x113188u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11318c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11318cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113190: 0x3e00008  jr          $ra
    ctx->pc = 0x113190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113190u;
            // 0x113194: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x113198u;
    // 0x113198: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x113198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x11319c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x11319cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1131a0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1131a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1131a4: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x1131a4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
    // 0x1131a8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1131a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1131ac: 0x2692b440  addiu       $s2, $s4, -0x4BC0
    ctx->pc = 0x1131acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294947904));
    // 0x1131b0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1131b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1131b4: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1131b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1131b8: 0xc044372  jal         func_110DC8
    ctx->pc = 0x1131B8u;
    SET_GPR_U32(ctx, 31, 0x1131C0u);
    ctx->pc = 0x1131BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1131B8u;
            // 0x1131bc: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110DC8u;
    if (runtime->hasFunction(0x110DC8u)) {
        auto targetFn = runtime->lookupFunction(0x110DC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1131C0u; }
        if (ctx->pc != 0x1131C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110DC8_0x110dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1131C0u; }
        if (ctx->pc != 0x1131C0u) { return; }
    }
    ctx->pc = 0x1131C0u;
label_1131c0:
    // 0x1131c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1131c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1131c4: 0xc044492  jal         func_111248
    ctx->pc = 0x1131C4u;
    SET_GPR_U32(ctx, 31, 0x1131CCu);
    ctx->pc = 0x1131C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1131C4u;
            // 0x1131c8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111248u;
    if (runtime->hasFunction(0x111248u)) {
        auto targetFn = runtime->lookupFunction(0x111248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1131CCu; }
        if (ctx->pc != 0x1131CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111248_0x111248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1131CCu; }
        if (ctx->pc != 0x1131CCu) { return; }
    }
    ctx->pc = 0x1131CCu;
label_1131cc:
    // 0x1131cc: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1131ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1131d0: 0x8c62e43c  lw          $v0, -0x1BC4($v1)
    ctx->pc = 0x1131d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960188)));
    // 0x1131d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1131D4u;
    {
        const bool branch_taken_0x1131d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1131d4) {
            ctx->pc = 0x1131F0u;
            goto label_1131f0;
        }
    }
    ctx->pc = 0x1131DCu;
    // 0x1131dc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1131DCu;
    {
        const bool branch_taken_0x1131dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1131dc) {
            ctx->pc = 0x1131F0u;
            goto label_1131f0;
        }
    }
    ctx->pc = 0x1131E4u;
    // 0x1131e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1131e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1131e8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1131E8u;
    {
        const bool branch_taken_0x1131e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1131e8) {
            ctx->pc = 0x1131ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1131E8u;
            // 0x1131ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x113200u;
            goto label_113200;
        }
    }
    ctx->pc = 0x1131F0u;
label_1131f0:
    // 0x1131f0: 0xc04449e  jal         func_111278
    ctx->pc = 0x1131F0u;
    SET_GPR_U32(ctx, 31, 0x1131F8u);
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1131F8u; }
        if (ctx->pc != 0x1131F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1131F8u; }
        if (ctx->pc != 0x1131F8u) { return; }
    }
    ctx->pc = 0x1131F8u;
label_1131f8:
    // 0x1131f8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1131F8u;
    {
        const bool branch_taken_0x1131f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1131FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1131F8u;
            // 0x1131fc: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1131f8) {
            ctx->pc = 0x1132DCu;
            goto label_1132dc;
        }
    }
    ctx->pc = 0x113200u;
label_113200:
    // 0x113200: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x113200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x113204: 0x2442f068  addiu       $v0, $v0, -0xF98
    ctx->pc = 0x113204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963304));
    // 0x113208: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x113208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11320c: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x11320cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
    // 0x113210: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x113210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x113214: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x113214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x113218: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x113218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x11321c: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x11321Cu;
    SET_GPR_U32(ctx, 31, 0x113224u);
    ctx->pc = 0x113220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11321Cu;
            // 0x113220: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113224u; }
        if (ctx->pc != 0x113224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113224u; }
        if (ctx->pc != 0x113224u) { return; }
    }
    ctx->pc = 0x113224u;
label_113224:
    // 0x113224: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x113224u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113228: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x113228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11322c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x11322cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x113230: 0xae91b440  sw          $s1, -0x4BC0($s4)
    ctx->pc = 0x113230u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294947904), GPR_U32(ctx, 17));
    // 0x113234: 0x2453c080  addiu       $s3, $v0, -0x3F80
    ctx->pc = 0x113234u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951040));
    // 0x113238: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x113238u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x11323c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11323cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x113240: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x113240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x113244: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x113244u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x113248: 0x2484cb40  addiu       $a0, $a0, -0x34C0
    ctx->pc = 0x113248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953792));
    // 0x11324c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x11324cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113250: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x113250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x113254: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x113254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x113258: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x113258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11325c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x11325cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x113260: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x113260u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x113264: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x113264u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113268: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x113268u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11326c: 0xc044336  jal         func_110CD8
    ctx->pc = 0x11326Cu;
    SET_GPR_U32(ctx, 31, 0x113274u);
    ctx->pc = 0x113270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11326Cu;
            // 0x113270: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110CD8u;
    if (runtime->hasFunction(0x110CD8u)) {
        auto targetFn = runtime->lookupFunction(0x110CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113274u; }
        if (ctx->pc != 0x113274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110CD8_0x110cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113274u; }
        if (ctx->pc != 0x113274u) { return; }
    }
    ctx->pc = 0x113274u;
label_113274:
    // 0x113274: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x113274u;
    {
        const bool branch_taken_0x113274 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x113274) {
            ctx->pc = 0x113278u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x113274u;
            // 0x113278: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x113294u;
            goto label_113294;
        }
    }
    ctx->pc = 0x11327Cu;
    // 0x11327c: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x11327Cu;
    SET_GPR_U32(ctx, 31, 0x113284u);
    ctx->pc = 0x113280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11327Cu;
            // 0x113280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113284u; }
        if (ctx->pc != 0x113284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113284u; }
        if (ctx->pc != 0x113284u) { return; }
    }
    ctx->pc = 0x113284u;
label_113284:
    // 0x113284: 0xc04449e  jal         func_111278
    ctx->pc = 0x113284u;
    SET_GPR_U32(ctx, 31, 0x11328Cu);
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11328Cu; }
        if (ctx->pc != 0x11328Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11328Cu; }
        if (ctx->pc != 0x11328Cu) { return; }
    }
    ctx->pc = 0x11328Cu;
label_11328c:
    // 0x11328c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x11328Cu;
    {
        const bool branch_taken_0x11328c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11328Cu;
            // 0x113290: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11328c) {
            ctx->pc = 0x1132DCu;
            goto label_1132dc;
        }
    }
    ctx->pc = 0x113294u;
label_113294:
    // 0x113294: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x113294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x113298: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x113298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x11329c: 0xc04449e  jal         func_111278
    ctx->pc = 0x11329Cu;
    SET_GPR_U32(ctx, 31, 0x1132A4u);
    ctx->pc = 0x1132A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11329Cu;
            // 0x1132a0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1132A4u; }
        if (ctx->pc != 0x1132A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1132A4u; }
        if (ctx->pc != 0x1132A4u) { return; }
    }
    ctx->pc = 0x1132A4u;
label_1132a4:
    // 0x1132a4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1132A4u;
    {
        const bool branch_taken_0x1132a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1132a4) {
            ctx->pc = 0x1132BCu;
            goto label_1132bc;
        }
    }
    ctx->pc = 0x1132ACu;
    // 0x1132ac: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x1132ACu;
    SET_GPR_U32(ctx, 31, 0x1132B4u);
    ctx->pc = 0x1132B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1132ACu;
            // 0x1132b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1132B4u; }
        if (ctx->pc != 0x1132B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1132B4u; }
        if (ctx->pc != 0x1132B4u) { return; }
    }
    ctx->pc = 0x1132B4u;
label_1132b4:
    // 0x1132b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1132B4u;
    {
        const bool branch_taken_0x1132b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1132B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1132B4u;
            // 0x1132b8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132b4) {
            ctx->pc = 0x1132DCu;
            goto label_1132dc;
        }
    }
    ctx->pc = 0x1132BCu;
label_1132bc:
    // 0x1132bc: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x1132BCu;
    SET_GPR_U32(ctx, 31, 0x1132C4u);
    ctx->pc = 0x1132C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1132BCu;
            // 0x1132c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1132C4u; }
        if (ctx->pc != 0x1132C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1132C4u; }
        if (ctx->pc != 0x1132C4u) { return; }
    }
    ctx->pc = 0x1132C4u;
label_1132c4:
    // 0x1132c4: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x1132C4u;
    SET_GPR_U32(ctx, 31, 0x1132CCu);
    ctx->pc = 0x1132C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1132C4u;
            // 0x1132c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1132CCu; }
        if (ctx->pc != 0x1132CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1132CCu; }
        if (ctx->pc != 0x1132CCu) { return; }
    }
    ctx->pc = 0x1132CCu;
label_1132cc:
    // 0x1132cc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1132ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1132d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1132d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1132d4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1132d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1132d8: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1132d8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1132dc:
    // 0x1132dc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1132dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1132e0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1132e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1132e4: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1132e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1132e8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1132e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1132ec: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1132ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1132f0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1132f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1132f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1132F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1132F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1132F4u;
            // 0x1132f8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1132FCu;
    // 0x1132fc: 0x0  nop
    ctx->pc = 0x1132fcu;
    // NOP
    // 0x113300: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x113300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x113304: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x113304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x113308: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x113308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x11330c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11330cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113310: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x113310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x113314: 0x3c13006c  lui         $s3, 0x6C
    ctx->pc = 0x113314u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)108 << 16));
    // 0x113318: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x113318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x11331c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x11331cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x113320: 0xc044372  jal         func_110DC8
    ctx->pc = 0x113320u;
    SET_GPR_U32(ctx, 31, 0x113328u);
    ctx->pc = 0x113324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113320u;
            // 0x113324: 0x2672b440  addiu       $s2, $s3, -0x4BC0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294947904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110DC8u;
    if (runtime->hasFunction(0x110DC8u)) {
        auto targetFn = runtime->lookupFunction(0x110DC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113328u; }
        if (ctx->pc != 0x113328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110DC8_0x110dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113328u; }
        if (ctx->pc != 0x113328u) { return; }
    }
    ctx->pc = 0x113328u;
label_113328:
    // 0x113328: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x113328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11332c: 0xc044492  jal         func_111248
    ctx->pc = 0x11332Cu;
    SET_GPR_U32(ctx, 31, 0x113334u);
    ctx->pc = 0x113330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11332Cu;
            // 0x113330: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111248u;
    if (runtime->hasFunction(0x111248u)) {
        auto targetFn = runtime->lookupFunction(0x111248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113334u; }
        if (ctx->pc != 0x113334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111248_0x111248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113334u; }
        if (ctx->pc != 0x113334u) { return; }
    }
    ctx->pc = 0x113334u;
label_113334:
    // 0x113334: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x113334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x113338: 0x8c43e43c  lw          $v1, -0x1BC4($v0)
    ctx->pc = 0x113338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960188)));
    // 0x11333c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11333Cu;
    {
        const bool branch_taken_0x11333c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11333c) {
            ctx->pc = 0x113358u;
            goto label_113358;
        }
    }
    ctx->pc = 0x113344u;
    // 0x113344: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x113344u;
    {
        const bool branch_taken_0x113344 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x113344) {
            ctx->pc = 0x113358u;
            goto label_113358;
        }
    }
    ctx->pc = 0x11334Cu;
    // 0x11334c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x11334cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x113350: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x113350u;
    {
        const bool branch_taken_0x113350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113350) {
            ctx->pc = 0x113354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x113350u;
            // 0x113354: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x113368u;
            goto label_113368;
        }
    }
    ctx->pc = 0x113358u;
label_113358:
    // 0x113358: 0xc04449e  jal         func_111278
    ctx->pc = 0x113358u;
    SET_GPR_U32(ctx, 31, 0x113360u);
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113360u; }
        if (ctx->pc != 0x113360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113360u; }
        if (ctx->pc != 0x113360u) { return; }
    }
    ctx->pc = 0x113360u;
label_113360:
    // 0x113360: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x113360u;
    {
        const bool branch_taken_0x113360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113360u;
            // 0x113364: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113360) {
            ctx->pc = 0x113438u;
            goto label_113438;
        }
    }
    ctx->pc = 0x113368u;
label_113368:
    // 0x113368: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x113368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x11336c: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x11336cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
    // 0x113370: 0x2442f080  addiu       $v0, $v0, -0xF80
    ctx->pc = 0x113370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x113374: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x113374u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x113378: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x113378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11337c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x11337cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x113380: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x113380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x113384: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x113384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x113388: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x113388u;
    SET_GPR_U32(ctx, 31, 0x113390u);
    ctx->pc = 0x11338Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113388u;
            // 0x11338c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113390u; }
        if (ctx->pc != 0x113390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113390u; }
        if (ctx->pc != 0x113390u) { return; }
    }
    ctx->pc = 0x113390u;
label_113390:
    // 0x113390: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x113390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113394: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x113394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x113398: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x113398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x11339c: 0xae71b440  sw          $s1, -0x4BC0($s3)
    ctx->pc = 0x11339cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294947904), GPR_U32(ctx, 17));
    // 0x1133a0: 0x2450c080  addiu       $s0, $v0, -0x3F80
    ctx->pc = 0x1133a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951040));
    // 0x1133a4: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1133a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1133a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1133a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1133ac: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1133acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1133b0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1133b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1133b4: 0x2484cb40  addiu       $a0, $a0, -0x34C0
    ctx->pc = 0x1133b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953792));
    // 0x1133b8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1133b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1133bc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1133bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1133c0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1133c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1133c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1133c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1133c8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1133c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1133cc: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1133ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1133d0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1133d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1133d4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1133d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1133d8: 0xc044336  jal         func_110CD8
    ctx->pc = 0x1133D8u;
    SET_GPR_U32(ctx, 31, 0x1133E0u);
    ctx->pc = 0x1133DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1133D8u;
            // 0x1133dc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110CD8u;
    if (runtime->hasFunction(0x110CD8u)) {
        auto targetFn = runtime->lookupFunction(0x110CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1133E0u; }
        if (ctx->pc != 0x1133E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110CD8_0x110cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1133E0u; }
        if (ctx->pc != 0x1133E0u) { return; }
    }
    ctx->pc = 0x1133E0u;
label_1133e0:
    // 0x1133e0: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1133E0u;
    {
        const bool branch_taken_0x1133e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1133E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1133E0u;
            // 0x1133e4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1133e0) {
            ctx->pc = 0x113400u;
            goto label_113400;
        }
    }
    ctx->pc = 0x1133E8u;
    // 0x1133e8: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x1133E8u;
    SET_GPR_U32(ctx, 31, 0x1133F0u);
    ctx->pc = 0x1133ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1133E8u;
            // 0x1133ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1133F0u; }
        if (ctx->pc != 0x1133F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1133F0u; }
        if (ctx->pc != 0x1133F0u) { return; }
    }
    ctx->pc = 0x1133F0u;
label_1133f0:
    // 0x1133f0: 0xc04449e  jal         func_111278
    ctx->pc = 0x1133F0u;
    SET_GPR_U32(ctx, 31, 0x1133F8u);
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1133F8u; }
        if (ctx->pc != 0x1133F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1133F8u; }
        if (ctx->pc != 0x1133F8u) { return; }
    }
    ctx->pc = 0x1133F8u;
label_1133f8:
    // 0x1133f8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1133F8u;
    {
        const bool branch_taken_0x1133f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1133FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1133F8u;
            // 0x1133fc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1133f8) {
            ctx->pc = 0x113438u;
            goto label_113438;
        }
    }
    ctx->pc = 0x113400u;
label_113400:
    // 0x113400: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x113400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x113404: 0xc04449e  jal         func_111278
    ctx->pc = 0x113404u;
    SET_GPR_U32(ctx, 31, 0x11340Cu);
    ctx->pc = 0x113408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113404u;
            // 0x113408: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11340Cu; }
        if (ctx->pc != 0x11340Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11340Cu; }
        if (ctx->pc != 0x11340Cu) { return; }
    }
    ctx->pc = 0x11340Cu;
label_11340c:
    // 0x11340c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11340Cu;
    {
        const bool branch_taken_0x11340c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x11340c) {
            ctx->pc = 0x113424u;
            goto label_113424;
        }
    }
    ctx->pc = 0x113414u;
    // 0x113414: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x113414u;
    SET_GPR_U32(ctx, 31, 0x11341Cu);
    ctx->pc = 0x113418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113414u;
            // 0x113418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11341Cu; }
        if (ctx->pc != 0x11341Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11341Cu; }
        if (ctx->pc != 0x11341Cu) { return; }
    }
    ctx->pc = 0x11341Cu;
label_11341c:
    // 0x11341c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11341Cu;
    {
        const bool branch_taken_0x11341c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11341Cu;
            // 0x113420: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11341c) {
            ctx->pc = 0x113438u;
            goto label_113438;
        }
    }
    ctx->pc = 0x113424u;
label_113424:
    // 0x113424: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x113424u;
    SET_GPR_U32(ctx, 31, 0x11342Cu);
    ctx->pc = 0x113428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113424u;
            // 0x113428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11342Cu; }
        if (ctx->pc != 0x11342Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11342Cu; }
        if (ctx->pc != 0x11342Cu) { return; }
    }
    ctx->pc = 0x11342Cu;
label_11342c:
    // 0x11342c: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x11342Cu;
    SET_GPR_U32(ctx, 31, 0x113434u);
    ctx->pc = 0x113430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11342Cu;
            // 0x113430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113434u; }
        if (ctx->pc != 0x113434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113434u; }
        if (ctx->pc != 0x113434u) { return; }
    }
    ctx->pc = 0x113434u;
label_113434:
    // 0x113434: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x113434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_113438:
    // 0x113438: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x113438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11343c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x11343cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x113440: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x113440u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x113444: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x113444u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x113448: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x113448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11344c: 0x3e00008  jr          $ra
    ctx->pc = 0x11344Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11344Cu;
            // 0x113450: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x113454u;
    // 0x113454: 0x0  nop
    ctx->pc = 0x113454u;
    // NOP
    // 0x113458: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x113458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x11345c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x11345cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x113460: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x113460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x113464: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x113464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113468: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x113468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x11346c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x11346cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113470: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x113470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x113474: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x113474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x113478: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x113478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x11347c: 0x3c17006c  lui         $s7, 0x6C
    ctx->pc = 0x11347cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)108 << 16));
    // 0x113480: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x113480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x113484: 0x26f2b440  addiu       $s2, $s7, -0x4BC0
    ctx->pc = 0x113484u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294947904));
    // 0x113488: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x113488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x11348c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x11348cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x113490: 0xc044492  jal         func_111248
    ctx->pc = 0x113490u;
    SET_GPR_U32(ctx, 31, 0x113498u);
    ctx->pc = 0x113494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113490u;
            // 0x113494: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111248u;
    if (runtime->hasFunction(0x111248u)) {
        auto targetFn = runtime->lookupFunction(0x111248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113498u; }
        if (ctx->pc != 0x113498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111248_0x111248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113498u; }
        if (ctx->pc != 0x113498u) { return; }
    }
    ctx->pc = 0x113498u;
label_113498:
    // 0x113498: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x113498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x11349c: 0x8c43e43c  lw          $v1, -0x1BC4($v0)
    ctx->pc = 0x11349cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960188)));
    // 0x1134a0: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1134A0u;
    {
        const bool branch_taken_0x1134a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1134a0) {
            ctx->pc = 0x1134A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1134A0u;
            // 0x1134a4: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1134B4u;
            goto label_1134b4;
        }
    }
    ctx->pc = 0x1134A8u;
    // 0x1134a8: 0xc0444dc  jal         func_111370
    ctx->pc = 0x1134A8u;
    SET_GPR_U32(ctx, 31, 0x1134B0u);
    ctx->pc = 0x111370u;
    if (runtime->hasFunction(0x111370u)) {
        auto targetFn = runtime->lookupFunction(0x111370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1134B0u; }
        if (ctx->pc != 0x1134B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111370_0x111370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1134B0u; }
        if (ctx->pc != 0x1134B0u) { return; }
    }
    ctx->pc = 0x1134B0u;
label_1134b0:
    // 0x1134b0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1134b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1134b4:
    // 0x1134b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1134b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1134b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1134b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1134bc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1134BCu;
    {
        const bool branch_taken_0x1134bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1134C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1134BCu;
            // 0x1134c0: 0xa2420010  sb          $v0, 0x10($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1134bc) {
            ctx->pc = 0x113500u;
            goto label_113500;
        }
    }
    ctx->pc = 0x1134C4u;
    // 0x1134c4: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1134c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1134c8: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1134c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1134cc: 0x3c15006c  lui         $s5, 0x6C
    ctx->pc = 0x1134ccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
    // 0x1134d0: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x1134d0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
    // 0x1134d4: 0x0  nop
    ctx->pc = 0x1134d4u;
    // NOP
label_1134d8:
    // 0x1134d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1134d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1134dc: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x1134dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1134e0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1134E0u;
    {
        const bool branch_taken_0x1134e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1134E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1134E0u;
            // 0x1134e4: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1134e0) {
            ctx->pc = 0x113510u;
            goto label_113510;
        }
    }
    ctx->pc = 0x1134E8u;
    // 0x1134e8: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x1134e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1134ec: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1134ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1134f0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1134F0u;
    {
        const bool branch_taken_0x1134f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1134F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1134F0u;
            // 0x1134f4: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1134f0) {
            ctx->pc = 0x1134D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1134d8;
        }
    }
    ctx->pc = 0x1134F8u;
    // 0x1134f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1134F8u;
    {
        const bool branch_taken_0x1134f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1134FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1134F8u;
            // 0x1134fc: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1134f8) {
            ctx->pc = 0x113514u;
            goto label_113514;
        }
    }
    ctx->pc = 0x113500u;
label_113500:
    // 0x113500: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x113500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x113504: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x113504u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x113508: 0x3c15006c  lui         $s5, 0x6C
    ctx->pc = 0x113508u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
    // 0x11350c: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x11350cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
label_113510:
    // 0x113510: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x113510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_113514:
    // 0x113514: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x113514u;
    {
        const bool branch_taken_0x113514 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x113514) {
            ctx->pc = 0x113518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x113514u;
            // 0x113518: 0xae56000c  sw          $s6, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x113528u;
            goto label_113528;
        }
    }
    ctx->pc = 0x11351Cu;
    // 0x11351c: 0xa240040f  sb          $zero, 0x40F($s2)
    ctx->pc = 0x11351cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1039), (uint8_t)GPR_U32(ctx, 0));
    // 0x113520: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x113520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x113524: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x113524u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_113528:
    // 0x113528: 0x24a3f098  addiu       $v1, $a1, -0xF68
    ctx->pc = 0x113528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963352));
    // 0x11352c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11352cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113530: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x113530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x113534: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x113534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x113538: 0x2694c080  addiu       $s4, $s4, -0x3F80
    ctx->pc = 0x113538u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951040));
    // 0x11353c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x11353cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x113540: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x113540u;
    SET_GPR_U32(ctx, 31, 0x113548u);
    ctx->pc = 0x113544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113540u;
            // 0x113544: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113548u; }
        if (ctx->pc != 0x113548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113548u; }
        if (ctx->pc != 0x113548u) { return; }
    }
    ctx->pc = 0x113548u;
label_113548:
    // 0x113548: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x113548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11354c: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x11354cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x113550: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x113550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x113554: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x113554u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x113558: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x113558u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x11355c: 0x26a4cb40  addiu       $a0, $s5, -0x34C0
    ctx->pc = 0x11355cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294953792));
    // 0x113560: 0x26e7b440  addiu       $a3, $s7, -0x4BC0
    ctx->pc = 0x113560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294947904));
    // 0x113564: 0x26080011  addiu       $t0, $s0, 0x11
    ctx->pc = 0x113564u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x113568: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x113568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11356c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x11356cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x113570: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x113570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x113574: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x113574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113578: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x113578u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11357c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x11357cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x113580: 0xc044336  jal         func_110CD8
    ctx->pc = 0x113580u;
    SET_GPR_U32(ctx, 31, 0x113588u);
    ctx->pc = 0x113584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113580u;
            // 0x113584: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110CD8u;
    if (runtime->hasFunction(0x110CD8u)) {
        auto targetFn = runtime->lookupFunction(0x110CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113588u; }
        if (ctx->pc != 0x113588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110CD8_0x110cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113588u; }
        if (ctx->pc != 0x113588u) { return; }
    }
    ctx->pc = 0x113588u;
label_113588:
    // 0x113588: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x113588u;
    {
        const bool branch_taken_0x113588 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11358Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113588u;
            // 0x11358c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113588) {
            ctx->pc = 0x1135A8u;
            goto label_1135a8;
        }
    }
    ctx->pc = 0x113590u;
    // 0x113590: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x113590u;
    SET_GPR_U32(ctx, 31, 0x113598u);
    ctx->pc = 0x113594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113590u;
            // 0x113594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113598u; }
        if (ctx->pc != 0x113598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113598u; }
        if (ctx->pc != 0x113598u) { return; }
    }
    ctx->pc = 0x113598u;
label_113598:
    // 0x113598: 0xc04449e  jal         func_111278
    ctx->pc = 0x113598u;
    SET_GPR_U32(ctx, 31, 0x1135A0u);
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1135A0u; }
        if (ctx->pc != 0x1135A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1135A0u; }
        if (ctx->pc != 0x1135A0u) { return; }
    }
    ctx->pc = 0x1135A0u;
label_1135a0:
    // 0x1135a0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1135A0u;
    {
        const bool branch_taken_0x1135a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1135A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1135A0u;
            // 0x1135a4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1135a0) {
            ctx->pc = 0x1135E0u;
            goto label_1135e0;
        }
    }
    ctx->pc = 0x1135A8u;
label_1135a8:
    // 0x1135a8: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1135a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1135ac: 0xc04449e  jal         func_111278
    ctx->pc = 0x1135ACu;
    SET_GPR_U32(ctx, 31, 0x1135B4u);
    ctx->pc = 0x1135B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1135ACu;
            // 0x1135b0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1135B4u; }
        if (ctx->pc != 0x1135B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1135B4u; }
        if (ctx->pc != 0x1135B4u) { return; }
    }
    ctx->pc = 0x1135B4u;
label_1135b4:
    // 0x1135b4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1135B4u;
    {
        const bool branch_taken_0x1135b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1135b4) {
            ctx->pc = 0x1135CCu;
            goto label_1135cc;
        }
    }
    ctx->pc = 0x1135BCu;
    // 0x1135bc: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x1135BCu;
    SET_GPR_U32(ctx, 31, 0x1135C4u);
    ctx->pc = 0x1135C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1135BCu;
            // 0x1135c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1135C4u; }
        if (ctx->pc != 0x1135C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1135C4u; }
        if (ctx->pc != 0x1135C4u) { return; }
    }
    ctx->pc = 0x1135C4u;
label_1135c4:
    // 0x1135c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1135C4u;
    {
        const bool branch_taken_0x1135c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1135C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1135C4u;
            // 0x1135c8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1135c4) {
            ctx->pc = 0x1135E0u;
            goto label_1135e0;
        }
    }
    ctx->pc = 0x1135CCu;
label_1135cc:
    // 0x1135cc: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x1135CCu;
    SET_GPR_U32(ctx, 31, 0x1135D4u);
    ctx->pc = 0x1135D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1135CCu;
            // 0x1135d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1135D4u; }
        if (ctx->pc != 0x1135D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1135D4u; }
        if (ctx->pc != 0x1135D4u) { return; }
    }
    ctx->pc = 0x1135D4u;
label_1135d4:
    // 0x1135d4: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x1135D4u;
    SET_GPR_U32(ctx, 31, 0x1135DCu);
    ctx->pc = 0x1135D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1135D4u;
            // 0x1135d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1135DCu; }
        if (ctx->pc != 0x1135DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1135DCu; }
        if (ctx->pc != 0x1135DCu) { return; }
    }
    ctx->pc = 0x1135DCu;
label_1135dc:
    // 0x1135dc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1135dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1135e0:
    // 0x1135e0: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1135e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1135e4: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1135e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1135e8: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1135e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1135ec: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1135ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1135f0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1135f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1135f4: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1135f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1135f8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1135f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1135fc: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1135fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x113600: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x113600u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113604: 0x3e00008  jr          $ra
    ctx->pc = 0x113604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113604u;
            // 0x113608: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11360Cu;
    // 0x11360c: 0x0  nop
    ctx->pc = 0x11360cu;
    // NOP
    // 0x113610: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x113610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x113614: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x113614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x113618: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x113618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x11361c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11361cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113620: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x113620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x113624: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x113624u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113628: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x113628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x11362c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11362cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113630: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x113630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x113634: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x113634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x113638: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x113638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x11363c: 0x3c1e006c  lui         $fp, 0x6C
    ctx->pc = 0x11363cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)108 << 16));
    // 0x113640: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x113640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x113644: 0x27d3b440  addiu       $s3, $fp, -0x4BC0
    ctx->pc = 0x113644u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 4294947904));
    // 0x113648: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x113648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x11364c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x11364cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x113650: 0xc044492  jal         func_111248
    ctx->pc = 0x113650u;
    SET_GPR_U32(ctx, 31, 0x113658u);
    ctx->pc = 0x113654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113650u;
            // 0x113654: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111248u;
    if (runtime->hasFunction(0x111248u)) {
        auto targetFn = runtime->lookupFunction(0x111248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113658u; }
        if (ctx->pc != 0x113658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111248_0x111248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113658u; }
        if (ctx->pc != 0x113658u) { return; }
    }
    ctx->pc = 0x113658u;
label_113658:
    // 0x113658: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x113658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x11365c: 0x8c62e43c  lw          $v0, -0x1BC4($v1)
    ctx->pc = 0x11365cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960188)));
    // 0x113660: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x113660u;
    {
        const bool branch_taken_0x113660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113660) {
            ctx->pc = 0x113664u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x113660u;
            // 0x113664: 0x92420000  lbu         $v0, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x113674u;
            goto label_113674;
        }
    }
    ctx->pc = 0x113668u;
    // 0x113668: 0xc0444dc  jal         func_111370
    ctx->pc = 0x113668u;
    SET_GPR_U32(ctx, 31, 0x113670u);
    ctx->pc = 0x111370u;
    if (runtime->hasFunction(0x111370u)) {
        auto targetFn = runtime->lookupFunction(0x111370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113670u; }
        if (ctx->pc != 0x113670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111370_0x111370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113670u; }
        if (ctx->pc != 0x113670u) { return; }
    }
    ctx->pc = 0x113670u;
label_113670:
    // 0x113670: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x113670u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_113674:
    // 0x113674: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x113674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113678: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x113678u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11367c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x11367Cu;
    {
        const bool branch_taken_0x11367c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11367Cu;
            // 0x113680: 0xa2620050  sb          $v0, 0x50($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 80), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11367c) {
            ctx->pc = 0x1136C0u;
            goto label_1136c0;
        }
    }
    ctx->pc = 0x113684u;
    // 0x113684: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x113684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x113688: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x113688u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11368c: 0x3c16006c  lui         $s6, 0x6C
    ctx->pc = 0x11368cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)108 << 16));
    // 0x113690: 0x3c15006c  lui         $s5, 0x6C
    ctx->pc = 0x113690u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
    // 0x113694: 0x0  nop
    ctx->pc = 0x113694u;
    // NOP
label_113698:
    // 0x113698: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x113698u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x11369c: 0x2a220400  slti        $v0, $s1, 0x400
    ctx->pc = 0x11369cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1136a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1136A0u;
    {
        const bool branch_taken_0x1136a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1136A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1136A0u;
            // 0x1136a4: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1136a0) {
            ctx->pc = 0x1136D0u;
            goto label_1136d0;
        }
    }
    ctx->pc = 0x1136A8u;
    // 0x1136a8: 0x2712021  addu        $a0, $s3, $s1
    ctx->pc = 0x1136a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1136ac: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1136acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1136b0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1136B0u;
    {
        const bool branch_taken_0x1136b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1136B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1136B0u;
            // 0x1136b4: 0xa0830050  sb          $v1, 0x50($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1136b0) {
            ctx->pc = 0x113698u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_113698;
        }
    }
    ctx->pc = 0x1136B8u;
    // 0x1136b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1136B8u;
    {
        const bool branch_taken_0x1136b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1136BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1136B8u;
            // 0x1136bc: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1136b8) {
            ctx->pc = 0x1136D4u;
            goto label_1136d4;
        }
    }
    ctx->pc = 0x1136C0u;
label_1136c0:
    // 0x1136c0: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1136c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1136c4: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x1136c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1136c8: 0x3c16006c  lui         $s6, 0x6C
    ctx->pc = 0x1136c8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)108 << 16));
    // 0x1136cc: 0x3c15006c  lui         $s5, 0x6C
    ctx->pc = 0x1136ccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
label_1136d0:
    // 0x1136d0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1136d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1136d4:
    // 0x1136d4: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1136D4u;
    {
        const bool branch_taken_0x1136d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1136D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1136D4u;
            // 0x1136d8: 0x24a3f0b0  addiu       $v1, $a1, -0xF50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1136d4) {
            ctx->pc = 0x1136E4u;
            goto label_1136e4;
        }
    }
    ctx->pc = 0x1136DCu;
    // 0x1136dc: 0xa260044f  sb          $zero, 0x44F($s3)
    ctx->pc = 0x1136dcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1103), (uint8_t)GPR_U32(ctx, 0));
    // 0x1136e0: 0x241103ff  addiu       $s1, $zero, 0x3FF
    ctx->pc = 0x1136e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_1136e4:
    // 0x1136e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1136e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1136e8: 0x6a040007  ldl         $a0, 0x7($s0)
    ctx->pc = 0x1136e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1136ec: 0x6e040000  ldr         $a0, 0x0($s0)
    ctx->pc = 0x1136ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1136f0: 0x6a05000f  ldl         $a1, 0xF($s0)
    ctx->pc = 0x1136f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1136f4: 0x6e050008  ldr         $a1, 0x8($s0)
    ctx->pc = 0x1136f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1136f8: 0x6a060017  ldl         $a2, 0x17($s0)
    ctx->pc = 0x1136f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1136fc: 0x6e060010  ldr         $a2, 0x10($s0)
    ctx->pc = 0x1136fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x113700: 0x6a07001f  ldl         $a3, 0x1F($s0)
    ctx->pc = 0x113700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x113704: 0x6e070018  ldr         $a3, 0x18($s0)
    ctx->pc = 0x113704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x113708: 0xb2640017  sdl         $a0, 0x17($s3)
    ctx->pc = 0x113708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11370c: 0xb6640010  sdr         $a0, 0x10($s3)
    ctx->pc = 0x11370cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113710: 0xb265001f  sdl         $a1, 0x1F($s3)
    ctx->pc = 0x113710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113714: 0xb6650018  sdr         $a1, 0x18($s3)
    ctx->pc = 0x113714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113718: 0xb2660027  sdl         $a2, 0x27($s3)
    ctx->pc = 0x113718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11371c: 0xb6660020  sdr         $a2, 0x20($s3)
    ctx->pc = 0x11371cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113720: 0xb267002f  sdl         $a3, 0x2F($s3)
    ctx->pc = 0x113720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113724: 0xb6670028  sdr         $a3, 0x28($s3)
    ctx->pc = 0x113724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113728: 0x6a040027  ldl         $a0, 0x27($s0)
    ctx->pc = 0x113728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x11372c: 0x6e040020  ldr         $a0, 0x20($s0)
    ctx->pc = 0x11372cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x113730: 0x6a05002f  ldl         $a1, 0x2F($s0)
    ctx->pc = 0x113730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x113734: 0x6e050028  ldr         $a1, 0x28($s0)
    ctx->pc = 0x113734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x113738: 0x6a060037  ldl         $a2, 0x37($s0)
    ctx->pc = 0x113738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11373c: 0x6e060030  ldr         $a2, 0x30($s0)
    ctx->pc = 0x11373cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x113740: 0x6a07003f  ldl         $a3, 0x3F($s0)
    ctx->pc = 0x113740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x113744: 0x6e070038  ldr         $a3, 0x38($s0)
    ctx->pc = 0x113744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x113748: 0xb2640037  sdl         $a0, 0x37($s3)
    ctx->pc = 0x113748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11374c: 0xb6640030  sdr         $a0, 0x30($s3)
    ctx->pc = 0x11374cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113750: 0xb265003f  sdl         $a1, 0x3F($s3)
    ctx->pc = 0x113750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113754: 0xb6650038  sdr         $a1, 0x38($s3)
    ctx->pc = 0x113754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113758: 0xb2660047  sdl         $a2, 0x47($s3)
    ctx->pc = 0x113758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11375c: 0xb6660040  sdr         $a2, 0x40($s3)
    ctx->pc = 0x11375cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113760: 0xb267004f  sdl         $a3, 0x4F($s3)
    ctx->pc = 0x113760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113764: 0xb6670048  sdr         $a3, 0x48($s3)
    ctx->pc = 0x113764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113768: 0x26b5c080  addiu       $s5, $s5, -0x3F80
    ctx->pc = 0x113768u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951040));
    // 0x11376c: 0xae77000c  sw          $s7, 0xC($s3)
    ctx->pc = 0x11376cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 23));
    // 0x113770: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x113770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x113774: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x113774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x113778: 0x27d0b440  addiu       $s0, $fp, -0x4BC0
    ctx->pc = 0x113778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294947904));
    // 0x11377c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x11377cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x113780: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x113780u;
    SET_GPR_U32(ctx, 31, 0x113788u);
    ctx->pc = 0x113784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113780u;
            // 0x113784: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113788u; }
        if (ctx->pc != 0x113788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113788u; }
        if (ctx->pc != 0x113788u) { return; }
    }
    ctx->pc = 0x113788u;
label_113788:
    // 0x113788: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x113788u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11378c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11378cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113790: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x113790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x113794: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x113794u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
    // 0x113798: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x113798u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x11379c: 0x24050450  addiu       $a1, $zero, 0x450
    ctx->pc = 0x11379cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1104));
    // 0x1137a0: 0xc043e7e  jal         func_10F9F8
    ctx->pc = 0x1137A0u;
    SET_GPR_U32(ctx, 31, 0x1137A8u);
    ctx->pc = 0x1137A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1137A0u;
            // 0x1137a4: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F9F8u;
    if (runtime->hasFunction(0x10F9F8u)) {
        auto targetFn = runtime->lookupFunction(0x10F9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1137A8u; }
        if (ctx->pc != 0x1137A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F9F8_0x10f9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1137A8u; }
        if (ctx->pc != 0x1137A8u) { return; }
    }
    ctx->pc = 0x1137A8u;
label_1137a8:
    // 0x1137a8: 0x26c4cb40  addiu       $a0, $s6, -0x34C0
    ctx->pc = 0x1137a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953792));
    // 0x1137ac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1137acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1137b0: 0x26280051  addiu       $t0, $s1, 0x51
    ctx->pc = 0x1137b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 81));
    // 0x1137b4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1137b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1137b8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1137b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1137bc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1137bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1137c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1137c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1137c4: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x1137c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1137c8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1137c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1137cc: 0xc044336  jal         func_110CD8
    ctx->pc = 0x1137CCu;
    SET_GPR_U32(ctx, 31, 0x1137D4u);
    ctx->pc = 0x1137D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1137CCu;
            // 0x1137d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110CD8u;
    if (runtime->hasFunction(0x110CD8u)) {
        auto targetFn = runtime->lookupFunction(0x110CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1137D4u; }
        if (ctx->pc != 0x1137D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110CD8_0x110cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1137D4u; }
        if (ctx->pc != 0x1137D4u) { return; }
    }
    ctx->pc = 0x1137D4u;
label_1137d4:
    // 0x1137d4: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1137D4u;
    {
        const bool branch_taken_0x1137d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1137D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1137D4u;
            // 0x1137d8: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1137d4) {
            ctx->pc = 0x1137F4u;
            goto label_1137f4;
        }
    }
    ctx->pc = 0x1137DCu;
    // 0x1137dc: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x1137DCu;
    SET_GPR_U32(ctx, 31, 0x1137E4u);
    ctx->pc = 0x1137E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1137DCu;
            // 0x1137e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1137E4u; }
        if (ctx->pc != 0x1137E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1137E4u; }
        if (ctx->pc != 0x1137E4u) { return; }
    }
    ctx->pc = 0x1137E4u;
label_1137e4:
    // 0x1137e4: 0xc04449e  jal         func_111278
    ctx->pc = 0x1137E4u;
    SET_GPR_U32(ctx, 31, 0x1137ECu);
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1137ECu; }
        if (ctx->pc != 0x1137ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1137ECu; }
        if (ctx->pc != 0x1137ECu) { return; }
    }
    ctx->pc = 0x1137ECu;
label_1137ec:
    // 0x1137ec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1137ECu;
    {
        const bool branch_taken_0x1137ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1137F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1137ECu;
            // 0x1137f0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1137ec) {
            ctx->pc = 0x11382Cu;
            goto label_11382c;
        }
    }
    ctx->pc = 0x1137F4u;
label_1137f4:
    // 0x1137f4: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x1137f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x1137f8: 0xc04449e  jal         func_111278
    ctx->pc = 0x1137F8u;
    SET_GPR_U32(ctx, 31, 0x113800u);
    ctx->pc = 0x1137FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1137F8u;
            // 0x1137fc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113800u; }
        if (ctx->pc != 0x113800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113800u; }
        if (ctx->pc != 0x113800u) { return; }
    }
    ctx->pc = 0x113800u;
label_113800:
    // 0x113800: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x113800u;
    {
        const bool branch_taken_0x113800 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x113800) {
            ctx->pc = 0x113818u;
            goto label_113818;
        }
    }
    ctx->pc = 0x113808u;
    // 0x113808: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x113808u;
    SET_GPR_U32(ctx, 31, 0x113810u);
    ctx->pc = 0x11380Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113808u;
            // 0x11380c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113810u; }
        if (ctx->pc != 0x113810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113810u; }
        if (ctx->pc != 0x113810u) { return; }
    }
    ctx->pc = 0x113810u;
label_113810:
    // 0x113810: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x113810u;
    {
        const bool branch_taken_0x113810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113810u;
            // 0x113814: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113810) {
            ctx->pc = 0x11382Cu;
            goto label_11382c;
        }
    }
    ctx->pc = 0x113818u;
label_113818:
    // 0x113818: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x113818u;
    SET_GPR_U32(ctx, 31, 0x113820u);
    ctx->pc = 0x11381Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113818u;
            // 0x11381c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113820u; }
        if (ctx->pc != 0x113820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113820u; }
        if (ctx->pc != 0x113820u) { return; }
    }
    ctx->pc = 0x113820u;
label_113820:
    // 0x113820: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x113820u;
    SET_GPR_U32(ctx, 31, 0x113828u);
    ctx->pc = 0x113824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113820u;
            // 0x113824: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113828u; }
        if (ctx->pc != 0x113828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113828u; }
        if (ctx->pc != 0x113828u) { return; }
    }
    ctx->pc = 0x113828u;
label_113828:
    // 0x113828: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x113828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11382c:
    // 0x11382c: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x11382cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x113830: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x113830u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x113834: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x113834u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x113838: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x113838u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11383c: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x11383cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x113840: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x113840u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x113844: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x113844u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x113848: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x113848u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11384c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x11384cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x113850: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x113850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113854: 0x3e00008  jr          $ra
    ctx->pc = 0x113854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113854u;
            // 0x113858: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11385Cu;
    // 0x11385c: 0x0  nop
    ctx->pc = 0x11385cu;
    // NOP
    // 0x113860: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x113860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x113864: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x113864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x113868: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x113868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x11386c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11386cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113870: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x113870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x113874: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x113874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113878: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x113878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x11387c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x11387cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x113880: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x113880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x113884: 0x3c16006c  lui         $s6, 0x6C
    ctx->pc = 0x113884u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)108 << 16));
    // 0x113888: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x113888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x11388c: 0x26d2b440  addiu       $s2, $s6, -0x4BC0
    ctx->pc = 0x11388cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294947904));
    // 0x113890: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x113890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x113894: 0xc044492  jal         func_111248
    ctx->pc = 0x113894u;
    SET_GPR_U32(ctx, 31, 0x11389Cu);
    ctx->pc = 0x113898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113894u;
            // 0x113898: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111248u;
    if (runtime->hasFunction(0x111248u)) {
        auto targetFn = runtime->lookupFunction(0x111248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11389Cu; }
        if (ctx->pc != 0x11389Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111248_0x111248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11389Cu; }
        if (ctx->pc != 0x11389Cu) { return; }
    }
    ctx->pc = 0x11389Cu;
label_11389c:
    // 0x11389c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x11389cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1138a0: 0x8c43e43c  lw          $v1, -0x1BC4($v0)
    ctx->pc = 0x1138a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960188)));
    // 0x1138a4: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1138A4u;
    {
        const bool branch_taken_0x1138a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1138a4) {
            ctx->pc = 0x1138A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1138A4u;
            // 0x1138a8: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1138B8u;
            goto label_1138b8;
        }
    }
    ctx->pc = 0x1138ACu;
    // 0x1138ac: 0xc0444dc  jal         func_111370
    ctx->pc = 0x1138ACu;
    SET_GPR_U32(ctx, 31, 0x1138B4u);
    ctx->pc = 0x111370u;
    if (runtime->hasFunction(0x111370u)) {
        auto targetFn = runtime->lookupFunction(0x111370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1138B4u; }
        if (ctx->pc != 0x1138B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111370_0x111370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1138B4u; }
        if (ctx->pc != 0x1138B4u) { return; }
    }
    ctx->pc = 0x1138B4u;
label_1138b4:
    // 0x1138b4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1138b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1138b8:
    // 0x1138b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1138b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1138bc: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1138bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1138c0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1138C0u;
    {
        const bool branch_taken_0x1138c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1138C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1138C0u;
            // 0x1138c4: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1138c0) {
            ctx->pc = 0x11390Cu;
            goto label_11390c;
        }
    }
    ctx->pc = 0x1138C8u;
    // 0x1138c8: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x1138c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
    // 0x1138cc: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1138ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1138d0: 0x3c15006c  lui         $s5, 0x6C
    ctx->pc = 0x1138d0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
    // 0x1138d4: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x1138d4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
    // 0x1138d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1138d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1138dc: 0x0  nop
    ctx->pc = 0x1138dcu;
    // NOP
label_1138e0:
    // 0x1138e0: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1138e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1138e4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1138E4u;
    {
        const bool branch_taken_0x1138e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1138E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1138E4u;
            // 0x1138e8: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1138e4) {
            ctx->pc = 0x11391Cu;
            goto label_11391c;
        }
    }
    ctx->pc = 0x1138ECu;
    // 0x1138ec: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1138ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1138f0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1138f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1138f4: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1138f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1138f8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1138f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1138fc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1138FCu;
    {
        const bool branch_taken_0x1138fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1138fc) {
            ctx->pc = 0x113900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1138FCu;
            // 0x113900: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1138E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1138e0;
        }
    }
    ctx->pc = 0x113904u;
    // 0x113904: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x113904u;
    {
        const bool branch_taken_0x113904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113904u;
            // 0x113908: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113904) {
            ctx->pc = 0x113920u;
            goto label_113920;
        }
    }
    ctx->pc = 0x11390Cu;
label_11390c:
    // 0x11390c: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x11390cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
    // 0x113910: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x113910u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x113914: 0x3c15006c  lui         $s5, 0x6C
    ctx->pc = 0x113914u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
    // 0x113918: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x113918u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
label_11391c:
    // 0x11391c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x11391cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_113920:
    // 0x113920: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x113920u;
    {
        const bool branch_taken_0x113920 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x113920) {
            ctx->pc = 0x113924u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x113920u;
            // 0x113924: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x113928u;
            goto label_113928;
        }
    }
    ctx->pc = 0x113928u;
label_113928:
    // 0x113928: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x113928u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11392c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11392cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113930: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x113930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x113934: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x113934u;
    {
        const bool branch_taken_0x113934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113934u;
            // 0x113938: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113934) {
            ctx->pc = 0x11396Cu;
            goto label_11396c;
        }
    }
    ctx->pc = 0x11393Cu;
    // 0x11393c: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x11393cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x113940: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x113940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x113944: 0x0  nop
    ctx->pc = 0x113944u;
    // NOP
label_113948:
    // 0x113948: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x113948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x11394c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11394Cu;
    {
        const bool branch_taken_0x11394c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11394Cu;
            // 0x113950: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11394c) {
            ctx->pc = 0x11396Cu;
            goto label_11396c;
        }
    }
    ctx->pc = 0x113954u;
    // 0x113954: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x113954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x113958: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x113958u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11395c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11395cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x113960: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x113960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x113964: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x113964u;
    {
        const bool branch_taken_0x113964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x113964) {
            ctx->pc = 0x113968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x113964u;
            // 0x113968: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x113948u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_113948;
        }
    }
    ctx->pc = 0x11396Cu;
label_11396c:
    // 0x11396c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x11396cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x113970: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x113970u;
    {
        const bool branch_taken_0x113970 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x113970) {
            ctx->pc = 0x113974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x113970u;
            // 0x113974: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x113978u;
            goto label_113978;
        }
    }
    ctx->pc = 0x113978u;
label_113978:
    // 0x113978: 0x24e3f0c8  addiu       $v1, $a3, -0xF38
    ctx->pc = 0x113978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963400));
    // 0x11397c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11397cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113980: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x113980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x113984: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x113984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x113988: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x113988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x11398c: 0x26d0b440  addiu       $s0, $s6, -0x4BC0
    ctx->pc = 0x11398cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294947904));
    // 0x113990: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x113990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x113994: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x113994u;
    SET_GPR_U32(ctx, 31, 0x11399Cu);
    ctx->pc = 0x113998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113994u;
            // 0x113998: 0x2694c080  addiu       $s4, $s4, -0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11399Cu; }
        if (ctx->pc != 0x11399Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11399Cu; }
        if (ctx->pc != 0x11399Cu) { return; }
    }
    ctx->pc = 0x11399Cu;
label_11399c:
    // 0x11399c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11399cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1139a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1139a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1139a8: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1139a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1139ac: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1139acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1139b0: 0x2405080c  addiu       $a1, $zero, 0x80C
    ctx->pc = 0x1139b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x1139b4: 0xc043e7e  jal         func_10F9F8
    ctx->pc = 0x1139B4u;
    SET_GPR_U32(ctx, 31, 0x1139BCu);
    ctx->pc = 0x1139B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1139B4u;
            // 0x1139b8: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F9F8u;
    if (runtime->hasFunction(0x10F9F8u)) {
        auto targetFn = runtime->lookupFunction(0x10F9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1139BCu; }
        if (ctx->pc != 0x1139BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F9F8_0x10f9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1139BCu; }
        if (ctx->pc != 0x1139BCu) { return; }
    }
    ctx->pc = 0x1139BCu;
label_1139bc:
    // 0x1139bc: 0x26a4cb40  addiu       $a0, $s5, -0x34C0
    ctx->pc = 0x1139bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294953792));
    // 0x1139c0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1139c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139c4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1139c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1139c8: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1139c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1139cc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1139ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1139d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1139d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139d4: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x1139d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x1139d8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1139d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139dc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1139dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1139e0: 0xc044336  jal         func_110CD8
    ctx->pc = 0x1139E0u;
    SET_GPR_U32(ctx, 31, 0x1139E8u);
    ctx->pc = 0x1139E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1139E0u;
            // 0x1139e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110CD8u;
    if (runtime->hasFunction(0x110CD8u)) {
        auto targetFn = runtime->lookupFunction(0x110CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1139E8u; }
        if (ctx->pc != 0x1139E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110CD8_0x110cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1139E8u; }
        if (ctx->pc != 0x1139E8u) { return; }
    }
    ctx->pc = 0x1139E8u;
label_1139e8:
    // 0x1139e8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1139E8u;
    {
        const bool branch_taken_0x1139e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1139ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1139E8u;
            // 0x1139ec: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1139e8) {
            ctx->pc = 0x113A08u;
            goto label_113a08;
        }
    }
    ctx->pc = 0x1139F0u;
    // 0x1139f0: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x1139F0u;
    SET_GPR_U32(ctx, 31, 0x1139F8u);
    ctx->pc = 0x1139F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1139F0u;
            // 0x1139f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1139F8u; }
        if (ctx->pc != 0x1139F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1139F8u; }
        if (ctx->pc != 0x1139F8u) { return; }
    }
    ctx->pc = 0x1139F8u;
label_1139f8:
    // 0x1139f8: 0xc04449e  jal         func_111278
    ctx->pc = 0x1139F8u;
    SET_GPR_U32(ctx, 31, 0x113A00u);
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113A00u; }
        if (ctx->pc != 0x113A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113A00u; }
        if (ctx->pc != 0x113A00u) { return; }
    }
    ctx->pc = 0x113A00u;
label_113a00:
    // 0x113a00: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x113A00u;
    {
        const bool branch_taken_0x113a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113A00u;
            // 0x113a04: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a00) {
            ctx->pc = 0x113A40u;
            goto label_113a40;
        }
    }
    ctx->pc = 0x113A08u;
label_113a08:
    // 0x113a08: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x113a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x113a0c: 0xc04449e  jal         func_111278
    ctx->pc = 0x113A0Cu;
    SET_GPR_U32(ctx, 31, 0x113A14u);
    ctx->pc = 0x113A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113A0Cu;
            // 0x113a10: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113A14u; }
        if (ctx->pc != 0x113A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113A14u; }
        if (ctx->pc != 0x113A14u) { return; }
    }
    ctx->pc = 0x113A14u;
label_113a14:
    // 0x113a14: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x113A14u;
    {
        const bool branch_taken_0x113a14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x113a14) {
            ctx->pc = 0x113A2Cu;
            goto label_113a2c;
        }
    }
    ctx->pc = 0x113A1Cu;
    // 0x113a1c: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x113A1Cu;
    SET_GPR_U32(ctx, 31, 0x113A24u);
    ctx->pc = 0x113A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113A1Cu;
            // 0x113a20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113A24u; }
        if (ctx->pc != 0x113A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113A24u; }
        if (ctx->pc != 0x113A24u) { return; }
    }
    ctx->pc = 0x113A24u;
label_113a24:
    // 0x113a24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x113A24u;
    {
        const bool branch_taken_0x113a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113A24u;
            // 0x113a28: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a24) {
            ctx->pc = 0x113A40u;
            goto label_113a40;
        }
    }
    ctx->pc = 0x113A2Cu;
label_113a2c:
    // 0x113a2c: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x113A2Cu;
    SET_GPR_U32(ctx, 31, 0x113A34u);
    ctx->pc = 0x113A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113A2Cu;
            // 0x113a30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113A34u; }
        if (ctx->pc != 0x113A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113A34u; }
        if (ctx->pc != 0x113A34u) { return; }
    }
    ctx->pc = 0x113A34u;
label_113a34:
    // 0x113a34: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x113A34u;
    SET_GPR_U32(ctx, 31, 0x113A3Cu);
    ctx->pc = 0x113A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113A34u;
            // 0x113a38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113A3Cu; }
        if (ctx->pc != 0x113A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113A3Cu; }
        if (ctx->pc != 0x113A3Cu) { return; }
    }
    ctx->pc = 0x113A3Cu;
label_113a3c:
    // 0x113a3c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x113a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_113a40:
    // 0x113a40: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x113a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x113a44: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x113a44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x113a48: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x113a48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x113a4c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x113a4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x113a50: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x113a50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x113a54: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x113a54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x113a58: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x113a58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x113a5c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x113a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113a60: 0x3e00008  jr          $ra
    ctx->pc = 0x113A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113A60u;
            // 0x113a64: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x113A68u;
    // 0x113a68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x113a6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113a70: 0xc044a56  jal         func_112958
    ctx->pc = 0x113A70u;
    SET_GPR_U32(ctx, 31, 0x113A78u);
    ctx->pc = 0x113A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113A70u;
            // 0x113a74: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112958u;
    goto label_112958;
    ctx->pc = 0x113A78u;
label_113a78:
    // 0x113a78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x113A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113A7Cu;
            // 0x113a80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x113A84u;
    // 0x113a84: 0x0  nop
    ctx->pc = 0x113a84u;
    // NOP
    // 0x113a88: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x113a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x113a8c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x113a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x113a90: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x113a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x113a94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x113a94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a98: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x113a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x113a9c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x113a9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113aa0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x113aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x113aa4: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x113aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x113aa8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x113aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x113aac: 0x3c16006c  lui         $s6, 0x6C
    ctx->pc = 0x113aacu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)108 << 16));
    // 0x113ab0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x113ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x113ab4: 0x26d0b440  addiu       $s0, $s6, -0x4BC0
    ctx->pc = 0x113ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294947904));
    // 0x113ab8: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x113ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x113abc: 0xc044492  jal         func_111248
    ctx->pc = 0x113ABCu;
    SET_GPR_U32(ctx, 31, 0x113AC4u);
    ctx->pc = 0x113AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113ABCu;
            // 0x113ac0: 0xffb20060  sd          $s2, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111248u;
    if (runtime->hasFunction(0x111248u)) {
        auto targetFn = runtime->lookupFunction(0x111248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113AC4u; }
        if (ctx->pc != 0x113AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111248_0x111248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113AC4u; }
        if (ctx->pc != 0x113AC4u) { return; }
    }
    ctx->pc = 0x113AC4u;
label_113ac4:
    // 0x113ac4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x113ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x113ac8: 0x8c43e43c  lw          $v1, -0x1BC4($v0)
    ctx->pc = 0x113ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960188)));
    // 0x113acc: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x113ACCu;
    {
        const bool branch_taken_0x113acc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x113acc) {
            ctx->pc = 0x113AD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x113ACCu;
            // 0x113ad0: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x113AE0u;
            goto label_113ae0;
        }
    }
    ctx->pc = 0x113AD4u;
    // 0x113ad4: 0xc0444dc  jal         func_111370
    ctx->pc = 0x113AD4u;
    SET_GPR_U32(ctx, 31, 0x113ADCu);
    ctx->pc = 0x111370u;
    if (runtime->hasFunction(0x111370u)) {
        auto targetFn = runtime->lookupFunction(0x111370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113ADCu; }
        if (ctx->pc != 0x113ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111370_0x111370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113ADCu; }
        if (ctx->pc != 0x113ADCu) { return; }
    }
    ctx->pc = 0x113ADCu;
label_113adc:
    // 0x113adc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x113adcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_113ae0:
    // 0x113ae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x113ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113ae4: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x113ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x113ae8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x113AE8u;
    {
        const bool branch_taken_0x113ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113AE8u;
            // 0x113aec: 0xa2020014  sb          $v0, 0x14($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ae8) {
            ctx->pc = 0x113B34u;
            goto label_113b34;
        }
    }
    ctx->pc = 0x113AF0u;
    // 0x113af0: 0x3c060063  lui         $a2, 0x63
    ctx->pc = 0x113af0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)99 << 16));
    // 0x113af4: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x113af4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x113af8: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x113af8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
    // 0x113afc: 0x3c13006c  lui         $s3, 0x6C
    ctx->pc = 0x113afcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)108 << 16));
    // 0x113b00: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x113b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x113b04: 0x0  nop
    ctx->pc = 0x113b04u;
    // NOP
label_113b08:
    // 0x113b08: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x113b08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x113b0c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x113B0Cu;
    {
        const bool branch_taken_0x113b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113B0Cu;
            // 0x113b10: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b0c) {
            ctx->pc = 0x113B44u;
            goto label_113b44;
        }
    }
    ctx->pc = 0x113B14u;
    // 0x113b14: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x113b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x113b18: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x113b18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113b1c: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x113b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x113b20: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x113b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x113b24: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x113B24u;
    {
        const bool branch_taken_0x113b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x113b24) {
            ctx->pc = 0x113B28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x113B24u;
            // 0x113b28: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x113B08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_113b08;
        }
    }
    ctx->pc = 0x113B2Cu;
    // 0x113b2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x113B2Cu;
    {
        const bool branch_taken_0x113b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113B2Cu;
            // 0x113b30: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b2c) {
            ctx->pc = 0x113B48u;
            goto label_113b48;
        }
    }
    ctx->pc = 0x113B34u;
label_113b34:
    // 0x113b34: 0x3c060063  lui         $a2, 0x63
    ctx->pc = 0x113b34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)99 << 16));
    // 0x113b38: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x113b38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x113b3c: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x113b3cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
    // 0x113b40: 0x3c13006c  lui         $s3, 0x6C
    ctx->pc = 0x113b40u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)108 << 16));
label_113b44:
    // 0x113b44: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x113b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_113b48:
    // 0x113b48: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x113B48u;
    {
        const bool branch_taken_0x113b48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x113b48) {
            ctx->pc = 0x113B4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x113B48u;
            // 0x113b4c: 0xa2000413  sb          $zero, 0x413($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x113B50u;
            goto label_113b50;
        }
    }
    ctx->pc = 0x113B50u;
label_113b50:
    // 0x113b50: 0xae150010  sw          $s5, 0x10($s0)
    ctx->pc = 0x113b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 21));
    // 0x113b54: 0x24c3f0e0  addiu       $v1, $a2, -0xF20
    ctx->pc = 0x113b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963424));
    // 0x113b58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x113b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113b5c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x113b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x113b60: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x113b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x113b64: 0x2673c080  addiu       $s3, $s3, -0x3F80
    ctx->pc = 0x113b64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951040));
    // 0x113b68: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x113b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x113b6c: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x113B6Cu;
    SET_GPR_U32(ctx, 31, 0x113B74u);
    ctx->pc = 0x113B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113B6Cu;
            // 0x113b70: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113B74u; }
        if (ctx->pc != 0x113B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113B74u; }
        if (ctx->pc != 0x113B74u) { return; }
    }
    ctx->pc = 0x113B74u;
label_113b74:
    // 0x113b74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x113b74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b78: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x113b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x113b7c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x113b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x113b80: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x113b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x113b84: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x113b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x113b88: 0x2684cb40  addiu       $a0, $s4, -0x34C0
    ctx->pc = 0x113b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294953792));
    // 0x113b8c: 0x26c7b440  addiu       $a3, $s6, -0x4BC0
    ctx->pc = 0x113b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294947904));
    // 0x113b90: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x113b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x113b94: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x113b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x113b98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x113b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b9c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x113b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x113ba0: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x113ba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x113ba4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x113ba4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113ba8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x113ba8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x113bac: 0xc044336  jal         func_110CD8
    ctx->pc = 0x113BACu;
    SET_GPR_U32(ctx, 31, 0x113BB4u);
    ctx->pc = 0x113BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113BACu;
            // 0x113bb0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110CD8u;
    if (runtime->hasFunction(0x110CD8u)) {
        auto targetFn = runtime->lookupFunction(0x110CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113BB4u; }
        if (ctx->pc != 0x113BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110CD8_0x110cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113BB4u; }
        if (ctx->pc != 0x113BB4u) { return; }
    }
    ctx->pc = 0x113BB4u;
label_113bb4:
    // 0x113bb4: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x113BB4u;
    {
        const bool branch_taken_0x113bb4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x113BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113BB4u;
            // 0x113bb8: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113bb4) {
            ctx->pc = 0x113BD4u;
            goto label_113bd4;
        }
    }
    ctx->pc = 0x113BBCu;
    // 0x113bbc: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x113BBCu;
    SET_GPR_U32(ctx, 31, 0x113BC4u);
    ctx->pc = 0x113BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113BBCu;
            // 0x113bc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113BC4u; }
        if (ctx->pc != 0x113BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113BC4u; }
        if (ctx->pc != 0x113BC4u) { return; }
    }
    ctx->pc = 0x113BC4u;
label_113bc4:
    // 0x113bc4: 0xc04449e  jal         func_111278
    ctx->pc = 0x113BC4u;
    SET_GPR_U32(ctx, 31, 0x113BCCu);
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113BCCu; }
        if (ctx->pc != 0x113BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113BCCu; }
        if (ctx->pc != 0x113BCCu) { return; }
    }
    ctx->pc = 0x113BCCu;
label_113bcc:
    // 0x113bcc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x113BCCu;
    {
        const bool branch_taken_0x113bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113BCCu;
            // 0x113bd0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113bcc) {
            ctx->pc = 0x113C0Cu;
            goto label_113c0c;
        }
    }
    ctx->pc = 0x113BD4u;
label_113bd4:
    // 0x113bd4: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x113bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x113bd8: 0xc04449e  jal         func_111278
    ctx->pc = 0x113BD8u;
    SET_GPR_U32(ctx, 31, 0x113BE0u);
    ctx->pc = 0x113BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113BD8u;
            // 0x113bdc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113BE0u; }
        if (ctx->pc != 0x113BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113BE0u; }
        if (ctx->pc != 0x113BE0u) { return; }
    }
    ctx->pc = 0x113BE0u;
label_113be0:
    // 0x113be0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x113BE0u;
    {
        const bool branch_taken_0x113be0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x113be0) {
            ctx->pc = 0x113BF8u;
            goto label_113bf8;
        }
    }
    ctx->pc = 0x113BE8u;
    // 0x113be8: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x113BE8u;
    SET_GPR_U32(ctx, 31, 0x113BF0u);
    ctx->pc = 0x113BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113BE8u;
            // 0x113bec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113BF0u; }
        if (ctx->pc != 0x113BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113BF0u; }
        if (ctx->pc != 0x113BF0u) { return; }
    }
    ctx->pc = 0x113BF0u;
label_113bf0:
    // 0x113bf0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x113BF0u;
    {
        const bool branch_taken_0x113bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113BF0u;
            // 0x113bf4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113bf0) {
            ctx->pc = 0x113C0Cu;
            goto label_113c0c;
        }
    }
    ctx->pc = 0x113BF8u;
label_113bf8:
    // 0x113bf8: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x113BF8u;
    SET_GPR_U32(ctx, 31, 0x113C00u);
    ctx->pc = 0x113BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113BF8u;
            // 0x113bfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113C00u; }
        if (ctx->pc != 0x113C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113C00u; }
        if (ctx->pc != 0x113C00u) { return; }
    }
    ctx->pc = 0x113C00u;
label_113c00:
    // 0x113c00: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x113C00u;
    SET_GPR_U32(ctx, 31, 0x113C08u);
    ctx->pc = 0x113C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113C00u;
            // 0x113c04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113C08u; }
        if (ctx->pc != 0x113C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113C08u; }
        if (ctx->pc != 0x113C08u) { return; }
    }
    ctx->pc = 0x113C08u;
label_113c08:
    // 0x113c08: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x113c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_113c0c:
    // 0x113c0c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x113c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x113c10: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x113c10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x113c14: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x113c14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x113c18: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x113c18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x113c1c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x113c1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x113c20: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x113c20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x113c24: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x113c24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x113c28: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x113c28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x113C2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113C2Cu;
            // 0x113c30: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x113C34u;
    // 0x113c34: 0x0  nop
    ctx->pc = 0x113c34u;
    // NOP
    // 0x113c38: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x113c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x113c3c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x113c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x113c40: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x113c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x113c44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x113c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c48: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x113c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x113c4c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x113c4cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c50: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x113c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x113c54: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x113c54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c58: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x113c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x113c5c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x113c5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c60: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x113c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x113c64: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x113c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c68: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x113c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x113c6c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x113c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x113c70: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x113c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x113c74: 0x3c1e006c  lui         $fp, 0x6C
    ctx->pc = 0x113c74u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)108 << 16));
    // 0x113c78: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x113c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x113c7c: 0x27d2b440  addiu       $s2, $fp, -0x4BC0
    ctx->pc = 0x113c7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4294947904));
    // 0x113c80: 0xc044492  jal         func_111248
    ctx->pc = 0x113C80u;
    SET_GPR_U32(ctx, 31, 0x113C88u);
    ctx->pc = 0x113C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113C80u;
            // 0x113c84: 0xffb40080  sd          $s4, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111248u;
    if (runtime->hasFunction(0x111248u)) {
        auto targetFn = runtime->lookupFunction(0x111248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113C88u; }
        if (ctx->pc != 0x113C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111248_0x111248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113C88u; }
        if (ctx->pc != 0x113C88u) { return; }
    }
    ctx->pc = 0x113C88u;
label_113c88:
    // 0x113c88: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x113c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x113c8c: 0x8c62e43c  lw          $v0, -0x1BC4($v1)
    ctx->pc = 0x113c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960188)));
    // 0x113c90: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x113C90u;
    {
        const bool branch_taken_0x113c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113c90) {
            ctx->pc = 0x113C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x113C90u;
            // 0x113c94: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x113CA4u;
            goto label_113ca4;
        }
    }
    ctx->pc = 0x113C98u;
    // 0x113c98: 0xc0444dc  jal         func_111370
    ctx->pc = 0x113C98u;
    SET_GPR_U32(ctx, 31, 0x113CA0u);
    ctx->pc = 0x111370u;
    if (runtime->hasFunction(0x111370u)) {
        auto targetFn = runtime->lookupFunction(0x111370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113CA0u; }
        if (ctx->pc != 0x113CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111370_0x111370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113CA0u; }
        if (ctx->pc != 0x113CA0u) { return; }
    }
    ctx->pc = 0x113CA0u;
label_113ca0:
    // 0x113ca0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x113ca0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_113ca4:
    // 0x113ca4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x113ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113ca8: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x113ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x113cac: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x113CACu;
    {
        const bool branch_taken_0x113cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113CACu;
            // 0x113cb0: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113cac) {
            ctx->pc = 0x113CECu;
            goto label_113cec;
        }
    }
    ctx->pc = 0x113CB4u;
    // 0x113cb4: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x113cb4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x113cb8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x113cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x113cbc: 0x0  nop
    ctx->pc = 0x113cbcu;
    // NOP
label_113cc0:
    // 0x113cc0: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x113cc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x113cc4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x113CC4u;
    {
        const bool branch_taken_0x113cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113CC4u;
            // 0x113cc8: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113cc4) {
            ctx->pc = 0x113CF0u;
            goto label_113cf0;
        }
    }
    ctx->pc = 0x113CCCu;
    // 0x113ccc: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x113cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x113cd0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x113cd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113cd4: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x113cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x113cd8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x113cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x113cdc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x113CDCu;
    {
        const bool branch_taken_0x113cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x113cdc) {
            ctx->pc = 0x113CE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x113CDCu;
            // 0x113ce0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x113CC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_113cc0;
        }
    }
    ctx->pc = 0x113CE4u;
    // 0x113ce4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x113CE4u;
    {
        const bool branch_taken_0x113ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113CE4u;
            // 0x113ce8: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ce4) {
            ctx->pc = 0x113CF4u;
            goto label_113cf4;
        }
    }
    ctx->pc = 0x113CECu;
label_113cec:
    // 0x113cec: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x113cecu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
label_113cf0:
    // 0x113cf0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x113cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_113cf4:
    // 0x113cf4: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x113CF4u;
    {
        const bool branch_taken_0x113cf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x113cf4) {
            ctx->pc = 0x113CF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x113CF4u;
            // 0x113cf8: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x113CFCu;
            goto label_113cfc;
        }
    }
    ctx->pc = 0x113CFCu;
label_113cfc:
    // 0x113cfc: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x113cfcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x113d00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x113d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113d04: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x113d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x113d08: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x113D08u;
    {
        const bool branch_taken_0x113d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113D08u;
            // 0x113d0c: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d08) {
            ctx->pc = 0x113D3Cu;
            goto label_113d3c;
        }
    }
    ctx->pc = 0x113D10u;
    // 0x113d10: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x113d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x113d14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x113d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_113d18:
    // 0x113d18: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x113d18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x113d1c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x113D1Cu;
    {
        const bool branch_taken_0x113d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113D1Cu;
            // 0x113d20: 0x2651021  addu        $v0, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d1c) {
            ctx->pc = 0x113D3Cu;
            goto label_113d3c;
        }
    }
    ctx->pc = 0x113D24u;
    // 0x113d24: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x113d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x113d28: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x113d28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113d2c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x113d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x113d30: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x113d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x113d34: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x113D34u;
    {
        const bool branch_taken_0x113d34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x113d34) {
            ctx->pc = 0x113D38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x113D34u;
            // 0x113d38: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x113D18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_113d18;
        }
    }
    ctx->pc = 0x113D3Cu;
label_113d3c:
    // 0x113d3c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x113d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x113d40: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x113D40u;
    {
        const bool branch_taken_0x113d40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x113d40) {
            ctx->pc = 0x113D44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x113D40u;
            // 0x113d44: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x113D48u;
            goto label_113d48;
        }
    }
    ctx->pc = 0x113D48u;
label_113d48:
    // 0x113d48: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x113D48u;
    {
        const bool branch_taken_0x113d48 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x113d48) {
            ctx->pc = 0x113D60u;
            goto label_113d60;
        }
    }
    ctx->pc = 0x113D50u;
    // 0x113d50: 0xc04449e  jal         func_111278
    ctx->pc = 0x113D50u;
    SET_GPR_U32(ctx, 31, 0x113D58u);
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113D58u; }
        if (ctx->pc != 0x113D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113D58u; }
        if (ctx->pc != 0x113D58u) { return; }
    }
    ctx->pc = 0x113D58u;
label_113d58:
    // 0x113d58: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x113D58u;
    {
        const bool branch_taken_0x113d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113D58u;
            // 0x113d5c: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d58) {
            ctx->pc = 0x113E88u;
            goto label_113e88;
        }
    }
    ctx->pc = 0x113D60u;
label_113d60:
    // 0x113d60: 0x1a200011  blez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x113D60u;
    {
        const bool branch_taken_0x113d60 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x113D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113D60u;
            // 0x113d64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d60) {
            ctx->pc = 0x113DA8u;
            goto label_113da8;
        }
    }
    ctx->pc = 0x113D68u;
    // 0x113d68: 0x2646080c  addiu       $a2, $s2, 0x80C
    ctx->pc = 0x113d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2060));
    // 0x113d6c: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x113d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
    // 0x113d70: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x113d70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x113d74: 0x3c15006c  lui         $s5, 0x6C
    ctx->pc = 0x113d74u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
    // 0x113d78: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x113d78u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
    // 0x113d7c: 0x0  nop
    ctx->pc = 0x113d7cu;
    // NOP
label_113d80:
    // 0x113d80: 0x2c51021  addu        $v0, $s6, $a1
    ctx->pc = 0x113d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x113d84: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x113d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x113d88: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x113d88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113d8c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x113d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x113d90: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x113d90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x113d94: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x113d94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x113d98: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x113D98u;
    {
        const bool branch_taken_0x113d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113d98) {
            ctx->pc = 0x113D80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_113d80;
        }
    }
    ctx->pc = 0x113DA0u;
    // 0x113da0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x113DA0u;
    {
        const bool branch_taken_0x113da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113DA0u;
            // 0x113da4: 0xae510c10  sw          $s1, 0xC10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3088), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113da0) {
            ctx->pc = 0x113DBCu;
            goto label_113dbc;
        }
    }
    ctx->pc = 0x113DA8u;
label_113da8:
    // 0x113da8: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x113da8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
    // 0x113dac: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x113dacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x113db0: 0x3c15006c  lui         $s5, 0x6C
    ctx->pc = 0x113db0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
    // 0x113db4: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x113db4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
    // 0x113db8: 0xae510c10  sw          $s1, 0xC10($s2)
    ctx->pc = 0x113db8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3088), GPR_U32(ctx, 17));
label_113dbc:
    // 0x113dbc: 0x24e3f0f8  addiu       $v1, $a3, -0xF08
    ctx->pc = 0x113dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963448));
    // 0x113dc0: 0xae570c0c  sw          $s7, 0xC0C($s2)
    ctx->pc = 0x113dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3084), GPR_U32(ctx, 23));
    // 0x113dc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x113dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113dc8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x113dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x113dcc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x113dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x113dd0: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x113dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x113dd4: 0x27d0b440  addiu       $s0, $fp, -0x4BC0
    ctx->pc = 0x113dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294947904));
    // 0x113dd8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x113dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x113ddc: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x113DDCu;
    SET_GPR_U32(ctx, 31, 0x113DE4u);
    ctx->pc = 0x113DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113DDCu;
            // 0x113de0: 0x2694c080  addiu       $s4, $s4, -0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113DE4u; }
        if (ctx->pc != 0x113DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113DE4u; }
        if (ctx->pc != 0x113DE4u) { return; }
    }
    ctx->pc = 0x113DE4u;
label_113de4:
    // 0x113de4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x113de4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113dec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x113decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x113df0: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x113df0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x113df4: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x113df4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x113df8: 0x24050c14  addiu       $a1, $zero, 0xC14
    ctx->pc = 0x113df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3092));
    // 0x113dfc: 0xc043e7e  jal         func_10F9F8
    ctx->pc = 0x113DFCu;
    SET_GPR_U32(ctx, 31, 0x113E04u);
    ctx->pc = 0x113E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113DFCu;
            // 0x113e00: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F9F8u;
    if (runtime->hasFunction(0x10F9F8u)) {
        auto targetFn = runtime->lookupFunction(0x10F9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113E04u; }
        if (ctx->pc != 0x113E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F9F8_0x10f9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113E04u; }
        if (ctx->pc != 0x113E04u) { return; }
    }
    ctx->pc = 0x113E04u;
label_113e04:
    // 0x113e04: 0x26a4cb40  addiu       $a0, $s5, -0x34C0
    ctx->pc = 0x113e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294953792));
    // 0x113e08: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x113e08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113e0c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x113e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x113e10: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x113e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x113e14: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x113e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x113e18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x113e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113e1c: 0x24080c14  addiu       $t0, $zero, 0xC14
    ctx->pc = 0x113e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3092));
    // 0x113e20: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x113e20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113e24: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x113e24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x113e28: 0xc044336  jal         func_110CD8
    ctx->pc = 0x113E28u;
    SET_GPR_U32(ctx, 31, 0x113E30u);
    ctx->pc = 0x113E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113E28u;
            // 0x113e2c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110CD8u;
    if (runtime->hasFunction(0x110CD8u)) {
        auto targetFn = runtime->lookupFunction(0x110CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113E30u; }
        if (ctx->pc != 0x113E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110CD8_0x110cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113E30u; }
        if (ctx->pc != 0x113E30u) { return; }
    }
    ctx->pc = 0x113E30u;
label_113e30:
    // 0x113e30: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x113E30u;
    {
        const bool branch_taken_0x113e30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x113E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113E30u;
            // 0x113e34: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e30) {
            ctx->pc = 0x113E50u;
            goto label_113e50;
        }
    }
    ctx->pc = 0x113E38u;
    // 0x113e38: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x113E38u;
    SET_GPR_U32(ctx, 31, 0x113E40u);
    ctx->pc = 0x113E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113E38u;
            // 0x113e3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113E40u; }
        if (ctx->pc != 0x113E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113E40u; }
        if (ctx->pc != 0x113E40u) { return; }
    }
    ctx->pc = 0x113E40u;
label_113e40:
    // 0x113e40: 0xc04449e  jal         func_111278
    ctx->pc = 0x113E40u;
    SET_GPR_U32(ctx, 31, 0x113E48u);
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113E48u; }
        if (ctx->pc != 0x113E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113E48u; }
        if (ctx->pc != 0x113E48u) { return; }
    }
    ctx->pc = 0x113E48u;
label_113e48:
    // 0x113e48: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x113E48u;
    {
        const bool branch_taken_0x113e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113E48u;
            // 0x113e4c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e48) {
            ctx->pc = 0x113E88u;
            goto label_113e88;
        }
    }
    ctx->pc = 0x113E50u;
label_113e50:
    // 0x113e50: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x113e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x113e54: 0xc04449e  jal         func_111278
    ctx->pc = 0x113E54u;
    SET_GPR_U32(ctx, 31, 0x113E5Cu);
    ctx->pc = 0x113E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113E54u;
            // 0x113e58: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113E5Cu; }
        if (ctx->pc != 0x113E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113E5Cu; }
        if (ctx->pc != 0x113E5Cu) { return; }
    }
    ctx->pc = 0x113E5Cu;
label_113e5c:
    // 0x113e5c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x113E5Cu;
    {
        const bool branch_taken_0x113e5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x113e5c) {
            ctx->pc = 0x113E74u;
            goto label_113e74;
        }
    }
    ctx->pc = 0x113E64u;
    // 0x113e64: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x113E64u;
    SET_GPR_U32(ctx, 31, 0x113E6Cu);
    ctx->pc = 0x113E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113E64u;
            // 0x113e68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113E6Cu; }
        if (ctx->pc != 0x113E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113E6Cu; }
        if (ctx->pc != 0x113E6Cu) { return; }
    }
    ctx->pc = 0x113E6Cu;
label_113e6c:
    // 0x113e6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x113E6Cu;
    {
        const bool branch_taken_0x113e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113E6Cu;
            // 0x113e70: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e6c) {
            ctx->pc = 0x113E88u;
            goto label_113e88;
        }
    }
    ctx->pc = 0x113E74u;
label_113e74:
    // 0x113e74: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x113E74u;
    SET_GPR_U32(ctx, 31, 0x113E7Cu);
    ctx->pc = 0x113E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113E74u;
            // 0x113e78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113E7Cu; }
        if (ctx->pc != 0x113E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113E7Cu; }
        if (ctx->pc != 0x113E7Cu) { return; }
    }
    ctx->pc = 0x113E7Cu;
label_113e7c:
    // 0x113e7c: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x113E7Cu;
    SET_GPR_U32(ctx, 31, 0x113E84u);
    ctx->pc = 0x113E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113E7Cu;
            // 0x113e80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113E84u; }
        if (ctx->pc != 0x113E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113E84u; }
        if (ctx->pc != 0x113E84u) { return; }
    }
    ctx->pc = 0x113E84u;
label_113e84:
    // 0x113e84: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x113e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_113e88:
    // 0x113e88: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x113e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x113e8c: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x113e8cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x113e90: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x113e90u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x113e94: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x113e94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x113e98: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x113e98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x113e9c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x113e9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x113ea0: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x113ea0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x113ea4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x113ea4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x113ea8: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x113ea8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x113eac: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x113eacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x113EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113EB0u;
            // 0x113eb4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x113EB8u;
    // 0x113eb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x113ebc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113ec0: 0xc044a56  jal         func_112958
    ctx->pc = 0x113EC0u;
    SET_GPR_U32(ctx, 31, 0x113EC8u);
    ctx->pc = 0x113EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113EC0u;
            // 0x113ec4: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112958u;
    goto label_112958;
    ctx->pc = 0x113EC8u;
label_113ec8:
    // 0x113ec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x113ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113ECCu;
            // 0x113ed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x113ED4u;
    // 0x113ed4: 0x0  nop
    ctx->pc = 0x113ed4u;
    // NOP
}
