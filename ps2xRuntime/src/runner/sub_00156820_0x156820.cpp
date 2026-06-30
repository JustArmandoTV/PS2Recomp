#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00156820
// Address: 0x156820 - 0x157170
void sub_00156820_0x156820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156820_0x156820");
#endif

    ctx->pc = 0x156820u;

    // 0x156820: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x156820u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x156824: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x156824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x156828: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x156828u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x15682c: 0x836024  and         $t4, $a0, $v1
    ctx->pc = 0x15682cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x156830: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x156830u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x156834: 0x3c0301ac  lui         $v1, 0x1AC
    ctx->pc = 0x156834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)428 << 16));
    // 0x156838: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x156838u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x15683c: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x15683cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x156840: 0x1183020a  beq         $t4, $v1, . + 4 + (0x20A << 2)
    ctx->pc = 0x156840u;
    {
        const bool branch_taken_0x156840 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 3));
        ctx->pc = 0x156844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156840u;
            // 0x156844: 0xad600000  sw          $zero, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156840) {
            ctx->pc = 0x15706Cu;
            goto label_15706c;
        }
    }
    ctx->pc = 0x156848u;
    // 0x156848: 0x3c0301a4  lui         $v1, 0x1A4
    ctx->pc = 0x156848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)420 << 16));
    // 0x15684c: 0x518301de  beql        $t4, $v1, . + 4 + (0x1DE << 2)
    ctx->pc = 0x15684Cu;
    {
        const bool branch_taken_0x15684c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 3));
        if (branch_taken_0x15684c) {
            ctx->pc = 0x156850u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15684Cu;
            // 0x156850: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156FC8u;
            goto label_156fc8;
        }
    }
    ctx->pc = 0x156854u;
    // 0x156854: 0x3c03018c  lui         $v1, 0x18C
    ctx->pc = 0x156854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)396 << 16));
    // 0x156858: 0x518301a4  beql        $t4, $v1, . + 4 + (0x1A4 << 2)
    ctx->pc = 0x156858u;
    {
        const bool branch_taken_0x156858 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 3));
        if (branch_taken_0x156858) {
            ctx->pc = 0x15685Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156858u;
            // 0x15685c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156EECu;
            goto label_156eec;
        }
    }
    ctx->pc = 0x156860u;
    // 0x156860: 0x3c030184  lui         $v1, 0x184
    ctx->pc = 0x156860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)388 << 16));
    // 0x156864: 0x51830175  beql        $t4, $v1, . + 4 + (0x175 << 2)
    ctx->pc = 0x156864u;
    {
        const bool branch_taken_0x156864 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 3));
        if (branch_taken_0x156864) {
            ctx->pc = 0x156868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156864u;
            // 0x156868: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156E3Cu;
            goto label_156e3c;
        }
    }
    ctx->pc = 0x15686Cu;
    // 0x15686c: 0x3c0300ac  lui         $v1, 0xAC
    ctx->pc = 0x15686cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)172 << 16));
    // 0x156870: 0x51830133  beql        $t4, $v1, . + 4 + (0x133 << 2)
    ctx->pc = 0x156870u;
    {
        const bool branch_taken_0x156870 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 3));
        if (branch_taken_0x156870) {
            ctx->pc = 0x156874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156870u;
            // 0x156874: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156D40u;
            goto label_156d40;
        }
    }
    ctx->pc = 0x156878u;
    // 0x156878: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x156878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x15687c: 0x518300f7  beql        $t4, $v1, . + 4 + (0xF7 << 2)
    ctx->pc = 0x15687Cu;
    {
        const bool branch_taken_0x15687c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 3));
        if (branch_taken_0x15687c) {
            ctx->pc = 0x156880u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15687Cu;
            // 0x156880: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156C5Cu;
            goto label_156c5c;
        }
    }
    ctx->pc = 0x156884u;
    // 0x156884: 0x3c0300a4  lui         $v1, 0xA4
    ctx->pc = 0x156884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)164 << 16));
    // 0x156888: 0x518300c5  beql        $t4, $v1, . + 4 + (0xC5 << 2)
    ctx->pc = 0x156888u;
    {
        const bool branch_taken_0x156888 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 3));
        if (branch_taken_0x156888) {
            ctx->pc = 0x15688Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156888u;
            // 0x15688c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156BA0u;
            goto label_156ba0;
        }
    }
    ctx->pc = 0x156890u;
    // 0x156890: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x156890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x156894: 0x51830087  beql        $t4, $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x156894u;
    {
        const bool branch_taken_0x156894 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 3));
        if (branch_taken_0x156894) {
            ctx->pc = 0x156898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156894u;
            // 0x156898: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156AB4u;
            goto label_156ab4;
        }
    }
    ctx->pc = 0x15689Cu;
    // 0x15689c: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x15689cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x1568a0: 0x51830062  beql        $t4, $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x1568A0u;
    {
        const bool branch_taken_0x1568a0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 3));
        if (branch_taken_0x1568a0) {
            ctx->pc = 0x1568A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1568A0u;
            // 0x1568a4: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156A2Cu;
            goto label_156a2c;
        }
    }
    ctx->pc = 0x1568A8u;
    // 0x1568a8: 0x3c03000c  lui         $v1, 0xC
    ctx->pc = 0x1568a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12 << 16));
    // 0x1568ac: 0x5183002a  beql        $t4, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1568ACu;
    {
        const bool branch_taken_0x1568ac = (GPR_U64(ctx, 12) == GPR_U64(ctx, 3));
        if (branch_taken_0x1568ac) {
            ctx->pc = 0x1568B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1568ACu;
            // 0x1568b0: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156958u;
            goto label_156958;
        }
    }
    ctx->pc = 0x1568B4u;
    // 0x1568b4: 0x3c030084  lui         $v1, 0x84
    ctx->pc = 0x1568b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)132 << 16));
    // 0x1568b8: 0x51830003  beql        $t4, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1568B8u;
    {
        const bool branch_taken_0x1568b8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 3));
        if (branch_taken_0x1568b8) {
            ctx->pc = 0x1568BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1568B8u;
            // 0x1568bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1568C8u;
            goto label_1568c8;
        }
    }
    ctx->pc = 0x1568C0u;
    // 0x1568c0: 0x10000228  b           . + 4 + (0x228 << 2)
    ctx->pc = 0x1568C0u;
    {
        const bool branch_taken_0x1568c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1568c0) {
            ctx->pc = 0x157164u;
            goto label_157164;
        }
    }
    ctx->pc = 0x1568C8u;
