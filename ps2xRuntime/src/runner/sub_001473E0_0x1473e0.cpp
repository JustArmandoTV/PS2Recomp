#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001473E0
// Address: 0x1473e0 - 0x1476e0
void sub_001473E0_0x1473e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001473E0_0x1473e0");
#endif

    ctx->pc = 0x1473e0u;

    // 0x1473e0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1473e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1473e4: 0x3083000c  andi        $v1, $a0, 0xC
    ctx->pc = 0x1473e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x1473e8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1473e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1473ec: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1473ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1473f0: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x1473f0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x1473f4: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x1473f4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x1473f8: 0x106000b4  beqz        $v1, . + 4 + (0xB4 << 2)
    ctx->pc = 0x1473F8u;
    {
        const bool branch_taken_0x1473f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1473FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1473F8u;
            // 0x1473fc: 0xad600000  sw          $zero, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1473f8) {
            ctx->pc = 0x1476CCu;
            goto label_1476cc;
        }
    }
    ctx->pc = 0x147400u;
    // 0x147400: 0x30830100  andi        $v1, $a0, 0x100
    ctx->pc = 0x147400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x147404: 0x5060005a  beql        $v1, $zero, . + 4 + (0x5A << 2)
    ctx->pc = 0x147404u;
    {
        const bool branch_taken_0x147404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x147404) {
            ctx->pc = 0x147408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x147404u;
            // 0x147408: 0x3083000f  andi        $v1, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
            ctx->pc = 0x147570u;
            goto label_147570;
        }
    }
    ctx->pc = 0x14740Cu;
    // 0x14740c: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x14740cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x147410: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x147410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x147414: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x147414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x147418: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x147418u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x14741c: 0x102000ab  beqz        $at, . + 4 + (0xAB << 2)
    ctx->pc = 0x14741Cu;
    {
        const bool branch_taken_0x14741c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x147420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14741Cu;
            // 0x147420: 0xad640000  sw          $a0, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14741c) {
            ctx->pc = 0x1476CCu;
            goto label_1476cc;
        }
    }
    ctx->pc = 0x147424u;
    // 0x147424: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x147424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x147428: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x147428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14742c: 0x248412e0  addiu       $a0, $a0, 0x12E0
    ctx->pc = 0x14742cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4832));
    // 0x147430: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x147430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x147434: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x147434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x147438: 0x600008  jr          $v1
    ctx->pc = 0x147438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x147440u: goto label_147440;
            case 0x147494u: goto label_147494;
            case 0x1474D4u: goto label_1474d4;
            case 0x147530u: goto label_147530;
            case 0x1476CCu: goto label_1476cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x147440u;
label_147440:
    // 0x147440: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x147440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x147444: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x147444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x147448: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x147448u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x14744c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14744cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x147450: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x147450u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x147454: 0x24870034  addiu       $a3, $a0, 0x34
    ctx->pc = 0x147454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x147458: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x147458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x14745c: 0x24640038  addiu       $a0, $v1, 0x38
    ctx->pc = 0x14745cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x147460: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x147460u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x147464: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x147464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x147468: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x147468u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x14746c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14746cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x147470: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x147470u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x147474: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x147474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x147478: 0x2484004b  addiu       $a0, $a0, 0x4B
    ctx->pc = 0x147478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 75));
    // 0x14747c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14747cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x147480: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x147480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x147484: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x147484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x147488: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x147488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14748c: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x14748Cu;
    {
        const bool branch_taken_0x14748c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14748Cu;
            // 0x147490: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14748c) {
            ctx->pc = 0x1476CCu;
            goto label_1476cc;
        }
    }
    ctx->pc = 0x147494u;
