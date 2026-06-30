#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004FD910
// Address: 0x4fd910 - 0x4fdb30
void sub_004FD910_0x4fd910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FD910_0x4fd910");
#endif

    switch (ctx->pc) {
        case 0x4fd910u: goto label_4fd910;
        case 0x4fd914u: goto label_4fd914;
        case 0x4fd918u: goto label_4fd918;
        case 0x4fd91cu: goto label_4fd91c;
        case 0x4fd920u: goto label_4fd920;
        case 0x4fd924u: goto label_4fd924;
        case 0x4fd928u: goto label_4fd928;
        case 0x4fd92cu: goto label_4fd92c;
        case 0x4fd930u: goto label_4fd930;
        case 0x4fd934u: goto label_4fd934;
        case 0x4fd938u: goto label_4fd938;
        case 0x4fd93cu: goto label_4fd93c;
        case 0x4fd940u: goto label_4fd940;
        case 0x4fd944u: goto label_4fd944;
        case 0x4fd948u: goto label_4fd948;
        case 0x4fd94cu: goto label_4fd94c;
        case 0x4fd950u: goto label_4fd950;
        case 0x4fd954u: goto label_4fd954;
        case 0x4fd958u: goto label_4fd958;
        case 0x4fd95cu: goto label_4fd95c;
        case 0x4fd960u: goto label_4fd960;
        case 0x4fd964u: goto label_4fd964;
        case 0x4fd968u: goto label_4fd968;
        case 0x4fd96cu: goto label_4fd96c;
        case 0x4fd970u: goto label_4fd970;
        case 0x4fd974u: goto label_4fd974;
        case 0x4fd978u: goto label_4fd978;
        case 0x4fd97cu: goto label_4fd97c;
        case 0x4fd980u: goto label_4fd980;
        case 0x4fd984u: goto label_4fd984;
        case 0x4fd988u: goto label_4fd988;
        case 0x4fd98cu: goto label_4fd98c;
        case 0x4fd990u: goto label_4fd990;
        case 0x4fd994u: goto label_4fd994;
        case 0x4fd998u: goto label_4fd998;
        case 0x4fd99cu: goto label_4fd99c;
        case 0x4fd9a0u: goto label_4fd9a0;
        case 0x4fd9a4u: goto label_4fd9a4;
        case 0x4fd9a8u: goto label_4fd9a8;
        case 0x4fd9acu: goto label_4fd9ac;
        case 0x4fd9b0u: goto label_4fd9b0;
        case 0x4fd9b4u: goto label_4fd9b4;
        case 0x4fd9b8u: goto label_4fd9b8;
        case 0x4fd9bcu: goto label_4fd9bc;
        case 0x4fd9c0u: goto label_4fd9c0;
        case 0x4fd9c4u: goto label_4fd9c4;
        case 0x4fd9c8u: goto label_4fd9c8;
        case 0x4fd9ccu: goto label_4fd9cc;
        case 0x4fd9d0u: goto label_4fd9d0;
        case 0x4fd9d4u: goto label_4fd9d4;
        case 0x4fd9d8u: goto label_4fd9d8;
        case 0x4fd9dcu: goto label_4fd9dc;
        case 0x4fd9e0u: goto label_4fd9e0;
        case 0x4fd9e4u: goto label_4fd9e4;
        case 0x4fd9e8u: goto label_4fd9e8;
        case 0x4fd9ecu: goto label_4fd9ec;
        case 0x4fd9f0u: goto label_4fd9f0;
        case 0x4fd9f4u: goto label_4fd9f4;
        case 0x4fd9f8u: goto label_4fd9f8;
        case 0x4fd9fcu: goto label_4fd9fc;
        case 0x4fda00u: goto label_4fda00;
        case 0x4fda04u: goto label_4fda04;
        case 0x4fda08u: goto label_4fda08;
        case 0x4fda0cu: goto label_4fda0c;
        case 0x4fda10u: goto label_4fda10;
        case 0x4fda14u: goto label_4fda14;
        case 0x4fda18u: goto label_4fda18;
        case 0x4fda1cu: goto label_4fda1c;
        case 0x4fda20u: goto label_4fda20;
        case 0x4fda24u: goto label_4fda24;
        case 0x4fda28u: goto label_4fda28;
        case 0x4fda2cu: goto label_4fda2c;
        case 0x4fda30u: goto label_4fda30;
        case 0x4fda34u: goto label_4fda34;
        case 0x4fda38u: goto label_4fda38;
        case 0x4fda3cu: goto label_4fda3c;
        case 0x4fda40u: goto label_4fda40;
        case 0x4fda44u: goto label_4fda44;
        case 0x4fda48u: goto label_4fda48;
        case 0x4fda4cu: goto label_4fda4c;
        case 0x4fda50u: goto label_4fda50;
        case 0x4fda54u: goto label_4fda54;
        case 0x4fda58u: goto label_4fda58;
        case 0x4fda5cu: goto label_4fda5c;
        case 0x4fda60u: goto label_4fda60;
        case 0x4fda64u: goto label_4fda64;
        case 0x4fda68u: goto label_4fda68;
        case 0x4fda6cu: goto label_4fda6c;
        case 0x4fda70u: goto label_4fda70;
        case 0x4fda74u: goto label_4fda74;
        case 0x4fda78u: goto label_4fda78;
        case 0x4fda7cu: goto label_4fda7c;
        case 0x4fda80u: goto label_4fda80;
        case 0x4fda84u: goto label_4fda84;
        case 0x4fda88u: goto label_4fda88;
        case 0x4fda8cu: goto label_4fda8c;
        case 0x4fda90u: goto label_4fda90;
        case 0x4fda94u: goto label_4fda94;
        case 0x4fda98u: goto label_4fda98;
        case 0x4fda9cu: goto label_4fda9c;
        case 0x4fdaa0u: goto label_4fdaa0;
        case 0x4fdaa4u: goto label_4fdaa4;
        case 0x4fdaa8u: goto label_4fdaa8;
        case 0x4fdaacu: goto label_4fdaac;
        case 0x4fdab0u: goto label_4fdab0;
        case 0x4fdab4u: goto label_4fdab4;
        case 0x4fdab8u: goto label_4fdab8;
        case 0x4fdabcu: goto label_4fdabc;
        case 0x4fdac0u: goto label_4fdac0;
        case 0x4fdac4u: goto label_4fdac4;
        case 0x4fdac8u: goto label_4fdac8;
        case 0x4fdaccu: goto label_4fdacc;
        case 0x4fdad0u: goto label_4fdad0;
        case 0x4fdad4u: goto label_4fdad4;
        case 0x4fdad8u: goto label_4fdad8;
        case 0x4fdadcu: goto label_4fdadc;
        case 0x4fdae0u: goto label_4fdae0;
        case 0x4fdae4u: goto label_4fdae4;
        case 0x4fdae8u: goto label_4fdae8;
        case 0x4fdaecu: goto label_4fdaec;
        case 0x4fdaf0u: goto label_4fdaf0;
        case 0x4fdaf4u: goto label_4fdaf4;
        case 0x4fdaf8u: goto label_4fdaf8;
        case 0x4fdafcu: goto label_4fdafc;
        case 0x4fdb00u: goto label_4fdb00;
        case 0x4fdb04u: goto label_4fdb04;
        case 0x4fdb08u: goto label_4fdb08;
        case 0x4fdb0cu: goto label_4fdb0c;
        case 0x4fdb10u: goto label_4fdb10;
        case 0x4fdb14u: goto label_4fdb14;
        case 0x4fdb18u: goto label_4fdb18;
        case 0x4fdb1cu: goto label_4fdb1c;
        case 0x4fdb20u: goto label_4fdb20;
        case 0x4fdb24u: goto label_4fdb24;
        case 0x4fdb28u: goto label_4fdb28;
        case 0x4fdb2cu: goto label_4fdb2c;
        default: break;
    }

    ctx->pc = 0x4fd910u;