label_1568c8:
    // 0x1568c8: 0x30840070  andi        $a0, $a0, 0x70
    ctx->pc = 0x1568c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)112);
    // 0x1568cc: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x1568ccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x1568d0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1568d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1568d4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1568d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1568d8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1568d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1568dc: 0x654021  addu        $t0, $v1, $a1
    ctx->pc = 0x1568dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1568e0: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x1568e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1568e4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1568e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1568e8: 0x24e7001c  addiu       $a3, $a3, 0x1C
    ctx->pc = 0x1568e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x1568ec: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1568ECu;
    {
        const bool branch_taken_0x1568ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1568F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1568ECu;
            // 0x1568f0: 0xad470000  sw          $a3, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1568ec) {
            ctx->pc = 0x156934u;
            goto label_156934;
        }
    }
    ctx->pc = 0x1568F4u;
    // 0x1568f4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1568f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1568f8: 0x5083000c  beql        $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1568F8u;
    {
        const bool branch_taken_0x1568f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1568f8) {
            ctx->pc = 0x1568FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1568F8u;
            // 0x1568fc: 0x51940  sll         $v1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15692Cu;
            goto label_15692c;
        }
    }
    ctx->pc = 0x156900u;
    // 0x156900: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x156900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x156904: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x156904u;
    {
        const bool branch_taken_0x156904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x156904) {
            ctx->pc = 0x156908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156904u;
            // 0x156908: 0x818c0  sll         $v1, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156924u;
            goto label_156924;
        }
    }
    ctx->pc = 0x15690Cu;
    // 0x15690c: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15690Cu;
    {
        const bool branch_taken_0x15690c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15690c) {
            ctx->pc = 0x156910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15690Cu;
            // 0x156910: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15691Cu;
            goto label_15691c;
        }
    }
    ctx->pc = 0x156914u;
    // 0x156914: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x156914u;
    {
        const bool branch_taken_0x156914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156914u;
            // 0x156918: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156914) {
            ctx->pc = 0x156950u;
            goto label_156950;
        }
    }
    ctx->pc = 0x15691Cu;
label_15691c:
    // 0x15691c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15691Cu;
    {
        const bool branch_taken_0x15691c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15691Cu;
            // 0x156920: 0x24650020  addiu       $a1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15691c) {
            ctx->pc = 0x15694Cu;
            goto label_15694c;
        }
    }
    ctx->pc = 0x156924u;
label_156924:
    // 0x156924: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x156924u;
    {
        const bool branch_taken_0x156924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156924u;
            // 0x156928: 0x2465002c  addiu       $a1, $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156924) {
            ctx->pc = 0x15694Cu;
            goto label_15694c;
        }
    }
    ctx->pc = 0x15692Cu;
label_15692c:
    // 0x15692c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15692Cu;
    {
        const bool branch_taken_0x15692c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15692Cu;
            // 0x156930: 0x2465002c  addiu       $a1, $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15692c) {
            ctx->pc = 0x15694Cu;
            goto label_15694c;
        }
    }
    ctx->pc = 0x156934u;
label_156934:
    // 0x156934: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x156934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x156938: 0x24a70003  addiu       $a3, $a1, 0x3
    ctx->pc = 0x156938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x15693c: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x15693cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x156940: 0x2463002c  addiu       $v1, $v1, 0x2C
    ctx->pc = 0x156940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x156944: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x156944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x156948: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x156948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_15694c:
    // 0x15694c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x15694cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_156950:
    // 0x156950: 0x10000204  b           . + 4 + (0x204 << 2)
    ctx->pc = 0x156950u;
    {
        const bool branch_taken_0x156950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156950) {
            ctx->pc = 0x157164u;
            goto label_157164;
        }
    }
    ctx->pc = 0x156958u;
label_156958:
    // 0x156958: 0x30840070  andi        $a0, $a0, 0x70
    ctx->pc = 0x156958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)112);
    // 0x15695c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x15695cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x156960: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x156960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x156964: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x156964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x156968: 0x74880  sll         $t1, $a3, 2
    ctx->pc = 0x156968u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x15696c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x15696cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x156970: 0x2527001c  addiu       $a3, $t1, 0x1C
    ctx->pc = 0x156970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 28));
    // 0x156974: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x156974u;
    {
        const bool branch_taken_0x156974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x156978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156974u;
            // 0x156978: 0xad070000  sw          $a3, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156974) {
            ctx->pc = 0x1569F4u;
            goto label_1569f4;
        }
    }
    ctx->pc = 0x15697Cu;
    // 0x15697c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x15697cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x156980: 0x50830015  beql        $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x156980u;
    {
        const bool branch_taken_0x156980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x156980) {
            ctx->pc = 0x156984u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156980u;
            // 0x156984: 0x52100  sll         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1569D8u;
            goto label_1569d8;
        }
    }
    ctx->pc = 0x156988u;
    // 0x156988: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x156988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15698c: 0x5083000c  beql        $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x15698Cu;
    {
        const bool branch_taken_0x15698c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15698c) {
            ctx->pc = 0x156990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15698Cu;
            // 0x156990: 0x1252021  addu        $a0, $t1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1569C0u;
            goto label_1569c0;
        }
    }
    ctx->pc = 0x156994u;
    // 0x156994: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x156994u;
    {
        const bool branch_taken_0x156994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x156994) {
            ctx->pc = 0x156998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156994u;
            // 0x156998: 0x520c0  sll         $a0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1569A4u;
            goto label_1569a4;
        }
    }
    ctx->pc = 0x15699Cu;
    // 0x15699c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x15699Cu;
    {
        const bool branch_taken_0x15699c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1569A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15699Cu;
            // 0x1569a0: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15699c) {
            ctx->pc = 0x156A24u;
            goto label_156a24;
        }
    }
    ctx->pc = 0x1569A4u;
label_1569a4:
    // 0x1569a4: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x1569a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1569a8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1569a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1569ac: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1569acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1569b0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1569b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1569b4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1569b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1569b8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1569B8u;
    {
        const bool branch_taken_0x1569b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1569BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1569B8u;
            // 0x1569bc: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1569b8) {
            ctx->pc = 0x156A20u;
            goto label_156a20;
        }
    }
    ctx->pc = 0x1569C0u;
label_1569c0:
    // 0x1569c0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x1569c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1569c4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1569c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1569c8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1569c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1569cc: 0x2484002c  addiu       $a0, $a0, 0x2C
    ctx->pc = 0x1569ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    // 0x1569d0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1569D0u;
    {
        const bool branch_taken_0x1569d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1569D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1569D0u;
            // 0x1569d4: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1569d0) {
            ctx->pc = 0x156A20u;
            goto label_156a20;
        }
    }
    ctx->pc = 0x1569D8u;
label_1569d8:
    // 0x1569d8: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x1569d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1569dc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1569dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1569e0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1569e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1569e4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1569e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1569e8: 0x2484002c  addiu       $a0, $a0, 0x2C
    ctx->pc = 0x1569e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    // 0x1569ec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1569ECu;
    {
        const bool branch_taken_0x1569ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1569F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1569ECu;
            // 0x1569f0: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1569ec) {
            ctx->pc = 0x156A20u;
            goto label_156a20;
        }
    }
    ctx->pc = 0x1569F4u;
