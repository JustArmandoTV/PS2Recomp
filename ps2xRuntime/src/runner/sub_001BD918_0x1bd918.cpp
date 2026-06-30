#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BD918
// Address: 0x1bd918 - 0x1bdb30
void sub_001BD918_0x1bd918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD918_0x1bd918");
#endif

    switch (ctx->pc) {
        case 0x1bd918u: goto label_1bd918;
        case 0x1bd91cu: goto label_1bd91c;
        case 0x1bd920u: goto label_1bd920;
        case 0x1bd924u: goto label_1bd924;
        case 0x1bd928u: goto label_1bd928;
        case 0x1bd92cu: goto label_1bd92c;
        case 0x1bd930u: goto label_1bd930;
        case 0x1bd934u: goto label_1bd934;
        case 0x1bd938u: goto label_1bd938;
        case 0x1bd93cu: goto label_1bd93c;
        case 0x1bd940u: goto label_1bd940;
        case 0x1bd944u: goto label_1bd944;
        case 0x1bd948u: goto label_1bd948;
        case 0x1bd94cu: goto label_1bd94c;
        case 0x1bd950u: goto label_1bd950;
        case 0x1bd954u: goto label_1bd954;
        case 0x1bd958u: goto label_1bd958;
        case 0x1bd95cu: goto label_1bd95c;
        case 0x1bd960u: goto label_1bd960;
        case 0x1bd964u: goto label_1bd964;
        case 0x1bd968u: goto label_1bd968;
        case 0x1bd96cu: goto label_1bd96c;
        case 0x1bd970u: goto label_1bd970;
        case 0x1bd974u: goto label_1bd974;
        case 0x1bd978u: goto label_1bd978;
        case 0x1bd97cu: goto label_1bd97c;
        case 0x1bd980u: goto label_1bd980;
        case 0x1bd984u: goto label_1bd984;
        case 0x1bd988u: goto label_1bd988;
        case 0x1bd98cu: goto label_1bd98c;
        case 0x1bd990u: goto label_1bd990;
        case 0x1bd994u: goto label_1bd994;
        case 0x1bd998u: goto label_1bd998;
        case 0x1bd99cu: goto label_1bd99c;
        case 0x1bd9a0u: goto label_1bd9a0;
        case 0x1bd9a4u: goto label_1bd9a4;
        case 0x1bd9a8u: goto label_1bd9a8;
        case 0x1bd9acu: goto label_1bd9ac;
        case 0x1bd9b0u: goto label_1bd9b0;
        case 0x1bd9b4u: goto label_1bd9b4;
        case 0x1bd9b8u: goto label_1bd9b8;
        case 0x1bd9bcu: goto label_1bd9bc;
        case 0x1bd9c0u: goto label_1bd9c0;
        case 0x1bd9c4u: goto label_1bd9c4;
        case 0x1bd9c8u: goto label_1bd9c8;
        case 0x1bd9ccu: goto label_1bd9cc;
        case 0x1bd9d0u: goto label_1bd9d0;
        case 0x1bd9d4u: goto label_1bd9d4;
        case 0x1bd9d8u: goto label_1bd9d8;
        case 0x1bd9dcu: goto label_1bd9dc;
        case 0x1bd9e0u: goto label_1bd9e0;
        case 0x1bd9e4u: goto label_1bd9e4;
        case 0x1bd9e8u: goto label_1bd9e8;
        case 0x1bd9ecu: goto label_1bd9ec;
        case 0x1bd9f0u: goto label_1bd9f0;
        case 0x1bd9f4u: goto label_1bd9f4;
        case 0x1bd9f8u: goto label_1bd9f8;
        case 0x1bd9fcu: goto label_1bd9fc;
        case 0x1bda00u: goto label_1bda00;
        case 0x1bda04u: goto label_1bda04;
        case 0x1bda08u: goto label_1bda08;
        case 0x1bda0cu: goto label_1bda0c;
        case 0x1bda10u: goto label_1bda10;
        case 0x1bda14u: goto label_1bda14;
        case 0x1bda18u: goto label_1bda18;
        case 0x1bda1cu: goto label_1bda1c;
        case 0x1bda20u: goto label_1bda20;
        case 0x1bda24u: goto label_1bda24;
        case 0x1bda28u: goto label_1bda28;
        case 0x1bda2cu: goto label_1bda2c;
        case 0x1bda30u: goto label_1bda30;
        case 0x1bda34u: goto label_1bda34;
        case 0x1bda38u: goto label_1bda38;
        case 0x1bda3cu: goto label_1bda3c;
        case 0x1bda40u: goto label_1bda40;
        case 0x1bda44u: goto label_1bda44;
        case 0x1bda48u: goto label_1bda48;
        case 0x1bda4cu: goto label_1bda4c;
        case 0x1bda50u: goto label_1bda50;
        case 0x1bda54u: goto label_1bda54;
        case 0x1bda58u: goto label_1bda58;
        case 0x1bda5cu: goto label_1bda5c;
        case 0x1bda60u: goto label_1bda60;
        case 0x1bda64u: goto label_1bda64;
        case 0x1bda68u: goto label_1bda68;
        case 0x1bda6cu: goto label_1bda6c;
        case 0x1bda70u: goto label_1bda70;
        case 0x1bda74u: goto label_1bda74;
        case 0x1bda78u: goto label_1bda78;
        case 0x1bda7cu: goto label_1bda7c;
        case 0x1bda80u: goto label_1bda80;
        case 0x1bda84u: goto label_1bda84;
        case 0x1bda88u: goto label_1bda88;
        case 0x1bda8cu: goto label_1bda8c;
        case 0x1bda90u: goto label_1bda90;
        case 0x1bda94u: goto label_1bda94;
        case 0x1bda98u: goto label_1bda98;
        case 0x1bda9cu: goto label_1bda9c;
        case 0x1bdaa0u: goto label_1bdaa0;
        case 0x1bdaa4u: goto label_1bdaa4;
        case 0x1bdaa8u: goto label_1bdaa8;
        case 0x1bdaacu: goto label_1bdaac;
        case 0x1bdab0u: goto label_1bdab0;
        case 0x1bdab4u: goto label_1bdab4;
        case 0x1bdab8u: goto label_1bdab8;
        case 0x1bdabcu: goto label_1bdabc;
        case 0x1bdac0u: goto label_1bdac0;
        case 0x1bdac4u: goto label_1bdac4;
        case 0x1bdac8u: goto label_1bdac8;
        case 0x1bdaccu: goto label_1bdacc;
        case 0x1bdad0u: goto label_1bdad0;
        case 0x1bdad4u: goto label_1bdad4;
        case 0x1bdad8u: goto label_1bdad8;
        case 0x1bdadcu: goto label_1bdadc;
        case 0x1bdae0u: goto label_1bdae0;
        case 0x1bdae4u: goto label_1bdae4;
        case 0x1bdae8u: goto label_1bdae8;
        case 0x1bdaecu: goto label_1bdaec;
        case 0x1bdaf0u: goto label_1bdaf0;
        case 0x1bdaf4u: goto label_1bdaf4;
        case 0x1bdaf8u: goto label_1bdaf8;
        case 0x1bdafcu: goto label_1bdafc;
        case 0x1bdb00u: goto label_1bdb00;
        case 0x1bdb04u: goto label_1bdb04;
        case 0x1bdb08u: goto label_1bdb08;
        case 0x1bdb0cu: goto label_1bdb0c;
        case 0x1bdb10u: goto label_1bdb10;
        case 0x1bdb14u: goto label_1bdb14;
        case 0x1bdb18u: goto label_1bdb18;
        case 0x1bdb1cu: goto label_1bdb1c;
        case 0x1bdb20u: goto label_1bdb20;
        case 0x1bdb24u: goto label_1bdb24;
        case 0x1bdb28u: goto label_1bdb28;
        case 0x1bdb2cu: goto label_1bdb2c;
        default: break;
    }

    ctx->pc = 0x1bd918u;