label_4fd910:
    // 0x4fd910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4fd910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4fd914:
    // 0x4fd914: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4fd914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4fd918:
    // 0x4fd918: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4fd918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4fd91c:
    // 0x4fd91c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4fd91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4fd920:
    // 0x4fd920: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4fd920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4fd924:
    // 0x4fd924: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
label_4fd928:
    if (ctx->pc == 0x4FD928u) {
        ctx->pc = 0x4FD928u;
            // 0x4fd928: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FD92Cu;
        goto label_4fd92c;
    }
    ctx->pc = 0x4FD924u;
    {
        const bool branch_taken_0x4fd924 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FD928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD924u;
            // 0x4fd928: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd924) {
            ctx->pc = 0x4FD97Cu;
            goto label_4fd97c;
        }
    }
    ctx->pc = 0x4FD92Cu;
label_4fd92c:
    // 0x4fd92c: 0x26220044  addiu       $v0, $s1, 0x44
    ctx->pc = 0x4fd92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
label_4fd930:
    // 0x4fd930: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4fd934:
    if (ctx->pc == 0x4FD934u) {
        ctx->pc = 0x4FD934u;
            // 0x4fd934: 0x26220020  addiu       $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x4FD938u;
        goto label_4fd938;
    }
    ctx->pc = 0x4FD930u;
    {
        const bool branch_taken_0x4fd930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd930) {
            ctx->pc = 0x4FD934u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD930u;
            // 0x4fd934: 0x26220020  addiu       $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FD944u;
            goto label_4fd944;
        }
    }
    ctx->pc = 0x4FD938u;