label_1569f4:
    // 0x1569f4: 0x24a40003  addiu       $a0, $a1, 0x3
    ctx->pc = 0x1569f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x1569f8: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1569f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1569fc: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x1569fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x156a00: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x156a00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x156a04: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x156a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x156a08: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x156a08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x156a0c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x156a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x156a10: 0x2484002c  addiu       $a0, $a0, 0x2C
    ctx->pc = 0x156a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    // 0x156a14: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x156a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x156a18: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x156a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x156a1c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x156a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_156a20:
    // 0x156a20: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x156a20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_156a24:
    // 0x156a24: 0x100001cf  b           . + 4 + (0x1CF << 2)
    ctx->pc = 0x156A24u;
    {
        const bool branch_taken_0x156a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156a24) {
            ctx->pc = 0x157164u;
            goto label_157164;
        }
    }
    ctx->pc = 0x156A2Cu;
label_156a2c:
    // 0x156a2c: 0x30840070  andi        $a0, $a0, 0x70
    ctx->pc = 0x156a2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)112);
    // 0x156a30: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x156a30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x156a34: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x156a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x156a38: 0x654021  addu        $t0, $v1, $a1
    ctx->pc = 0x156a38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x156a3c: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x156a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x156a40: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x156a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x156a44: 0x24e7001c  addiu       $a3, $a3, 0x1C
    ctx->pc = 0x156a44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x156a48: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x156A48u;
    {
        const bool branch_taken_0x156a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x156A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156A48u;
            // 0x156a4c: 0xad270000  sw          $a3, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156a48) {
            ctx->pc = 0x156A90u;
            goto label_156a90;
        }
    }
    ctx->pc = 0x156A50u;
    // 0x156a50: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x156a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x156a54: 0x5083000c  beql        $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x156A54u;
    {
        const bool branch_taken_0x156a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x156a54) {
            ctx->pc = 0x156A58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156A54u;
            // 0x156a58: 0x51940  sll         $v1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156A88u;
            goto label_156a88;
        }
    }
    ctx->pc = 0x156A5Cu;
    // 0x156a5c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x156a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x156a60: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x156A60u;
    {
        const bool branch_taken_0x156a60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x156a60) {
            ctx->pc = 0x156A64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156A60u;
            // 0x156a64: 0x818c0  sll         $v1, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156A80u;
            goto label_156a80;
        }
    }
    ctx->pc = 0x156A68u;
    // 0x156a68: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x156A68u;
    {
        const bool branch_taken_0x156a68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x156a68) {
            ctx->pc = 0x156A6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156A68u;
            // 0x156a6c: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156A78u;
            goto label_156a78;
        }
    }
    ctx->pc = 0x156A70u;
    // 0x156a70: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x156A70u;
    {
        const bool branch_taken_0x156a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156A70u;
            // 0x156a74: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156a70) {
            ctx->pc = 0x156AACu;
            goto label_156aac;
        }
    }
    ctx->pc = 0x156A78u;
label_156a78:
    // 0x156a78: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x156A78u;
    {
        const bool branch_taken_0x156a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156A78u;
            // 0x156a7c: 0x24650020  addiu       $a1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156a78) {
            ctx->pc = 0x156AA8u;
            goto label_156aa8;
        }
    }
    ctx->pc = 0x156A80u;
label_156a80:
    // 0x156a80: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x156A80u;
    {
        const bool branch_taken_0x156a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156A80u;
            // 0x156a84: 0x2465002c  addiu       $a1, $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156a80) {
            ctx->pc = 0x156AA8u;
            goto label_156aa8;
        }
    }
    ctx->pc = 0x156A88u;
label_156a88:
    // 0x156a88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x156A88u;
    {
        const bool branch_taken_0x156a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156A88u;
            // 0x156a8c: 0x2465002c  addiu       $a1, $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156a88) {
            ctx->pc = 0x156AA8u;
            goto label_156aa8;
        }
    }
    ctx->pc = 0x156A90u;
label_156a90:
    // 0x156a90: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x156a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x156a94: 0x24a70003  addiu       $a3, $a1, 0x3
    ctx->pc = 0x156a94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x156a98: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x156a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x156a9c: 0x2463002c  addiu       $v1, $v1, 0x2C
    ctx->pc = 0x156a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x156aa0: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x156aa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x156aa4: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x156aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_156aa8:
    // 0x156aa8: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x156aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_156aac:
    // 0x156aac: 0x100001ad  b           . + 4 + (0x1AD << 2)
    ctx->pc = 0x156AACu;
    {
        const bool branch_taken_0x156aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156aac) {
            ctx->pc = 0x157164u;
            goto label_157164;
        }
    }
    ctx->pc = 0x156AB4u;
label_156ab4:
    // 0x156ab4: 0x30890070  andi        $t1, $a0, 0x70
    ctx->pc = 0x156ab4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)112);
    // 0x156ab8: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x156ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x156abc: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x156abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x156ac0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x156ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x156ac4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x156ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x156ac8: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x156ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x156acc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x156accu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x156ad0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x156ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x156ad4: 0x2487001c  addiu       $a3, $a0, 0x1C
    ctx->pc = 0x156ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x156ad8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x156ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x156adc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x156adcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x156ae0: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x156ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x156ae4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x156ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x156ae8: 0x44040  sll         $t0, $a0, 1
    ctx->pc = 0x156ae8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x156aec: 0x25070020  addiu       $a3, $t0, 0x20
    ctx->pc = 0x156aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x156af0: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x156af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x156af4: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x156af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x156af8: 0x1124001b  beq         $t1, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x156AF8u;
    {
        const bool branch_taken_0x156af8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 4));
        ctx->pc = 0x156AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156AF8u;
            // 0x156afc: 0xad470000  sw          $a3, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156af8) {
            ctx->pc = 0x156B68u;
            goto label_156b68;
        }
    }
    ctx->pc = 0x156B00u;
    // 0x156b00: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x156b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x156b04: 0x51240014  beql        $t1, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x156B04u;
    {
        const bool branch_taken_0x156b04 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 4));
        if (branch_taken_0x156b04) {
            ctx->pc = 0x156B08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156B04u;
            // 0x156b08: 0x1052021  addu        $a0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156B58u;
            goto label_156b58;
        }
    }
    ctx->pc = 0x156B0Cu;
    // 0x156b0c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x156b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x156b10: 0x5124000c  beql        $t1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x156B10u;
    {
        const bool branch_taken_0x156b10 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 4));
        if (branch_taken_0x156b10) {
            ctx->pc = 0x156B14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156B10u;
            // 0x156b14: 0x52100  sll         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156B44u;
            goto label_156b44;
        }
    }
    ctx->pc = 0x156B18u;
    // 0x156b18: 0x51200003  beql        $t1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x156B18u;
    {
        const bool branch_taken_0x156b18 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x156b18) {
            ctx->pc = 0x156B1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156B18u;
            // 0x156b1c: 0x52080  sll         $a0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156B28u;
            goto label_156b28;
        }
    }
    ctx->pc = 0x156B20u;
    // 0x156b20: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x156B20u;
    {
        const bool branch_taken_0x156b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156B20u;
            // 0x156b24: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156b20) {
            ctx->pc = 0x156B98u;
            goto label_156b98;
        }
    }
    ctx->pc = 0x156B28u;