label_1bd918:
    // 0x1bd918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bd918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bd91c:
    // 0x1bd91c: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1bd91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1bd920:
    // 0x1bd920: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bd920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bd924:
    // 0x1bd924: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1bd924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bd928:
    // 0x1bd928: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bd928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1bd92c:
    // 0x1bd92c: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x1bd92cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1bd930:
    // 0x1bd930: 0x10c3001d  beq         $a2, $v1, . + 4 + (0x1D << 2)
label_1bd934:
    if (ctx->pc == 0x1BD934u) {
        ctx->pc = 0x1BD934u;
            // 0x1bd934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD938u;
        goto label_1bd938;
    }
    ctx->pc = 0x1BD930u;
    {
        const bool branch_taken_0x1bd930 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BD934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD930u;
            // 0x1bd934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd930) {
            ctx->pc = 0x1BD9A8u;
            goto label_1bd9a8;
        }
    }
    ctx->pc = 0x1BD938u;
label_1bd938:
    // 0x1bd938: 0x14c5001b  bne         $a2, $a1, . + 4 + (0x1B << 2)
label_1bd93c:
    if (ctx->pc == 0x1BD93Cu) {
        ctx->pc = 0x1BD93Cu;
            // 0x1bd93c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD940u;
        goto label_1bd940;
    }
    ctx->pc = 0x1BD938u;
    {
        const bool branch_taken_0x1bd938 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x1BD93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD938u;
            // 0x1bd93c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd938) {
            ctx->pc = 0x1BD9A8u;
            goto label_1bd9a8;
        }
    }
    ctx->pc = 0x1BD940u;