label_4fd938:
    // 0x4fd938: 0xc07507c  jal         func_1D41F0
label_4fd93c:
    if (ctx->pc == 0x4FD93Cu) {
        ctx->pc = 0x4FD93Cu;
            // 0x4fd93c: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->pc = 0x4FD940u;
        goto label_4fd940;
    }
    ctx->pc = 0x4FD938u;
    SET_GPR_U32(ctx, 31, 0x4FD940u);
    ctx->pc = 0x4FD93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD938u;
            // 0x4fd93c: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD940u; }
        if (ctx->pc != 0x4FD940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD940u; }
        if (ctx->pc != 0x4FD940u) { return; }
    }
    ctx->pc = 0x4FD940u;
label_4fd940:
    // 0x4fd940: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x4fd940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_4fd944:
    // 0x4fd944: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4fd948:
    if (ctx->pc == 0x4FD948u) {
        ctx->pc = 0x4FD94Cu;
        goto label_4fd94c;
    }
    ctx->pc = 0x4FD944u;
    {
        const bool branch_taken_0x4fd944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd944) {
            ctx->pc = 0x4FD954u;
            goto label_4fd954;
        }
    }
    ctx->pc = 0x4FD94Cu;
label_4fd94c:
    // 0x4fd94c: 0xc07507c  jal         func_1D41F0
label_4fd950:
    if (ctx->pc == 0x4FD950u) {
        ctx->pc = 0x4FD950u;
            // 0x4fd950: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->pc = 0x4FD954u;
        goto label_4fd954;
    }
    ctx->pc = 0x4FD94Cu;
    SET_GPR_U32(ctx, 31, 0x4FD954u);
    ctx->pc = 0x4FD950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD94Cu;
            // 0x4fd950: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD954u; }
        if (ctx->pc != 0x4FD954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD954u; }
        if (ctx->pc != 0x4FD954u) { return; }
    }
    ctx->pc = 0x4FD954u;
label_4fd954:
    // 0x4fd954: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
label_4fd958:
    if (ctx->pc == 0x4FD958u) {
        ctx->pc = 0x4FD958u;
            // 0x4fd958: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4FD95Cu;
        goto label_4fd95c;
    }
    ctx->pc = 0x4FD954u;
    {
        const bool branch_taken_0x4fd954 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd954) {
            ctx->pc = 0x4FD958u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD954u;
            // 0x4fd958: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FD968u;
            goto label_4fd968;
        }
    }
    ctx->pc = 0x4FD95Cu;
label_4fd95c:
    // 0x4fd95c: 0xc07507c  jal         func_1D41F0
label_4fd960:
    if (ctx->pc == 0x4FD960u) {
        ctx->pc = 0x4FD960u;
            // 0x4fd960: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x4FD964u;
        goto label_4fd964;
    }
    ctx->pc = 0x4FD95Cu;
    SET_GPR_U32(ctx, 31, 0x4FD964u);
    ctx->pc = 0x4FD960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD95Cu;
            // 0x4fd960: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD964u; }
        if (ctx->pc != 0x4FD964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD964u; }
        if (ctx->pc != 0x4FD964u) { return; }
    }
    ctx->pc = 0x4FD964u;