label_156b28:
    // 0x156b28: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x156b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x156b2c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x156b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x156b30: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x156b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x156b34: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x156b34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x156b38: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x156b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x156b3c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x156B3Cu;
    {
        const bool branch_taken_0x156b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156B3Cu;
            // 0x156b40: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156b3c) {
            ctx->pc = 0x156B94u;
            goto label_156b94;
        }
    }
    ctx->pc = 0x156B44u;
label_156b44:
    // 0x156b44: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x156b44u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x156b48: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x156b48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x156b4c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x156b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x156b50: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x156B50u;
    {
        const bool branch_taken_0x156b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156B50u;
            // 0x156b54: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156b50) {
            ctx->pc = 0x156B94u;
            goto label_156b94;
        }
    }
    ctx->pc = 0x156B58u;
label_156b58:
    // 0x156b58: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x156b58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x156b5c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x156b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x156b60: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x156B60u;
    {
        const bool branch_taken_0x156b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156B60u;
            // 0x156b64: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156b60) {
            ctx->pc = 0x156B94u;
            goto label_156b94;
        }
    }
    ctx->pc = 0x156B68u;
label_156b68:
    // 0x156b68: 0x24a70003  addiu       $a3, $a1, 0x3
    ctx->pc = 0x156b68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x156b6c: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x156b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x156b70: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x156b70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x156b74: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x156b74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x156b78: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x156b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x156b7c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x156b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x156b80: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x156b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x156b84: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x156b84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x156b88: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x156b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x156b8c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x156b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x156b90: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x156b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_156b94:
    // 0x156b94: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x156b94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_156b98:
    // 0x156b98: 0x10000172  b           . + 4 + (0x172 << 2)
    ctx->pc = 0x156B98u;
    {
        const bool branch_taken_0x156b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156b98) {
            ctx->pc = 0x157164u;
            goto label_157164;
        }
    }
    ctx->pc = 0x156BA0u;
label_156ba0:
    // 0x156ba0: 0x30840070  andi        $a0, $a0, 0x70
    ctx->pc = 0x156ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)112);
    // 0x156ba4: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x156ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x156ba8: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x156ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x156bac: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x156bacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x156bb0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x156bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x156bb4: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x156bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x156bb8: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x156bb8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x156bbc: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x156bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x156bc0: 0x24670020  addiu       $a3, $v1, 0x20
    ctx->pc = 0x156bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x156bc4: 0x2508001c  addiu       $t0, $t0, 0x1C
    ctx->pc = 0x156bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
    // 0x156bc8: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x156bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x156bcc: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x156bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x156bd0: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x156BD0u;
    {
        const bool branch_taken_0x156bd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x156BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156BD0u;
            // 0x156bd4: 0xad470000  sw          $a3, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156bd0) {
            ctx->pc = 0x156C30u;
            goto label_156c30;
        }
    }
    ctx->pc = 0x156BD8u;
    // 0x156bd8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x156bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x156bdc: 0x50830010  beql        $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x156BDCu;
    {
        const bool branch_taken_0x156bdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x156bdc) {
            ctx->pc = 0x156BE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156BDCu;
            // 0x156be0: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156C20u;
            goto label_156c20;
        }
    }
    ctx->pc = 0x156BE4u;
    // 0x156be4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x156be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x156be8: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x156BE8u;
    {
        const bool branch_taken_0x156be8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x156be8) {
            ctx->pc = 0x156BECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156BE8u;
            // 0x156bec: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156C10u;
            goto label_156c10;
        }
    }
    ctx->pc = 0x156BF0u;
    // 0x156bf0: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x156BF0u;
    {
        const bool branch_taken_0x156bf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x156bf0) {
            ctx->pc = 0x156BF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156BF0u;
            // 0x156bf4: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156C00u;
            goto label_156c00;
        }
    }
    ctx->pc = 0x156BF8u;
    // 0x156bf8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x156BF8u;
    {
        const bool branch_taken_0x156bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156BF8u;
            // 0x156bfc: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156bf8) {
            ctx->pc = 0x156C54u;
            goto label_156c54;
        }
    }
    ctx->pc = 0x156C00u;
label_156c00:
    // 0x156c00: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x156c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x156c04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x156c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x156c08: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x156C08u;
    {
        const bool branch_taken_0x156c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156C08u;
            // 0x156c0c: 0x24650024  addiu       $a1, $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156c08) {
            ctx->pc = 0x156C50u;
            goto label_156c50;
        }
    }
    ctx->pc = 0x156C10u;
label_156c10:
    // 0x156c10: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x156c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x156c14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x156c14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x156c18: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x156C18u;
    {
        const bool branch_taken_0x156c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156C18u;
            // 0x156c1c: 0x24650030  addiu       $a1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156c18) {
            ctx->pc = 0x156C50u;
            goto label_156c50;
        }
    }
    ctx->pc = 0x156C20u;
label_156c20:
    // 0x156c20: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x156c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x156c24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x156c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x156c28: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x156C28u;
    {
        const bool branch_taken_0x156c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156C28u;
            // 0x156c2c: 0x24650030  addiu       $a1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156c28) {
            ctx->pc = 0x156C50u;
            goto label_156c50;
        }
    }
    ctx->pc = 0x156C30u;
label_156c30:
    // 0x156c30: 0x24a40003  addiu       $a0, $a1, 0x3
    ctx->pc = 0x156c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x156c34: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x156c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x156c38: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x156c38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x156c3c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x156c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x156c40: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x156c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x156c44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x156c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x156c48: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x156c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x156c4c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x156c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_156c50:
    // 0x156c50: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x156c50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_156c54:
    // 0x156c54: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x156C54u;
    {
        const bool branch_taken_0x156c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156c54) {
            ctx->pc = 0x157164u;
            goto label_157164;
        }
    }
    ctx->pc = 0x156C5Cu;