label_147494:
    // 0x147494: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x147494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x147498: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x147498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x14749c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x14749cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1474a0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1474a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1474a4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1474a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1474a8: 0x24870034  addiu       $a3, $a0, 0x34
    ctx->pc = 0x1474a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x1474ac: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1474acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1474b0: 0x24640038  addiu       $a0, $v1, 0x38
    ctx->pc = 0x1474b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x1474b4: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x1474b4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
    // 0x1474b8: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x1474b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1474bc: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x1474bcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x1474c0: 0x2464004b  addiu       $a0, $v1, 0x4B
    ctx->pc = 0x1474c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 75));
    // 0x1474c4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1474c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1474c8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1474c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1474cc: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x1474CCu;
    {
        const bool branch_taken_0x1474cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1474D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1474CCu;
            // 0x1474d0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1474cc) {
            ctx->pc = 0x1476CCu;
            goto label_1476cc;
        }
    }
    ctx->pc = 0x1474D4u;
label_1474d4:
    // 0x1474d4: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1474d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1474d8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1474d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1474dc: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1474dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1474e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1474e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1474e4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1474e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1474e8: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x1474e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1474ec: 0x33840  sll         $a3, $v1, 1
    ctx->pc = 0x1474ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1474f0: 0x24830034  addiu       $v1, $a0, 0x34
    ctx->pc = 0x1474f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x1474f4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1474f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x1474f8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1474f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1474fc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1474fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x147500: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x147500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x147504: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x147504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x147508: 0x2463004b  addiu       $v1, $v1, 0x4B
    ctx->pc = 0x147508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 75));
    // 0x14750c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x14750cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x147510: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x147510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x147514: 0x24a50038  addiu       $a1, $a1, 0x38
    ctx->pc = 0x147514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 56));
    // 0x147518: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x147518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x14751c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x14751cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x147520: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x147520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x147524: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x147524u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x147528: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x147528u;
    {
        const bool branch_taken_0x147528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14752Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147528u;
            // 0x14752c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147528) {
            ctx->pc = 0x1476CCu;
            goto label_1476cc;
        }
    }
    ctx->pc = 0x147530u;
label_147530:
    // 0x147530: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x147530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x147534: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x147534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x147538: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x147538u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x14753c: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x14753cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x147540: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x147540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x147544: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x147544u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x147548: 0x24850034  addiu       $a1, $a0, 0x34
    ctx->pc = 0x147548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x14754c: 0x24640038  addiu       $a0, $v1, 0x38
    ctx->pc = 0x14754cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x147550: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x147550u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x147554: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x147554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x147558: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x147558u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x14755c: 0x2464004b  addiu       $a0, $v1, 0x4B
    ctx->pc = 0x14755cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 75));
    // 0x147560: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x147560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x147564: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x147564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x147568: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x147568u;
    {
        const bool branch_taken_0x147568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14756Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147568u;
            // 0x14756c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147568) {
            ctx->pc = 0x1476CCu;
            goto label_1476cc;
        }
    }
    ctx->pc = 0x147570u;
label_147570:
    // 0x147570: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x147570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x147574: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x147574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147578: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x147578u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x14757c: 0x10200053  beqz        $at, . + 4 + (0x53 << 2)
    ctx->pc = 0x14757Cu;
    {
        const bool branch_taken_0x14757c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x147580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14757Cu;
            // 0x147580: 0xad640000  sw          $a0, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14757c) {
            ctx->pc = 0x1476CCu;
            goto label_1476cc;
        }
    }
    ctx->pc = 0x147584u;
    // 0x147584: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x147584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x147588: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x147588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14758c: 0x248412c0  addiu       $a0, $a0, 0x12C0
    ctx->pc = 0x14758cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4800));
    // 0x147590: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x147590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x147594: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x147594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x147598: 0x600008  jr          $v1
    ctx->pc = 0x147598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1475A0u: goto label_1475a0;
            case 0x1475E0u: goto label_1475e0;
            case 0x147620u: goto label_147620;
            case 0x147688u: goto label_147688;
            case 0x1476CCu: goto label_1476cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1475A0u;