label_4fd964:
    // 0x4fd964: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4fd964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4fd968:
    // 0x4fd968: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4fd968u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4fd96c:
    // 0x4fd96c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4fd970:
    if (ctx->pc == 0x4FD970u) {
        ctx->pc = 0x4FD970u;
            // 0x4fd970: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FD974u;
        goto label_4fd974;
    }
    ctx->pc = 0x4FD96Cu;
    {
        const bool branch_taken_0x4fd96c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4fd96c) {
            ctx->pc = 0x4FD970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD96Cu;
            // 0x4fd970: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FD980u;
            goto label_4fd980;
        }
    }
    ctx->pc = 0x4FD974u;
label_4fd974:
    // 0x4fd974: 0xc0400a8  jal         func_1002A0
label_4fd978:
    if (ctx->pc == 0x4FD978u) {
        ctx->pc = 0x4FD978u;
            // 0x4fd978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FD97Cu;
        goto label_4fd97c;
    }
    ctx->pc = 0x4FD974u;
    SET_GPR_U32(ctx, 31, 0x4FD97Cu);
    ctx->pc = 0x4FD978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD974u;
            // 0x4fd978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD97Cu; }
        if (ctx->pc != 0x4FD97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD97Cu; }
        if (ctx->pc != 0x4FD97Cu) { return; }
    }
    ctx->pc = 0x4FD97Cu;
label_4fd97c:
    // 0x4fd97c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4fd97cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4fd980:
    // 0x4fd980: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4fd980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4fd984:
    // 0x4fd984: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4fd984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4fd988:
    // 0x4fd988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4fd988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4fd98c:
    // 0x4fd98c: 0x3e00008  jr          $ra
label_4fd990:
    if (ctx->pc == 0x4FD990u) {
        ctx->pc = 0x4FD990u;
            // 0x4fd990: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4FD994u;
        goto label_4fd994;
    }
    ctx->pc = 0x4FD98Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FD990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD98Cu;
            // 0x4fd990: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FD994u;
label_4fd994:
    // 0x4fd994: 0x0  nop
    ctx->pc = 0x4fd994u;
    // NOP
label_4fd998:
    // 0x4fd998: 0x0  nop
    ctx->pc = 0x4fd998u;
    // NOP
label_4fd99c:
    // 0x4fd99c: 0x0  nop
    ctx->pc = 0x4fd99cu;
    // NOP
label_4fd9a0:
    // 0x4fd9a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4fd9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4fd9a4:
    // 0x4fd9a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4fd9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4fd9a8:
    // 0x4fd9a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4fd9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4fd9ac:
    // 0x4fd9ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4fd9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4fd9b0:
    // 0x4fd9b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4fd9b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4fd9b4:
    // 0x4fd9b4: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
label_4fd9b8:
    if (ctx->pc == 0x4FD9B8u) {
        ctx->pc = 0x4FD9B8u;
            // 0x4fd9b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FD9BCu;
        goto label_4fd9bc;
    }
    ctx->pc = 0x4FD9B4u;
    {
        const bool branch_taken_0x4fd9b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FD9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD9B4u;
            // 0x4fd9b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd9b4) {
            ctx->pc = 0x4FDA7Cu;
            goto label_4fda7c;
        }
    }
    ctx->pc = 0x4FD9BCu;
label_4fd9bc:
    // 0x4fd9bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4fd9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4fd9c0:
    // 0x4fd9c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4fd9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4fd9c4:
    // 0x4fd9c4: 0x24634690  addiu       $v1, $v1, 0x4690
    ctx->pc = 0x4fd9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18064));
label_4fd9c8:
    // 0x4fd9c8: 0x244246d0  addiu       $v0, $v0, 0x46D0
    ctx->pc = 0x4fd9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18128));
label_4fd9cc:
    // 0x4fd9cc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4fd9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4fd9d0:
    // 0x4fd9d0: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4fd9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4fd9d4:
    // 0x4fd9d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4fd9d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4fd9d8:
    // 0x4fd9d8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4fd9d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4fd9dc:
    // 0x4fd9dc: 0x320f809  jalr        $t9
label_4fd9e0:
    if (ctx->pc == 0x4FD9E0u) {
        ctx->pc = 0x4FD9E4u;
        goto label_4fd9e4;
    }
    ctx->pc = 0x4FD9DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FD9E4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FD9E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FD9E4u; }
            if (ctx->pc != 0x4FD9E4u) { return; }
        }
        }
    }
    ctx->pc = 0x4FD9E4u;