label_156c5c:
    // 0x156c5c: 0x308a0070  andi        $t2, $a0, 0x70
    ctx->pc = 0x156c5cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)112);
    // 0x156c60: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x156c60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x156c64: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x156c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x156c68: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x156c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x156c6c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x156c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x156c70: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x156c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x156c74: 0x2487001c  addiu       $a3, $a0, 0x1C
    ctx->pc = 0x156c74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x156c78: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x156c78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x156c7c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x156c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x156c80: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x156c80u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x156c84: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x156c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x156c88: 0x44040  sll         $t0, $a0, 1
    ctx->pc = 0x156c88u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x156c8c: 0x25070020  addiu       $a3, $t0, 0x20
    ctx->pc = 0x156c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x156c90: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x156c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x156c94: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x156c94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x156c98: 0x1144001b  beq         $t2, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x156C98u;
    {
        const bool branch_taken_0x156c98 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        ctx->pc = 0x156C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156C98u;
            // 0x156c9c: 0xad270000  sw          $a3, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156c98) {
            ctx->pc = 0x156D08u;
            goto label_156d08;
        }
    }
    ctx->pc = 0x156CA0u;
    // 0x156ca0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x156ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x156ca4: 0x51440014  beql        $t2, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x156CA4u;
    {
        const bool branch_taken_0x156ca4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        if (branch_taken_0x156ca4) {
            ctx->pc = 0x156CA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156CA4u;
            // 0x156ca8: 0x1052021  addu        $a0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156CF8u;
            goto label_156cf8;
        }
    }
    ctx->pc = 0x156CACu;
    // 0x156cac: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x156cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x156cb0: 0x5144000c  beql        $t2, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x156CB0u;
    {
        const bool branch_taken_0x156cb0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        if (branch_taken_0x156cb0) {
            ctx->pc = 0x156CB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156CB0u;
            // 0x156cb4: 0x52100  sll         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156CE4u;
            goto label_156ce4;
        }
    }
    ctx->pc = 0x156CB8u;
    // 0x156cb8: 0x51400003  beql        $t2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x156CB8u;
    {
        const bool branch_taken_0x156cb8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x156cb8) {
            ctx->pc = 0x156CBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156CB8u;
            // 0x156cbc: 0x52080  sll         $a0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156CC8u;
            goto label_156cc8;
        }
    }
    ctx->pc = 0x156CC0u;
    // 0x156cc0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x156CC0u;
    {
        const bool branch_taken_0x156cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156CC0u;
            // 0x156cc4: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156cc0) {
            ctx->pc = 0x156D38u;
            goto label_156d38;
        }
    }
    ctx->pc = 0x156CC8u;
label_156cc8:
    // 0x156cc8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x156cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x156ccc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x156cccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x156cd0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x156cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x156cd4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x156cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x156cd8: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x156cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x156cdc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x156CDCu;
    {
        const bool branch_taken_0x156cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156CDCu;
            // 0x156ce0: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156cdc) {
            ctx->pc = 0x156D34u;
            goto label_156d34;
        }
    }
    ctx->pc = 0x156CE4u;
label_156ce4:
    // 0x156ce4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x156ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x156ce8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x156ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x156cec: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x156cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x156cf0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x156CF0u;
    {
        const bool branch_taken_0x156cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156CF0u;
            // 0x156cf4: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156cf0) {
            ctx->pc = 0x156D34u;
            goto label_156d34;
        }
    }
    ctx->pc = 0x156CF8u;
label_156cf8:
    // 0x156cf8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x156cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x156cfc: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x156cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x156d00: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x156D00u;
    {
        const bool branch_taken_0x156d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156D00u;
            // 0x156d04: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d00) {
            ctx->pc = 0x156D34u;
            goto label_156d34;
        }
    }
    ctx->pc = 0x156D08u;
label_156d08:
    // 0x156d08: 0x24a70003  addiu       $a3, $a1, 0x3
    ctx->pc = 0x156d08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x156d0c: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x156d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x156d10: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x156d10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x156d14: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x156d14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x156d18: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x156d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x156d1c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x156d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x156d20: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x156d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x156d24: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x156d24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x156d28: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x156d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x156d2c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x156d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x156d30: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x156d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_156d34:
    // 0x156d34: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x156d34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_156d38:
    // 0x156d38: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x156D38u;
    {
        const bool branch_taken_0x156d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156d38) {
            ctx->pc = 0x157164u;
            goto label_157164;
        }
    }
    ctx->pc = 0x156D40u;
label_156d40:
    // 0x156d40: 0x308c0070  andi        $t4, $a0, 0x70
    ctx->pc = 0x156d40u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)112);
    // 0x156d44: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x156d44u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x156d48: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x156d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x156d4c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x156d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x156d50: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x156d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x156d54: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x156d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x156d58: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x156d58u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x156d5c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x156d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x156d60: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x156d60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x156d64: 0x24eb001c  addiu       $t3, $a3, 0x1C
    ctx->pc = 0x156d64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x156d68: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x156d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x156d6c: 0xad0b0000  sw          $t3, 0x0($t0)
    ctx->pc = 0x156d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
    // 0x156d70: 0x654021  addu        $t0, $v1, $a1
    ctx->pc = 0x156d70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x156d74: 0x85840  sll         $t3, $t0, 1
    ctx->pc = 0x156d74u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x156d78: 0x54080  sll         $t0, $a1, 2
    ctx->pc = 0x156d78u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x156d7c: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x156d7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x156d80: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x156d80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x156d84: 0x1645821  addu        $t3, $t3, $a0
    ctx->pc = 0x156d84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x156d88: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x156d88u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x156d8c: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x156d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x156d90: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x156d90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x156d94: 0x84840  sll         $t1, $t0, 1
    ctx->pc = 0x156d94u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x156d98: 0x25290024  addiu       $t1, $t1, 0x24
    ctx->pc = 0x156d98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 36));
    // 0x156d9c: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x156d9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x156da0: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x156da0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x156da4: 0x1188001a  beq         $t4, $t0, . + 4 + (0x1A << 2)
    ctx->pc = 0x156DA4u;
    {
        const bool branch_taken_0x156da4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 8));
        ctx->pc = 0x156DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156DA4u;
            // 0x156da8: 0xad490000  sw          $t1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156da4) {
            ctx->pc = 0x156E10u;
            goto label_156e10;
        }
    }
    ctx->pc = 0x156DACu;
    // 0x156dac: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x156dacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x156db0: 0x51880011  beql        $t4, $t0, . + 4 + (0x11 << 2)
    ctx->pc = 0x156DB0u;
    {
        const bool branch_taken_0x156db0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 8));
        if (branch_taken_0x156db0) {
            ctx->pc = 0x156DB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156DB0u;
            // 0x156db4: 0x652823  subu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156DF8u;
            goto label_156df8;
        }
    }
    ctx->pc = 0x156DB8u;
    // 0x156db8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x156db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x156dbc: 0x51830009  beql        $t4, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x156DBCu;
    {
        const bool branch_taken_0x156dbc = (GPR_U64(ctx, 12) == GPR_U64(ctx, 3));
        if (branch_taken_0x156dbc) {
            ctx->pc = 0x156DC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156DBCu;
            // 0x156dc0: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156DE4u;
            goto label_156de4;
        }
    }
    ctx->pc = 0x156DC4u;
    // 0x156dc4: 0x51800003  beql        $t4, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x156DC4u;
    {
        const bool branch_taken_0x156dc4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x156dc4) {
            ctx->pc = 0x156DC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156DC4u;
            // 0x156dc8: 0xe51821  addu        $v1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156DD4u;
            goto label_156dd4;
        }
    }
    ctx->pc = 0x156DCCu;
    // 0x156dcc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x156DCCu;
    {
        const bool branch_taken_0x156dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156DCCu;
            // 0x156dd0: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156dcc) {
            ctx->pc = 0x156E34u;
            goto label_156e34;
        }
    }
    ctx->pc = 0x156DD4u;