label_1475a0:
    // 0x1475a0: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1475a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1475a4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1475a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1475a8: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1475a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1475ac: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x1475acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1475b0: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x1475b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1475b4: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1475b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1475b8: 0x24850034  addiu       $a1, $a0, 0x34
    ctx->pc = 0x1475b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x1475bc: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x1475bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1475c0: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x1475c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x1475c4: 0x24840038  addiu       $a0, $a0, 0x38
    ctx->pc = 0x1475c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x1475c8: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x1475c8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x1475cc: 0x2464004b  addiu       $a0, $v1, 0x4B
    ctx->pc = 0x1475ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 75));
    // 0x1475d0: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1475d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1475d4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1475d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1475d8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1475D8u;
    {
        const bool branch_taken_0x1475d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1475DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1475D8u;
            // 0x1475dc: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1475d8) {
            ctx->pc = 0x1476CCu;
            goto label_1476cc;
        }
    }
    ctx->pc = 0x1475E0u;
label_1475e0:
    // 0x1475e0: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1475e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1475e4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1475e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1475e8: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1475e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1475ec: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x1475ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1475f0: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1475f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1475f4: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1475f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1475f8: 0x24850034  addiu       $a1, $a0, 0x34
    ctx->pc = 0x1475f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x1475fc: 0x24640038  addiu       $a0, $v1, 0x38
    ctx->pc = 0x1475fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x147600: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x147600u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x147604: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x147604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x147608: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x147608u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x14760c: 0x2464004b  addiu       $a0, $v1, 0x4B
    ctx->pc = 0x14760cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 75));
    // 0x147610: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x147610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x147614: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x147614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x147618: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x147618u;
    {
        const bool branch_taken_0x147618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14761Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147618u;
            // 0x14761c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147618) {
            ctx->pc = 0x1476CCu;
            goto label_1476cc;
        }
    }
    ctx->pc = 0x147620u;
label_147620:
    // 0x147620: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x147620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x147624: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x147624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x147628: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x147628u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x14762c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14762cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x147630: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x147630u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x147634: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x147634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x147638: 0x24840034  addiu       $a0, $a0, 0x34
    ctx->pc = 0x147638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x14763c: 0x33840  sll         $a3, $v1, 1
    ctx->pc = 0x14763cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x147640: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x147640u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x147644: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x147644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x147648: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x147648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14764c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x14764cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x147650: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x147650u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x147654: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x147654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x147658: 0x24840038  addiu       $a0, $a0, 0x38
    ctx->pc = 0x147658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x14765c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14765cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x147660: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x147660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x147664: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x147664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x147668: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x147668u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x14766c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14766cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x147670: 0x2464004b  addiu       $a0, $v1, 0x4B
    ctx->pc = 0x147670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 75));
    // 0x147674: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x147674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x147678: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x147678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x14767c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14767cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x147680: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x147680u;
    {
        const bool branch_taken_0x147680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147680u;
            // 0x147684: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147680) {
            ctx->pc = 0x1476CCu;
            goto label_1476cc;
        }
    }
    ctx->pc = 0x147688u;
label_147688:
    // 0x147688: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x147688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x14768c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x14768cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x147690: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x147690u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x147694: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x147694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x147698: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x147698u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14769c: 0x24870034  addiu       $a3, $a0, 0x34
    ctx->pc = 0x14769cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x1476a0: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1476a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1476a4: 0x24640038  addiu       $a0, $v1, 0x38
    ctx->pc = 0x1476a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x1476a8: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x1476a8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
    // 0x1476ac: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1476acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1476b0: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x1476b0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x1476b4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1476b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1476b8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1476b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1476bc: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1476bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1476c0: 0x2484004b  addiu       $a0, $a0, 0x4B
    ctx->pc = 0x1476c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 75));
    // 0x1476c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1476c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1476c8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1476c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_1476cc:
    // 0x1476cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1476CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1476D4u;
    // 0x1476d4: 0x0  nop
    ctx->pc = 0x1476d4u;
    // NOP
    // 0x1476d8: 0x0  nop
    ctx->pc = 0x1476d8u;
    // NOP
    // 0x1476dc: 0x0  nop
    ctx->pc = 0x1476dcu;
    // NOP
}