label_4fd9e4:
    // 0x4fd9e4: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_4fd9e8:
    if (ctx->pc == 0x4FD9E8u) {
        ctx->pc = 0x4FD9E8u;
            // 0x4fd9e8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4FD9ECu;
        goto label_4fd9ec;
    }
    ctx->pc = 0x4FD9E4u;
    {
        const bool branch_taken_0x4fd9e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd9e4) {
            ctx->pc = 0x4FD9E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD9E4u;
            // 0x4fd9e8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FDA68u;
            goto label_4fda68;
        }
    }
    ctx->pc = 0x4FD9ECu;
label_4fd9ec:
    // 0x4fd9ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4fd9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4fd9f0:
    // 0x4fd9f0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4fd9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4fd9f4:
    // 0x4fd9f4: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x4fd9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_4fd9f8:
    // 0x4fd9f8: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x4fd9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_4fd9fc:
    // 0x4fd9fc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4fd9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4fda00:
    // 0x4fda00: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x4fda00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_4fda04:
    // 0x4fda04: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4fda08:
    if (ctx->pc == 0x4FDA08u) {
        ctx->pc = 0x4FDA08u;
            // 0x4fda08: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x4FDA0Cu;
        goto label_4fda0c;
    }
    ctx->pc = 0x4FDA04u;
    {
        const bool branch_taken_0x4fda04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FDA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDA04u;
            // 0x4fda08: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fda04) {
            ctx->pc = 0x4FDA40u;
            goto label_4fda40;
        }
    }
    ctx->pc = 0x4FDA0Cu;
label_4fda0c:
    // 0x4fda0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4fda0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4fda10:
    // 0x4fda10: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x4fda10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_4fda14:
    // 0x4fda14: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4fda14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4fda18:
    // 0x4fda18: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x4fda18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4fda1c:
    // 0x4fda1c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_4fda20:
    if (ctx->pc == 0x4FDA20u) {
        ctx->pc = 0x4FDA24u;
        goto label_4fda24;
    }
    ctx->pc = 0x4FDA1Cu;
    {
        const bool branch_taken_0x4fda1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fda1c) {
            ctx->pc = 0x4FDA40u;
            goto label_4fda40;
        }
    }
    ctx->pc = 0x4FDA24u;
label_4fda24:
    // 0x4fda24: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4fda28:
    if (ctx->pc == 0x4FDA28u) {
        ctx->pc = 0x4FDA28u;
            // 0x4fda28: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4FDA2Cu;
        goto label_4fda2c;
    }
    ctx->pc = 0x4FDA24u;
    {
        const bool branch_taken_0x4fda24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fda24) {
            ctx->pc = 0x4FDA28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDA24u;
            // 0x4fda28: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FDA40u;
            goto label_4fda40;
        }
    }
    ctx->pc = 0x4FDA2Cu;
label_4fda2c:
    // 0x4fda2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4fda2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4fda30:
    // 0x4fda30: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4fda30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4fda34:
    // 0x4fda34: 0x320f809  jalr        $t9
label_4fda38:
    if (ctx->pc == 0x4FDA38u) {
        ctx->pc = 0x4FDA38u;
            // 0x4fda38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4FDA3Cu;
        goto label_4fda3c;
    }
    ctx->pc = 0x4FDA34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FDA3Cu);
        ctx->pc = 0x4FDA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDA34u;
            // 0x4fda38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FDA3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FDA3Cu; }
            if (ctx->pc != 0x4FDA3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4FDA3Cu;
label_4fda3c:
    // 0x4fda3c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x4fda3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_4fda40:
    // 0x4fda40: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_4fda44:
    if (ctx->pc == 0x4FDA44u) {
        ctx->pc = 0x4FDA48u;
        goto label_4fda48;
    }
    ctx->pc = 0x4FDA40u;
    {
        const bool branch_taken_0x4fda40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fda40) {
            ctx->pc = 0x4FDA64u;
            goto label_4fda64;
        }
    }
    ctx->pc = 0x4FDA48u;