label_156dd4:
    // 0x156dd4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x156dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x156dd8: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x156dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x156ddc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x156DDCu;
    {
        const bool branch_taken_0x156ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156DDCu;
            // 0x156de0: 0x642821  addu        $a1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156ddc) {
            ctx->pc = 0x156E30u;
            goto label_156e30;
        }
    }
    ctx->pc = 0x156DE4u;
label_156de4:
    // 0x156de4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x156de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x156de8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x156de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x156dec: 0x24630034  addiu       $v1, $v1, 0x34
    ctx->pc = 0x156decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x156df0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x156DF0u;
    {
        const bool branch_taken_0x156df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156DF0u;
            // 0x156df4: 0x642821  addu        $a1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156df0) {
            ctx->pc = 0x156E30u;
            goto label_156e30;
        }
    }
    ctx->pc = 0x156DF8u;
label_156df8:
    // 0x156df8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x156df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x156dfc: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x156dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x156e00: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x156e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x156e04: 0x24630034  addiu       $v1, $v1, 0x34
    ctx->pc = 0x156e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x156e08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x156E08u;
    {
        const bool branch_taken_0x156e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156E08u;
            // 0x156e0c: 0x642821  addu        $a1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e08) {
            ctx->pc = 0x156E30u;
            goto label_156e30;
        }
    }
    ctx->pc = 0x156E10u;
label_156e10:
    // 0x156e10: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x156e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x156e14: 0x24a70003  addiu       $a3, $a1, 0x3
    ctx->pc = 0x156e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x156e18: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x156e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x156e1c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x156e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x156e20: 0x24630034  addiu       $v1, $v1, 0x34
    ctx->pc = 0x156e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x156e24: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x156e24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x156e28: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x156e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x156e2c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x156e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_156e30:
    // 0x156e30: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x156e30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_156e34:
    // 0x156e34: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x156E34u;
    {
        const bool branch_taken_0x156e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156e34) {
            ctx->pc = 0x157164u;
            goto label_157164;
        }
    }
    ctx->pc = 0x156E3Cu;
label_156e3c:
    // 0x156e3c: 0x30840070  andi        $a0, $a0, 0x70
    ctx->pc = 0x156e3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)112);
    // 0x156e40: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x156e40u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x156e44: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x156e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x156e48: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x156e48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x156e4c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x156e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x156e50: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x156e50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x156e54: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x156e54u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x156e58: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x156e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x156e5c: 0x24e7001c  addiu       $a3, $a3, 0x1C
    ctx->pc = 0x156e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x156e60: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x156E60u;
    {
        const bool branch_taken_0x156e60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x156E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156E60u;
            // 0x156e64: 0xad470000  sw          $a3, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e60) {
            ctx->pc = 0x156EC0u;
            goto label_156ec0;
        }
    }
    ctx->pc = 0x156E68u;
    // 0x156e68: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x156e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x156e6c: 0x50830010  beql        $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x156E6Cu;
    {
        const bool branch_taken_0x156e6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x156e6c) {
            ctx->pc = 0x156E70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156E6Cu;
            // 0x156e70: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156EB0u;
            goto label_156eb0;
        }
    }
    ctx->pc = 0x156E74u;
    // 0x156e74: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x156e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x156e78: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x156E78u;
    {
        const bool branch_taken_0x156e78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x156e78) {
            ctx->pc = 0x156E7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156E78u;
            // 0x156e7c: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156EA0u;
            goto label_156ea0;
        }
    }
    ctx->pc = 0x156E80u;
    // 0x156e80: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x156E80u;
    {
        const bool branch_taken_0x156e80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x156e80) {
            ctx->pc = 0x156E84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156E80u;
            // 0x156e84: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156E90u;
            goto label_156e90;
        }
    }
    ctx->pc = 0x156E88u;
    // 0x156e88: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x156E88u;
    {
        const bool branch_taken_0x156e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156E88u;
            // 0x156e8c: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e88) {
            ctx->pc = 0x156EE4u;
            goto label_156ee4;
        }
    }
    ctx->pc = 0x156E90u;
label_156e90:
    // 0x156e90: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x156e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x156e94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x156e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x156e98: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x156E98u;
    {
        const bool branch_taken_0x156e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156E98u;
            // 0x156e9c: 0x24650020  addiu       $a1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e98) {
            ctx->pc = 0x156EE0u;
            goto label_156ee0;
        }
    }
    ctx->pc = 0x156EA0u;
label_156ea0:
    // 0x156ea0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x156ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x156ea4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x156ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x156ea8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x156EA8u;
    {
        const bool branch_taken_0x156ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156EA8u;
            // 0x156eac: 0x2465002c  addiu       $a1, $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156ea8) {
            ctx->pc = 0x156EE0u;
            goto label_156ee0;
        }
    }
    ctx->pc = 0x156EB0u;
label_156eb0:
    // 0x156eb0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x156eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x156eb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x156eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x156eb8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x156EB8u;
    {
        const bool branch_taken_0x156eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156EB8u;
            // 0x156ebc: 0x2465002c  addiu       $a1, $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156eb8) {
            ctx->pc = 0x156EE0u;
            goto label_156ee0;
        }
    }
    ctx->pc = 0x156EC0u;
label_156ec0:
    // 0x156ec0: 0x24a40003  addiu       $a0, $a1, 0x3
    ctx->pc = 0x156ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x156ec4: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x156ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x156ec8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x156ec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x156ecc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x156eccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x156ed0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x156ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x156ed4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x156ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x156ed8: 0x2463002c  addiu       $v1, $v1, 0x2C
    ctx->pc = 0x156ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x156edc: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x156edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_156ee0:
    // 0x156ee0: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x156ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_156ee4:
    // 0x156ee4: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x156EE4u;
    {
        const bool branch_taken_0x156ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156ee4) {
            ctx->pc = 0x157164u;
            goto label_157164;
        }
    }
    ctx->pc = 0x156EECu;