label_1bd940:
    // 0x1bd940: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x1bd940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1bd944:
    // 0x1bd944: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1bd948:
    if (ctx->pc == 0x1BD948u) {
        ctx->pc = 0x1BD948u;
            // 0x1bd948: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x1BD94Cu;
        goto label_1bd94c;
    }
    ctx->pc = 0x1BD944u;
    {
        const bool branch_taken_0x1bd944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD944u;
            // 0x1bd948: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd944) {
            ctx->pc = 0x1BD980u;
            goto label_1bd980;
        }
    }
    ctx->pc = 0x1BD94Cu;
label_1bd94c:
    // 0x1bd94c: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x1bd94cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1bd950:
    // 0x1bd950: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_1bd954:
    if (ctx->pc == 0x1BD954u) {
        ctx->pc = 0x1BD954u;
            // 0x1bd954: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD958u;
        goto label_1bd958;
    }
    ctx->pc = 0x1BD950u;
    {
        const bool branch_taken_0x1bd950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd950) {
            ctx->pc = 0x1BD954u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD950u;
            // 0x1bd954: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD9A4u;
            goto label_1bd9a4;
        }
    }
    ctx->pc = 0x1BD958u;
label_1bd958:
    // 0x1bd958: 0x50b00012  beql        $a1, $s0, . + 4 + (0x12 << 2)
label_1bd95c:
    if (ctx->pc == 0x1BD95Cu) {
        ctx->pc = 0x1BD95Cu;
            // 0x1bd95c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD960u;
        goto label_1bd960;
    }
    ctx->pc = 0x1BD958u;
    {
        const bool branch_taken_0x1bd958 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        if (branch_taken_0x1bd958) {
            ctx->pc = 0x1BD95Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD958u;
            // 0x1bd95c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD9A4u;
            goto label_1bd9a4;
        }
    }
    ctx->pc = 0x1BD960u;
label_1bd960:
    // 0x1bd960: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
label_1bd964:
    if (ctx->pc == 0x1BD964u) {
        ctx->pc = 0x1BD964u;
            // 0x1bd964: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD968u;
        goto label_1bd968;
    }
    ctx->pc = 0x1BD960u;
    {
        const bool branch_taken_0x1bd960 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD960u;
            // 0x1bd964: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd960) {
            ctx->pc = 0x1BD9A8u;
            goto label_1bd9a8;
        }
    }
    ctx->pc = 0x1BD968u;
label_1bd968:
    // 0x1bd968: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bd968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bd96c:
    // 0x1bd96c: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_1bd970:
    if (ctx->pc == 0x1BD970u) {
        ctx->pc = 0x1BD970u;
            // 0x1bd970: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD974u;
        goto label_1bd974;
    }
    ctx->pc = 0x1BD96Cu;
    {
        const bool branch_taken_0x1bd96c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD96Cu;
            // 0x1bd970: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd96c) {
            ctx->pc = 0x1BD990u;
            goto label_1bd990;
        }
    }
    ctx->pc = 0x1BD974u;