label_4fda48:
    // 0x4fda48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4fda48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4fda4c:
    // 0x4fda4c: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x4fda4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_4fda50:
    // 0x4fda50: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_4fda54:
    if (ctx->pc == 0x4FDA54u) {
        ctx->pc = 0x4FDA54u;
            // 0x4fda54: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4FDA58u;
        goto label_4fda58;
    }
    ctx->pc = 0x4FDA50u;
    {
        const bool branch_taken_0x4fda50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FDA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDA50u;
            // 0x4fda54: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fda50) {
            ctx->pc = 0x4FDA64u;
            goto label_4fda64;
        }
    }
    ctx->pc = 0x4FDA58u;
label_4fda58:
    // 0x4fda58: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4fda58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4fda5c:
    // 0x4fda5c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4fda5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_4fda60:
    // 0x4fda60: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4fda60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4fda64:
    // 0x4fda64: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4fda64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4fda68:
    // 0x4fda68: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4fda68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4fda6c:
    // 0x4fda6c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4fda70:
    if (ctx->pc == 0x4FDA70u) {
        ctx->pc = 0x4FDA70u;
            // 0x4fda70: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FDA74u;
        goto label_4fda74;
    }
    ctx->pc = 0x4FDA6Cu;
    {
        const bool branch_taken_0x4fda6c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4fda6c) {
            ctx->pc = 0x4FDA70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDA6Cu;
            // 0x4fda70: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FDA80u;
            goto label_4fda80;
        }
    }
    ctx->pc = 0x4FDA74u;
label_4fda74:
    // 0x4fda74: 0xc0400a8  jal         func_1002A0
label_4fda78:
    if (ctx->pc == 0x4FDA78u) {
        ctx->pc = 0x4FDA78u;
            // 0x4fda78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FDA7Cu;
        goto label_4fda7c;
    }
    ctx->pc = 0x4FDA74u;
    SET_GPR_U32(ctx, 31, 0x4FDA7Cu);
    ctx->pc = 0x4FDA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDA74u;
            // 0x4fda78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDA7Cu; }
        if (ctx->pc != 0x4FDA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDA7Cu; }
        if (ctx->pc != 0x4FDA7Cu) { return; }
    }
    ctx->pc = 0x4FDA7Cu;
label_4fda7c:
    // 0x4fda7c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4fda7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4fda80:
    // 0x4fda80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4fda80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4fda84:
    // 0x4fda84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4fda84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4fda88:
    // 0x4fda88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4fda88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4fda8c:
    // 0x4fda8c: 0x3e00008  jr          $ra
label_4fda90:
    if (ctx->pc == 0x4FDA90u) {
        ctx->pc = 0x4FDA90u;
            // 0x4fda90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4FDA94u;
        goto label_4fda94;
    }
    ctx->pc = 0x4FDA8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FDA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDA8Cu;
            // 0x4fda90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FDA94u;
label_4fda94:
    // 0x4fda94: 0x0  nop
    ctx->pc = 0x4fda94u;
    // NOP
label_4fda98:
    // 0x4fda98: 0x0  nop
    ctx->pc = 0x4fda98u;
    // NOP
label_4fda9c:
    // 0x4fda9c: 0x0  nop
    ctx->pc = 0x4fda9cu;
    // NOP
label_4fdaa0:
    // 0x4fdaa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4fdaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4fdaa4:
    // 0x4fdaa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4fdaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4fdaa8:
    // 0x4fdaa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4fdaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4fdaac:
    // 0x4fdaac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4fdaacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4fdab0:
    // 0x4fdab0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4fdab0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4fdab4:
    // 0x4fdab4: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_4fdab8:
    if (ctx->pc == 0x4FDAB8u) {
        ctx->pc = 0x4FDAB8u;
            // 0x4fdab8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FDABCu;
        goto label_4fdabc;
    }
    ctx->pc = 0x4FDAB4u;
    {
        const bool branch_taken_0x4fdab4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FDAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDAB4u;
            // 0x4fdab8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fdab4) {
            ctx->pc = 0x4FDB14u;
            goto label_4fdb14;
        }
    }
    ctx->pc = 0x4FDABCu;
label_4fdabc:
    // 0x4fdabc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4fdabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4fdac0:
    // 0x4fdac0: 0x244245f0  addiu       $v0, $v0, 0x45F0
    ctx->pc = 0x4fdac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17904));