label_156eec:
    // 0x156eec: 0x30890070  andi        $t1, $a0, 0x70
    ctx->pc = 0x156eecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)112);
    // 0x156ef0: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x156ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x156ef4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x156ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x156ef8: 0x558c0  sll         $t3, $a1, 3
    ctx->pc = 0x156ef8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x156efc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x156efcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x156f00: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x156f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x156f04: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x156f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x156f08: 0x46080  sll         $t4, $a0, 2
    ctx->pc = 0x156f08u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x156f0c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x156f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x156f10: 0x2584001c  addiu       $a0, $t4, 0x1C
    ctx->pc = 0x156f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 28));
    // 0x156f14: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x156f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x156f18: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x156f18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x156f1c: 0x1652021  addu        $a0, $t3, $a1
    ctx->pc = 0x156f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x156f20: 0x43840  sll         $a3, $a0, 1
    ctx->pc = 0x156f20u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x156f24: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x156f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x156f28: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x156f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x156f2c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x156f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x156f30: 0x1124001a  beq         $t1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x156F30u;
    {
        const bool branch_taken_0x156f30 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 4));
        ctx->pc = 0x156F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156F30u;
            // 0x156f34: 0xad470000  sw          $a3, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156f30) {
            ctx->pc = 0x156F9Cu;
            goto label_156f9c;
        }
    }
    ctx->pc = 0x156F38u;
    // 0x156f38: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x156f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x156f3c: 0x51240011  beql        $t1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x156F3Cu;
    {
        const bool branch_taken_0x156f3c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 4));
        if (branch_taken_0x156f3c) {
            ctx->pc = 0x156F40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156F3Cu;
            // 0x156f40: 0x1652823  subu        $a1, $t3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156F84u;
            goto label_156f84;
        }
    }
    ctx->pc = 0x156F44u;
    // 0x156f44: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x156f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x156f48: 0x51240009  beql        $t1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x156F48u;
    {
        const bool branch_taken_0x156f48 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 4));
        if (branch_taken_0x156f48) {
            ctx->pc = 0x156F4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156F48u;
            // 0x156f4c: 0x52100  sll         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156F70u;
            goto label_156f70;
        }
    }
    ctx->pc = 0x156F50u;
    // 0x156f50: 0x51200003  beql        $t1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x156F50u;
    {
        const bool branch_taken_0x156f50 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x156f50) {
            ctx->pc = 0x156F54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156F50u;
            // 0x156f54: 0x1852021  addu        $a0, $t4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156F60u;
            goto label_156f60;
        }
    }
    ctx->pc = 0x156F58u;
    // 0x156f58: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x156F58u;
    {
        const bool branch_taken_0x156f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156F58u;
            // 0x156f5c: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156f58) {
            ctx->pc = 0x156FC0u;
            goto label_156fc0;
        }
    }
    ctx->pc = 0x156F60u;
label_156f60:
    // 0x156f60: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x156f60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x156f64: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x156f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x156f68: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x156F68u;
    {
        const bool branch_taken_0x156f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156F68u;
            // 0x156f6c: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156f68) {
            ctx->pc = 0x156FBCu;
            goto label_156fbc;
        }
    }
    ctx->pc = 0x156F70u;
label_156f70:
    // 0x156f70: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x156f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x156f74: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x156f74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x156f78: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x156f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x156f7c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x156F7Cu;
    {
        const bool branch_taken_0x156f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156F7Cu;
            // 0x156f80: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156f7c) {
            ctx->pc = 0x156FBCu;
            goto label_156fbc;
        }
    }
    ctx->pc = 0x156F84u;
label_156f84:
    // 0x156f84: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x156f84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x156f88: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x156f88u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x156f8c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x156f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x156f90: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x156f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x156f94: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x156F94u;
    {
        const bool branch_taken_0x156f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156F94u;
            // 0x156f98: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156f94) {
            ctx->pc = 0x156FBCu;
            goto label_156fbc;
        }
    }
    ctx->pc = 0x156F9Cu;
label_156f9c:
    // 0x156f9c: 0x1852021  addu        $a0, $t4, $a1
    ctx->pc = 0x156f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x156fa0: 0x24a70003  addiu       $a3, $a1, 0x3
    ctx->pc = 0x156fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x156fa4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x156fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x156fa8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x156fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x156fac: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x156facu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x156fb0: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x156fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x156fb4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x156fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x156fb8: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x156fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_156fbc:
    // 0x156fbc: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x156fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_156fc0:
    // 0x156fc0: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x156FC0u;
    {
        const bool branch_taken_0x156fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156fc0) {
            ctx->pc = 0x157164u;
            goto label_157164;
        }
    }
    ctx->pc = 0x156FC8u;
label_156fc8:
    // 0x156fc8: 0x30840070  andi        $a0, $a0, 0x70
    ctx->pc = 0x156fc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)112);
    // 0x156fcc: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x156fccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x156fd0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x156fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x156fd4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x156fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x156fd8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x156fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x156fdc: 0x655821  addu        $t3, $v1, $a1
    ctx->pc = 0x156fdcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x156fe0: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x156fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x156fe4: 0x24670020  addiu       $a3, $v1, 0x20
    ctx->pc = 0x156fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x156fe8: 0xb1880  sll         $v1, $t3, 2
    ctx->pc = 0x156fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x156fec: 0x2468001c  addiu       $t0, $v1, 0x1C
    ctx->pc = 0x156fecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x156ff0: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x156ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x156ff4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x156ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x156ff8: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x156FF8u;
    {
        const bool branch_taken_0x156ff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x156FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156FF8u;
            // 0x156ffc: 0xad470000  sw          $a3, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156ff8) {
            ctx->pc = 0x157048u;
            goto label_157048;
        }
    }
    ctx->pc = 0x157000u;
    // 0x157000: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x157000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x157004: 0x5083000c  beql        $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x157004u;
    {
        const bool branch_taken_0x157004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x157004) {
            ctx->pc = 0x157008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157004u;
            // 0x157008: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157038u;
            goto label_157038;
        }
    }
    ctx->pc = 0x15700Cu;
    // 0x15700c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x15700cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x157010: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x157010u;
    {
        const bool branch_taken_0x157010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x157010) {
            ctx->pc = 0x157014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157010u;
            // 0x157014: 0x51940  sll         $v1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157030u;
            goto label_157030;
        }
    }
    ctx->pc = 0x157018u;
    // 0x157018: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x157018u;
    {
        const bool branch_taken_0x157018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x157018) {
            ctx->pc = 0x15701Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157018u;
            // 0x15701c: 0xb18c0  sll         $v1, $t3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157028u;
            goto label_157028;
        }
    }
    ctx->pc = 0x157020u;
    // 0x157020: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x157020u;
    {
        const bool branch_taken_0x157020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157020u;
            // 0x157024: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157020) {
            ctx->pc = 0x157064u;
            goto label_157064;
        }
    }
    ctx->pc = 0x157028u;