label_1bd974:
    // 0x1bd974: 0x1000000d  b           . + 4 + (0xD << 2)
label_1bd978:
    if (ctx->pc == 0x1BD978u) {
        ctx->pc = 0x1BD978u;
            // 0x1bd978: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1BD97Cu;
        goto label_1bd97c;
    }
    ctx->pc = 0x1BD974u;
    {
        const bool branch_taken_0x1bd974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD974u;
            // 0x1bd978: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd974) {
            ctx->pc = 0x1BD9ACu;
            goto label_1bd9ac;
        }
    }
    ctx->pc = 0x1BD97Cu;
label_1bd97c:
    // 0x1bd97c: 0x0  nop
    ctx->pc = 0x1bd97cu;
    // NOP
label_1bd980:
    // 0x1bd980: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
label_1bd984:
    if (ctx->pc == 0x1BD984u) {
        ctx->pc = 0x1BD984u;
            // 0x1bd984: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD988u;
        goto label_1bd988;
    }
    ctx->pc = 0x1BD980u;
    {
        const bool branch_taken_0x1bd980 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD980u;
            // 0x1bd984: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd980) {
            ctx->pc = 0x1BD9A0u;
            goto label_1bd9a0;
        }
    }
    ctx->pc = 0x1BD988u;
label_1bd988:
    // 0x1bd988: 0x10000008  b           . + 4 + (0x8 << 2)
label_1bd98c:
    if (ctx->pc == 0x1BD98Cu) {
        ctx->pc = 0x1BD98Cu;
            // 0x1bd98c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1BD990u;
        goto label_1bd990;
    }
    ctx->pc = 0x1BD988u;
    {
        const bool branch_taken_0x1bd988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD988u;
            // 0x1bd98c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd988) {
            ctx->pc = 0x1BD9ACu;
            goto label_1bd9ac;
        }
    }
    ctx->pc = 0x1BD990u;
label_1bd990:
    // 0x1bd990: 0xc06f55c  jal         func_1BD570
label_1bd994:
    if (ctx->pc == 0x1BD994u) {
        ctx->pc = 0x1BD994u;
            // 0x1bd994: 0x8c840030  lw          $a0, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->pc = 0x1BD998u;
        goto label_1bd998;
    }
    ctx->pc = 0x1BD990u;
    SET_GPR_U32(ctx, 31, 0x1BD998u);
    ctx->pc = 0x1BD994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD990u;
            // 0x1bd994: 0x8c840030  lw          $a0, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD570u;
    if (runtime->hasFunction(0x1BD570u)) {
        auto targetFn = runtime->lookupFunction(0x1BD570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD998u; }
        if (ctx->pc != 0x1BD998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD570_0x1bd570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD998u; }
        if (ctx->pc != 0x1BD998u) { return; }
    }
    ctx->pc = 0x1BD998u;
label_1bd998:
    // 0x1bd998: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
label_1bd99c:
    if (ctx->pc == 0x1BD99Cu) {
        ctx->pc = 0x1BD99Cu;
            // 0x1bd99c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD9A0u;
        goto label_1bd9a0;
    }
    ctx->pc = 0x1BD998u;
    {
        const bool branch_taken_0x1bd998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1BD99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD998u;
            // 0x1bd99c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd998) {
            ctx->pc = 0x1BD9A8u;
            goto label_1bd9a8;
        }
    }
    ctx->pc = 0x1BD9A0u;
label_1bd9a0:
    // 0x1bd9a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bd9a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd9a4:
    // 0x1bd9a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bd9a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bd9a8:
    // 0x1bd9a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bd9a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bd9ac:
    // 0x1bd9ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bd9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bd9b0:
    // 0x1bd9b0: 0x3e00008  jr          $ra
label_1bd9b4:
    if (ctx->pc == 0x1BD9B4u) {
        ctx->pc = 0x1BD9B4u;
            // 0x1bd9b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BD9B8u;
        goto label_1bd9b8;
    }
    ctx->pc = 0x1BD9B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD9B0u;
            // 0x1bd9b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD9B8u;