label_4fdac4:
    // 0x4fdac4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4fdac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4fdac8:
    // 0x4fdac8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4fdac8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4fdacc:
    // 0x4fdacc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4fdaccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4fdad0:
    // 0x4fdad0: 0x320f809  jalr        $t9
label_4fdad4:
    if (ctx->pc == 0x4FDAD4u) {
        ctx->pc = 0x4FDAD8u;
        goto label_4fdad8;
    }
    ctx->pc = 0x4FDAD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FDAD8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FDAD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FDAD8u; }
            if (ctx->pc != 0x4FDAD8u) { return; }
        }
        }
    }
    ctx->pc = 0x4FDAD8u;
label_4fdad8:
    // 0x4fdad8: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_4fdadc:
    if (ctx->pc == 0x4FDADCu) {
        ctx->pc = 0x4FDADCu;
            // 0x4fdadc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4FDAE0u;
        goto label_4fdae0;
    }
    ctx->pc = 0x4FDAD8u;
    {
        const bool branch_taken_0x4fdad8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fdad8) {
            ctx->pc = 0x4FDADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDAD8u;
            // 0x4fdadc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FDB00u;
            goto label_4fdb00;
        }
    }
    ctx->pc = 0x4FDAE0u;
label_4fdae0:
    // 0x4fdae0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4fdae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4fdae4:
    // 0x4fdae4: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x4fdae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_4fdae8:
    // 0x4fdae8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_4fdaec:
    if (ctx->pc == 0x4FDAECu) {
        ctx->pc = 0x4FDAECu;
            // 0x4fdaec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4FDAF0u;
        goto label_4fdaf0;
    }
    ctx->pc = 0x4FDAE8u;
    {
        const bool branch_taken_0x4fdae8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FDAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDAE8u;
            // 0x4fdaec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fdae8) {
            ctx->pc = 0x4FDAFCu;
            goto label_4fdafc;
        }
    }
    ctx->pc = 0x4FDAF0u;
label_4fdaf0:
    // 0x4fdaf0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4fdaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4fdaf4:
    // 0x4fdaf4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4fdaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_4fdaf8:
    // 0x4fdaf8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4fdaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4fdafc:
    // 0x4fdafc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4fdafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4fdb00:
    // 0x4fdb00: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4fdb00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4fdb04:
    // 0x4fdb04: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4fdb08:
    if (ctx->pc == 0x4FDB08u) {
        ctx->pc = 0x4FDB08u;
            // 0x4fdb08: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FDB0Cu;
        goto label_4fdb0c;
    }
    ctx->pc = 0x4FDB04u;
    {
        const bool branch_taken_0x4fdb04 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4fdb04) {
            ctx->pc = 0x4FDB08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDB04u;
            // 0x4fdb08: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FDB18u;
            goto label_4fdb18;
        }
    }
    ctx->pc = 0x4FDB0Cu;
label_4fdb0c:
    // 0x4fdb0c: 0xc0400a8  jal         func_1002A0
label_4fdb10:
    if (ctx->pc == 0x4FDB10u) {
        ctx->pc = 0x4FDB10u;
            // 0x4fdb10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FDB14u;
        goto label_4fdb14;
    }
    ctx->pc = 0x4FDB0Cu;
    SET_GPR_U32(ctx, 31, 0x4FDB14u);
    ctx->pc = 0x4FDB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDB0Cu;
            // 0x4fdb10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDB14u; }
        if (ctx->pc != 0x4FDB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDB14u; }
        if (ctx->pc != 0x4FDB14u) { return; }
    }
    ctx->pc = 0x4FDB14u;
label_4fdb14:
    // 0x4fdb14: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4fdb14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4fdb18:
    // 0x4fdb18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4fdb18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4fdb1c:
    // 0x4fdb1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4fdb1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4fdb20:
    // 0x4fdb20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4fdb20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4fdb24:
    // 0x4fdb24: 0x3e00008  jr          $ra
label_4fdb28:
    if (ctx->pc == 0x4FDB28u) {
        ctx->pc = 0x4FDB28u;
            // 0x4fdb28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4FDB2Cu;
        goto label_4fdb2c;
    }
    ctx->pc = 0x4FDB24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FDB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDB24u;
            // 0x4fdb28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FDB2Cu;
label_4fdb2c:
    // 0x4fdb2c: 0x0  nop
    ctx->pc = 0x4fdb2cu;
    // NOP
}