label_157028:
    // 0x157028: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x157028u;
    {
        const bool branch_taken_0x157028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15702Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157028u;
            // 0x15702c: 0x24650024  addiu       $a1, $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157028) {
            ctx->pc = 0x157060u;
            goto label_157060;
        }
    }
    ctx->pc = 0x157030u;
label_157030:
    // 0x157030: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x157030u;
    {
        const bool branch_taken_0x157030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157030u;
            // 0x157034: 0x24650030  addiu       $a1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157030) {
            ctx->pc = 0x157060u;
            goto label_157060;
        }
    }
    ctx->pc = 0x157038u;
label_157038:
    // 0x157038: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x157038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15703c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x15703cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x157040: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x157040u;
    {
        const bool branch_taken_0x157040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157040u;
            // 0x157044: 0x24650030  addiu       $a1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157040) {
            ctx->pc = 0x157060u;
            goto label_157060;
        }
    }
    ctx->pc = 0x157048u;
label_157048:
    // 0x157048: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x157048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x15704c: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x15704cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x157050: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x157050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x157054: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x157054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x157058: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x157058u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x15705c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x15705cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_157060:
    // 0x157060: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x157060u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_157064:
    // 0x157064: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x157064u;
    {
        const bool branch_taken_0x157064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157064) {
            ctx->pc = 0x157164u;
            goto label_157164;
        }
    }
    ctx->pc = 0x15706Cu;
label_15706c:
    // 0x15706c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15706cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x157070: 0x308c0070  andi        $t4, $a0, 0x70
    ctx->pc = 0x157070u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)112);
    // 0x157074: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x157074u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x157078: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x157078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x15707c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x15707cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x157080: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x157080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x157084: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x157084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x157088: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x157088u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15708c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x15708cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x157090: 0x24eb001c  addiu       $t3, $a3, 0x1C
    ctx->pc = 0x157090u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x157094: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x157094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x157098: 0x538c0  sll         $a3, $a1, 3
    ctx->pc = 0x157098u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x15709c: 0xad0b0000  sw          $t3, 0x0($t0)
    ctx->pc = 0x15709cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
    // 0x1570a0: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1570a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1570a4: 0x75840  sll         $t3, $a3, 1
    ctx->pc = 0x1570a4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1570a8: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x1570a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1570ac: 0x25680020  addiu       $t0, $t3, 0x20
    ctx->pc = 0x1570acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x1570b0: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1570b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1570b4: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x1570b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1570b8: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x1570b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1570bc: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x1570bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x1570c0: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1570c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1570c4: 0x74040  sll         $t0, $a3, 1
    ctx->pc = 0x1570c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1570c8: 0x25080024  addiu       $t0, $t0, 0x24
    ctx->pc = 0x1570c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 36));
    // 0x1570cc: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x1570ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1570d0: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x1570d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1570d4: 0x11870019  beq         $t4, $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x1570D4u;
    {
        const bool branch_taken_0x1570d4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 7));
        ctx->pc = 0x1570D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1570D4u;
            // 0x1570d8: 0xad480000  sw          $t0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1570d4) {
            ctx->pc = 0x15713Cu;
            goto label_15713c;
        }
    }
    ctx->pc = 0x1570DCu;
    // 0x1570dc: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1570dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1570e0: 0x51870011  beql        $t4, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x1570E0u;
    {
        const bool branch_taken_0x1570e0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 7));
        if (branch_taken_0x1570e0) {
            ctx->pc = 0x1570E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1570E0u;
            // 0x1570e4: 0x420c0  sll         $a0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157128u;
            goto label_157128;
        }
    }
    ctx->pc = 0x1570E8u;
    // 0x1570e8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1570e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1570ec: 0x5184000a  beql        $t4, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1570ECu;
    {
        const bool branch_taken_0x1570ec = (GPR_U64(ctx, 12) == GPR_U64(ctx, 4));
        if (branch_taken_0x1570ec) {
            ctx->pc = 0x1570F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1570ECu;
            // 0x1570f0: 0x1652021  addu        $a0, $t3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157118u;
            goto label_157118;
        }
    }
    ctx->pc = 0x1570F4u;
    // 0x1570f4: 0x51800003  beql        $t4, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1570F4u;
    {
        const bool branch_taken_0x1570f4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x1570f4) {
            ctx->pc = 0x1570F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1570F4u;
            // 0x1570f8: 0x52100  sll         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157104u;
            goto label_157104;
        }
    }
    ctx->pc = 0x1570FCu;
    // 0x1570fc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1570FCu;
    {
        const bool branch_taken_0x1570fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1570FCu;
            // 0x157100: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1570fc) {
            ctx->pc = 0x157164u;
            goto label_157164;
        }
    }
    ctx->pc = 0x157104u;
label_157104:
    // 0x157104: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x157104u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x157108: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x157108u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15710c: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x15710cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x157110: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x157110u;
    {
        const bool branch_taken_0x157110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157110u;
            // 0x157114: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157110) {
            ctx->pc = 0x157160u;
            goto label_157160;
        }
    }
    ctx->pc = 0x157118u;
label_157118:
    // 0x157118: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x157118u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15711c: 0x24840034  addiu       $a0, $a0, 0x34
    ctx->pc = 0x15711cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x157120: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x157120u;
    {
        const bool branch_taken_0x157120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157120u;
            // 0x157124: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157120) {
            ctx->pc = 0x157160u;
            goto label_157160;
        }
    }
    ctx->pc = 0x157128u;
label_157128:
    // 0x157128: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x157128u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15712c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x15712cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x157130: 0x24840034  addiu       $a0, $a0, 0x34
    ctx->pc = 0x157130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x157134: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x157134u;
    {
        const bool branch_taken_0x157134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157134u;
            // 0x157138: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157134) {
            ctx->pc = 0x157160u;
            goto label_157160;
        }
    }
    ctx->pc = 0x15713Cu;
label_15713c:
    // 0x15713c: 0x24a70003  addiu       $a3, $a1, 0x3
    ctx->pc = 0x15713cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x157140: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x157140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x157144: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x157144u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x157148: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x157148u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x15714c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x15714cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x157150: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x157150u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x157154: 0x24840034  addiu       $a0, $a0, 0x34
    ctx->pc = 0x157154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x157158: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x157158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x15715c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x15715cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_157160:
    // 0x157160: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x157160u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_157164:
    // 0x157164: 0x3e00008  jr          $ra
    ctx->pc = 0x157164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15716Cu;
    // 0x15716c: 0x0  nop
    ctx->pc = 0x15716cu;
    // NOP
}