label_1bd9b8:
    // 0x1bd9b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bd9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bd9bc:
    // 0x1bd9bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bd9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1bd9c0:
    // 0x1bd9c0: 0x8c860038  lw          $a2, 0x38($a0)
    ctx->pc = 0x1bd9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_1bd9c4:
    // 0x1bd9c4: 0x8ca5004c  lw          $a1, 0x4C($a1)
    ctx->pc = 0x1bd9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_1bd9c8:
    // 0x1bd9c8: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x1bd9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1bd9cc:
    // 0x1bd9cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bd9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bd9d0:
    // 0x1bd9d0: 0x806fca2  j           func_1BF288
label_1bd9d4:
    if (ctx->pc == 0x1BD9D4u) {
        ctx->pc = 0x1BD9D4u;
            // 0x1bd9d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BD9D8u;
        goto label_1bd9d8;
    }
    ctx->pc = 0x1BD9D0u;
    ctx->pc = 0x1BD9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD9D0u;
            // 0x1bd9d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF288u;
    {
        auto targetFn = runtime->lookupFunction(0x1BF288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BD9D8u;
label_1bd9d8:
    // 0x1bd9d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bd9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bd9dc:
    // 0x1bd9dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bd9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1bd9e0:
    // 0x1bd9e0: 0x8c840038  lw          $a0, 0x38($a0)
    ctx->pc = 0x1bd9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_1bd9e4:
    // 0x1bd9e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bd9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bd9e8:
    // 0x1bd9e8: 0x806f67c  j           func_1BD9F0
label_1bd9ec:
    if (ctx->pc == 0x1BD9ECu) {
        ctx->pc = 0x1BD9ECu;
            // 0x1bd9ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BD9F0u;
        goto label_1bd9f0;
    }
    ctx->pc = 0x1BD9E8u;
    ctx->pc = 0x1BD9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD9E8u;
            // 0x1bd9ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD9F0u;
    goto label_1bd9f0;
    ctx->pc = 0x1BD9F0u;
label_1bd9f0:
    // 0x1bd9f0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1bd9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1bd9f4:
    // 0x1bd9f4: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x1bd9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_1bd9f8:
    // 0x1bd9f8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1bd9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1bd9fc:
    // 0x1bd9fc: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1bd9fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1bda00:
    // 0x1bda00: 0x0  nop
    ctx->pc = 0x1bda00u;
    // NOP
label_1bda04:
    // 0x1bda04: 0x0  nop
    ctx->pc = 0x1bda04u;
    // NOP
label_1bda08:
    // 0x1bda08: 0x0  nop
    ctx->pc = 0x1bda08u;
    // NOP
label_1bda0c:
    // 0x1bda0c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
label_1bda10:
    if (ctx->pc == 0x1BDA10u) {
        ctx->pc = 0x1BDA10u;
            // 0x1bda10: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x1BDA14u;
        goto label_1bda14;
    }
    ctx->pc = 0x1BDA0Cu;
    {
        const bool branch_taken_0x1bda0c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1BDA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDA0Cu;
            // 0x1bda10: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bda0c) {
            ctx->pc = 0x1BD9F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bd9f8;
        }
    }
    ctx->pc = 0x1BDA14u;
label_1bda14:
    // 0x1bda14: 0x3c013f14  lui         $at, 0x3F14
    ctx->pc = 0x1bda14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16148 << 16));
label_1bda18:
    // 0x1bda18: 0x3421fdf3  ori         $at, $at, 0xFDF3
    ctx->pc = 0x1bda18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65011);
label_1bda1c:
    // 0x1bda1c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bda1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bda20:
    // 0x1bda20: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1bda20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1bda24:
    // 0x1bda24: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x1bda24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
label_1bda28:
    // 0x1bda28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bda28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bda2c:
    // 0x1bda2c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x1bda2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_1bda30:
    // 0x1bda30: 0x24a2fff0  addiu       $v0, $a1, -0x10
    ctx->pc = 0x1bda30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
label_1bda34:
    // 0x1bda34: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x1bda34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1bda38:
    // 0x1bda38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bda38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bda3c:
    // 0x1bda3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bda3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1bda40:
    // 0x1bda40: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1bda40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1bda44:
    // 0x1bda44: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1bda44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1bda48:
    // 0x1bda48: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bda48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bda4c:
    // 0x1bda4c: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bda4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_1bda50:
    // 0x1bda50: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x1bda50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1bda54:
    // 0x1bda54: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1bda58:
    if (ctx->pc == 0x1BDA58u) {
        ctx->pc = 0x1BDA58u;
            // 0x1bda58: 0x28a300ec  slti        $v1, $a1, 0xEC (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)236) ? 1 : 0);
        ctx->pc = 0x1BDA5Cu;
        goto label_1bda5c;
    }
    ctx->pc = 0x1BDA54u;
    {
        const bool branch_taken_0x1bda54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BDA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDA54u;
            // 0x1bda58: 0x28a300ec  slti        $v1, $a1, 0xEC (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)236) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bda54) {
            ctx->pc = 0x1BDA6Cu;
            goto label_1bda6c;
        }
    }
    ctx->pc = 0x1BDA5Cu;
label_1bda5c:
    // 0x1bda5c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bda5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1bda60:
    // 0x1bda60: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bda60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_1bda64:
    // 0x1bda64: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x1bda64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1bda68:
    // 0x1bda68: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1bda68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_1bda6c:
    // 0x1bda6c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_1bda70:
    if (ctx->pc == 0x1BDA70u) {
        ctx->pc = 0x1BDA70u;
            // 0x1bda70: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1BDA74u;
        goto label_1bda74;
    }
    ctx->pc = 0x1BDA6Cu;
    {
        const bool branch_taken_0x1bda6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDA6Cu;
            // 0x1bda70: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bda6c) {
            ctx->pc = 0x1BDA30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bda30;
        }
    }
    ctx->pc = 0x1BDA74u;
label_1bda74:
    // 0x1bda74: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x1bda74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_1bda78:
    // 0x1bda78: 0x2406ff80  addiu       $a2, $zero, -0x80
    ctx->pc = 0x1bda78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
label_1bda7c:
    // 0x1bda7c: 0x0  nop
    ctx->pc = 0x1bda7cu;
    // NOP
label_1bda80:
    // 0x1bda80: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1bda80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1bda84:
    // 0x1bda84: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1bda84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1bda88:
    // 0x1bda88: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x1bda88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
label_1bda8c:
    // 0x1bda8c: 0x0  nop
    ctx->pc = 0x1bda8cu;
    // NOP
label_1bda90:
    // 0x1bda90: 0x0  nop
    ctx->pc = 0x1bda90u;
    // NOP
label_1bda94:
    // 0x1bda94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1bda98:
    if (ctx->pc == 0x1BDA98u) {
        ctx->pc = 0x1BDA98u;
            // 0x1bda98: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->pc = 0x1BDA9Cu;
        goto label_1bda9c;
    }
    ctx->pc = 0x1BDA94u;
    {
        const bool branch_taken_0x1bda94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDA94u;
            // 0x1bda98: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bda94) {
            ctx->pc = 0x1BDA80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bda80;
        }
    }
    ctx->pc = 0x1BDA9Cu;
label_1bda9c:
    // 0x1bda9c: 0x3e00008  jr          $ra
label_1bdaa0:
    if (ctx->pc == 0x1BDAA0u) {
        ctx->pc = 0x1BDAA4u;
        goto label_1bdaa4;
    }
    ctx->pc = 0x1BDA9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BDAA4u;
label_1bdaa4:
    // 0x1bdaa4: 0x0  nop
    ctx->pc = 0x1bdaa4u;
    // NOP
label_1bdaa8:
    // 0x1bdaa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bdaa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bdaac:
    // 0x1bdaac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bdaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1bdab0:
    // 0x1bdab0: 0x8c860038  lw          $a2, 0x38($a0)
    ctx->pc = 0x1bdab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_1bdab4:
    // 0x1bdab4: 0x8ca5004c  lw          $a1, 0x4C($a1)
    ctx->pc = 0x1bdab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_1bdab8:
    // 0x1bdab8: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x1bdab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1bdabc:
    // 0x1bdabc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bdabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bdac0:
    // 0x1bdac0: 0x806f52e  j           func_1BD4B8
label_1bdac4:
    if (ctx->pc == 0x1BDAC4u) {
        ctx->pc = 0x1BDAC4u;
            // 0x1bdac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BDAC8u;
        goto label_1bdac8;
    }
    ctx->pc = 0x1BDAC0u;
    ctx->pc = 0x1BDAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDAC0u;
            // 0x1bdac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD4B8u;
    {
        auto targetFn = runtime->lookupFunction(0x1BD4B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BDAC8u;
label_1bdac8:
    // 0x1bdac8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bdac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bdacc:
    // 0x1bdacc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bdaccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1bdad0:
    // 0x1bdad0: 0x8c860038  lw          $a2, 0x38($a0)
    ctx->pc = 0x1bdad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_1bdad4:
    // 0x1bdad4: 0x8ca5004c  lw          $a1, 0x4C($a1)
    ctx->pc = 0x1bdad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_1bdad8:
    // 0x1bdad8: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x1bdad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1bdadc:
    // 0x1bdadc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bdadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bdae0:
    // 0x1bdae0: 0x806f540  j           func_1BD500
label_1bdae4:
    if (ctx->pc == 0x1BDAE4u) {
        ctx->pc = 0x1BDAE4u;
            // 0x1bdae4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BDAE8u;
        goto label_1bdae8;
    }
    ctx->pc = 0x1BDAE0u;
    ctx->pc = 0x1BDAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDAE0u;
            // 0x1bdae4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD500u;
    {
        auto targetFn = runtime->lookupFunction(0x1BD500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BDAE8u;
label_1bdae8:
    // 0x1bdae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bdae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bdaec:
    // 0x1bdaec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bdaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1bdaf0:
    // 0x1bdaf0: 0x8c860038  lw          $a2, 0x38($a0)
    ctx->pc = 0x1bdaf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_1bdaf4:
    // 0x1bdaf4: 0x8ca5004c  lw          $a1, 0x4C($a1)
    ctx->pc = 0x1bdaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_1bdaf8:
    // 0x1bdaf8: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x1bdaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1bdafc:
    // 0x1bdafc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bdafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bdb00:
    // 0x1bdb00: 0x806f54e  j           func_1BD538
label_1bdb04:
    if (ctx->pc == 0x1BDB04u) {
        ctx->pc = 0x1BDB04u;
            // 0x1bdb04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BDB08u;
        goto label_1bdb08;
    }
    ctx->pc = 0x1BDB00u;
    ctx->pc = 0x1BDB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDB00u;
            // 0x1bdb04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD538u;
    {
        auto targetFn = runtime->lookupFunction(0x1BD538u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BDB08u;
label_1bdb08:
    // 0x1bdb08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bdb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bdb0c:
    // 0x1bdb0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bdb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1bdb10:
    // 0x1bdb10: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x1bdb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_1bdb14:
    // 0x1bdb14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1bdb18:
    if (ctx->pc == 0x1BDB18u) {
        ctx->pc = 0x1BDB18u;
            // 0x1bdb18: 0x8c840038  lw          $a0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->pc = 0x1BDB1Cu;
        goto label_1bdb1c;
    }
    ctx->pc = 0x1BDB14u;
    {
        const bool branch_taken_0x1bdb14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDB14u;
            // 0x1bdb18: 0x8c840038  lw          $a0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdb14) {
            ctx->pc = 0x1BDB24u;
            goto label_1bdb24;
        }
    }
    ctx->pc = 0x1BDB1Cu;
label_1bdb1c:
    // 0x1bdb1c: 0x40f809  jalr        $v0
label_1bdb20:
    if (ctx->pc == 0x1BDB20u) {
        ctx->pc = 0x1BDB24u;
        goto label_1bdb24;
    }
    ctx->pc = 0x1BDB1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BDB24u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BDB24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB24u; }
            if (ctx->pc != 0x1BDB24u) { return; }
        }
        }
    }
    ctx->pc = 0x1BDB24u;
label_1bdb24:
    // 0x1bdb24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bdb24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bdb28:
    // 0x1bdb28: 0x3e00008  jr          $ra
label_1bdb2c:
    if (ctx->pc == 0x1BDB2Cu) {
        ctx->pc = 0x1BDB2Cu;
            // 0x1bdb2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BDB30u;
        goto label_fallthrough_0x1bdb28;
    }
    ctx->pc = 0x1BDB28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDB28u;
            // 0x1bdb2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1bdb28:
    ctx->pc = 0x1BDB30u;
}
