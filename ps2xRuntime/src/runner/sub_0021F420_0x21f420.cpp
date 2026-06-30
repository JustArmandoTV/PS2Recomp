#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021F420
// Address: 0x21f420 - 0x21f890
void sub_0021F420_0x21f420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F420_0x21f420");
#endif

    switch (ctx->pc) {
        case 0x21f500u: goto label_21f500;
        case 0x21f504u: goto label_21f504;
        default: break;
    }

    ctx->pc = 0x21f420u;

    // 0x21f420: 0xacc40010  sw          $a0, 0x10($a2)
    ctx->pc = 0x21f420u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
    // 0x21f424: 0xacc50014  sw          $a1, 0x14($a2)
    ctx->pc = 0x21f424u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
    // 0x21f428: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x21f428u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x21f42c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x21f42cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x21f430: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x21f430u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x21f434: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x21f434u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x21f438: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x21f438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x21f43c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x21f43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x21f440: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x21f440u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x21f444: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x21f444u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21f448: 0x38630016  xori        $v1, $v1, 0x16
    ctx->pc = 0x21f448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)22);
    // 0x21f44c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x21f44cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x21f450: 0x50600025  beql        $v1, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x21F450u;
    {
        const bool branch_taken_0x21f450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f450) {
            ctx->pc = 0x21F454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21F450u;
            // 0x21f454: 0x853821  addu        $a3, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21F4E8u;
            goto label_21f4e8;
        }
    }
    ctx->pc = 0x21F458u;
    // 0x21f458: 0x94890004  lhu         $t1, 0x4($a0)
    ctx->pc = 0x21f458u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21f45c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x21f45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x21f460: 0x94043  sra         $t0, $t1, 1
    ctx->pc = 0x21f460u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 9), 1));
    // 0x21f464: 0x31250001  andi        $a1, $t1, 0x1
    ctx->pc = 0x21f464u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x21f468: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x21f468u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x21f46c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x21f46cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x21f470: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21f470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21f474: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x21f474u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x21f478: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x21f478u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x21f47c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x21f47cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x21f480: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x21f480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x21f484: 0x25270002  addiu       $a3, $t1, 0x2
    ctx->pc = 0x21f484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x21f488: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x21f488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x21f48c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x21f48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21f490: 0x25250003  addiu       $a1, $t1, 0x3
    ctx->pc = 0x21f490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
    // 0x21f494: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x21f494u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x21f498: 0x29230002  slti        $v1, $t1, 0x2
    ctx->pc = 0x21f498u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21f49c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x21f49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x21f4a0: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x21f4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x21f4a4: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x21f4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x21f4a8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x21f4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x21f4ac: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x21f4acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x21f4b0: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x21f4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x21f4b4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21f4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21f4b8: 0x146000f3  bnez        $v1, . + 4 + (0xF3 << 2)
    ctx->pc = 0x21F4B8u;
    {
        const bool branch_taken_0x21f4b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F4B8u;
            // 0x21f4bc: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f4b8) {
            ctx->pc = 0x21F888u;
            goto label_21f888;
        }
    }
    ctx->pc = 0x21F4C0u;
    // 0x21f4c0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x21f4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x21f4c4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x21f4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x21f4c8: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x21f4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x21f4cc: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x21f4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x21f4d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21f4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21f4d4: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x21f4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x21f4d8: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x21f4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x21f4dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21f4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21f4e0: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x21F4E0u;
    {
        const bool branch_taken_0x21f4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F4E0u;
            // 0x21f4e4: 0xacc3000c  sw          $v1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f4e0) {
            ctx->pc = 0x21F888u;
            goto label_21f888;
        }
    }
    ctx->pc = 0x21F4E8u;
label_21f4e8:
    // 0x21f4e8: 0x87082b  sltu        $at, $a0, $a3
    ctx->pc = 0x21f4e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x21f4ec: 0x102000e6  beqz        $at, . + 4 + (0xE6 << 2)
    ctx->pc = 0x21F4ECu;
    {
        const bool branch_taken_0x21f4ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f4ec) {
            ctx->pc = 0x21F888u;
            goto label_21f888;
        }
    }
    ctx->pc = 0x21F4F4u;
    // 0x21f4f4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x21f4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x21f4f8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x21f4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x21f4fc: 0x24a5eed0  addiu       $a1, $a1, -0x1130
    ctx->pc = 0x21f4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962896));
label_21f500:
    // 0x21f500: 0x94880000  lhu         $t0, 0x0($a0)
    ctx->pc = 0x21f500u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_21f504:
    // 0x21f504: 0x2d01001b  sltiu       $at, $t0, 0x1B
    ctx->pc = 0x21f504u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
    // 0x21f508: 0x102000db  beqz        $at, . + 4 + (0xDB << 2)
    ctx->pc = 0x21F508u;
    {
        const bool branch_taken_0x21f508 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f508) {
            ctx->pc = 0x21F878u;
            goto label_21f878;
        }
    }
    ctx->pc = 0x21F510u;
    // 0x21f510: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x21f510u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x21f514: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x21f514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x21f518: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x21f518u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x21f51c: 0x1000008  jr          $t0
    ctx->pc = 0x21F51Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 8);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21F528u: goto label_21f528;
            case 0x21F538u: goto label_21f538;
            case 0x21F568u: goto label_21f568;
            case 0x21F598u: goto label_21f598;
            case 0x21F5C8u: goto label_21f5c8;
            case 0x21F5F8u: goto label_21f5f8;
            case 0x21F628u: goto label_21f628;
            case 0x21F658u: goto label_21f658;
            case 0x21F688u: goto label_21f688;
            case 0x21F6B8u: goto label_21f6b8;
            case 0x21F6F8u: goto label_21f6f8;
            case 0x21F728u: goto label_21f728;
            case 0x21F758u: goto label_21f758;
            case 0x21F788u: goto label_21f788;
            case 0x21F7C8u: goto label_21f7c8;
            case 0x21F7F8u: goto label_21f7f8;
            case 0x21F828u: goto label_21f828;
            case 0x21F858u: goto label_21f858;
            case 0x21F860u: goto label_21f860;
            case 0x21F868u: goto label_21f868;
            case 0x21F870u: goto label_21f870;
            case 0x21F878u: goto label_21f878;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21F524u;
    // 0x21f524: 0x0  nop
    ctx->pc = 0x21f524u;
    // NOP
label_21f528:
    // 0x21f528: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x21f528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x21f52c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x21F52Cu;
    {
        const bool branch_taken_0x21f52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F52Cu;
            // 0x21f530: 0x832024  and         $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f52c) {
            ctx->pc = 0x21F500u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21f500;
        }
    }
    ctx->pc = 0x21F534u;
    // 0x21f534: 0x0  nop
    ctx->pc = 0x21f534u;
    // NOP
label_21f538:
    // 0x21f538: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x21f538u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x21f53c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x21f53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x21f540: 0x25080090  addiu       $t0, $t0, 0x90
    ctx->pc = 0x21f540u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 144));
    // 0x21f544: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x21f544u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x21f548: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x21f548u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x21f54c: 0x25080003  addiu       $t0, $t0, 0x3
    ctx->pc = 0x21f54cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x21f550: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x21f550u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x21f554: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x21f554u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x21f558: 0x25080003  addiu       $t0, $t0, 0x3
    ctx->pc = 0x21f558u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x21f55c: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x21F55Cu;
    {
        const bool branch_taken_0x21f55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F55Cu;
            // 0x21f560: 0xacc8000c  sw          $t0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f55c) {
            ctx->pc = 0x21F878u;
            goto label_21f878;
        }
    }
    ctx->pc = 0x21F564u;
    // 0x21f564: 0x0  nop
    ctx->pc = 0x21f564u;
    // NOP
label_21f568:
    // 0x21f568: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x21f568u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x21f56c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x21f56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x21f570: 0x25080030  addiu       $t0, $t0, 0x30
    ctx->pc = 0x21f570u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x21f574: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x21f574u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x21f578: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x21f578u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x21f57c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21f57cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21f580: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x21f580u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x21f584: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x21f584u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x21f588: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21f588u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21f58c: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x21F58Cu;
    {
        const bool branch_taken_0x21f58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F58Cu;
            // 0x21f590: 0xacc8000c  sw          $t0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f58c) {
            ctx->pc = 0x21F878u;
            goto label_21f878;
        }
    }
    ctx->pc = 0x21F594u;
    // 0x21f594: 0x0  nop
    ctx->pc = 0x21f594u;
    // NOP
label_21f598:
    // 0x21f598: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x21f598u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x21f59c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x21f59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x21f5a0: 0x25080030  addiu       $t0, $t0, 0x30
    ctx->pc = 0x21f5a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x21f5a4: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x21f5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x21f5a8: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x21f5a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x21f5ac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21f5acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21f5b0: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x21f5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x21f5b4: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x21f5b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x21f5b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21f5b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21f5bc: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x21F5BCu;
    {
        const bool branch_taken_0x21f5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F5BCu;
            // 0x21f5c0: 0xacc8000c  sw          $t0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f5bc) {
            ctx->pc = 0x21F878u;
            goto label_21f878;
        }
    }
    ctx->pc = 0x21F5C4u;
    // 0x21f5c4: 0x0  nop
    ctx->pc = 0x21f5c4u;
    // NOP
label_21f5c8:
    // 0x21f5c8: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x21f5c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x21f5cc: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x21f5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x21f5d0: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x21f5d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x21f5d4: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x21f5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x21f5d8: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x21f5d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x21f5dc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21f5dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21f5e0: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x21f5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x21f5e4: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x21f5e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x21f5e8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21f5e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21f5ec: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x21F5ECu;
    {
        const bool branch_taken_0x21f5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F5ECu;
            // 0x21f5f0: 0xacc8000c  sw          $t0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f5ec) {
            ctx->pc = 0x21F878u;
            goto label_21f878;
        }
    }
    ctx->pc = 0x21F5F4u;
    // 0x21f5f4: 0x0  nop
    ctx->pc = 0x21f5f4u;
    // NOP
label_21f5f8:
    // 0x21f5f8: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x21f5f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x21f5fc: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x21f5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x21f600: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x21f600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x21f604: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x21f604u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x21f608: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x21f608u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x21f60c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21f60cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21f610: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x21f610u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x21f614: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x21f614u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x21f618: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21f618u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21f61c: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x21F61Cu;
    {
        const bool branch_taken_0x21f61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F61Cu;
            // 0x21f620: 0xacc8000c  sw          $t0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f61c) {
            ctx->pc = 0x21F878u;
            goto label_21f878;
        }
    }
    ctx->pc = 0x21F624u;
    // 0x21f624: 0x0  nop
    ctx->pc = 0x21f624u;
    // NOP
label_21f628:
    // 0x21f628: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x21f628u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x21f62c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x21f62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x21f630: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x21f630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x21f634: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x21f634u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x21f638: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x21f638u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x21f63c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21f63cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21f640: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x21f640u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x21f644: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x21f644u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x21f648: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x21f648u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x21f64c: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x21F64Cu;
    {
        const bool branch_taken_0x21f64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F64Cu;
            // 0x21f650: 0xacc8000c  sw          $t0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f64c) {
            ctx->pc = 0x21F878u;
            goto label_21f878;
        }
    }
    ctx->pc = 0x21F654u;
    // 0x21f654: 0x0  nop
    ctx->pc = 0x21f654u;
    // NOP
label_21f658:
    // 0x21f658: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x21f658u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x21f65c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x21f65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x21f660: 0x25080050  addiu       $t0, $t0, 0x50
    ctx->pc = 0x21f660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
    // 0x21f664: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x21f664u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x21f668: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x21f668u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x21f66c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21f66cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21f670: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x21f670u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x21f674: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x21f674u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x21f678: 0x25080003  addiu       $t0, $t0, 0x3
    ctx->pc = 0x21f678u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x21f67c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x21F67Cu;
    {
        const bool branch_taken_0x21f67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F67Cu;
            // 0x21f680: 0xacc8000c  sw          $t0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f67c) {
            ctx->pc = 0x21F878u;
            goto label_21f878;
        }
    }
    ctx->pc = 0x21F684u;
    // 0x21f684: 0x0  nop
    ctx->pc = 0x21f684u;
    // NOP
label_21f688:
    // 0x21f688: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x21f688u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x21f68c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x21f68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x21f690: 0x25080060  addiu       $t0, $t0, 0x60
    ctx->pc = 0x21f690u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
    // 0x21f694: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x21f694u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x21f698: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x21f698u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x21f69c: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x21f69cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x21f6a0: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x21f6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x21f6a4: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x21f6a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x21f6a8: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x21f6a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x21f6ac: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x21F6ACu;
    {
        const bool branch_taken_0x21f6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F6ACu;
            // 0x21f6b0: 0xacc8000c  sw          $t0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f6ac) {
            ctx->pc = 0x21F878u;
            goto label_21f878;
        }
    }
    ctx->pc = 0x21F6B4u;
    // 0x21f6b4: 0x0  nop
    ctx->pc = 0x21f6b4u;
    // NOP
label_21f6b8:
    // 0x21f6b8: 0x908a0003  lbu         $t2, 0x3($a0)
    ctx->pc = 0x21f6b8u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x21f6bc: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x21f6bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x21f6c0: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x21f6c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x21f6c4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x21f6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x21f6c8: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x21f6c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x21f6cc: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x21f6ccu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x21f6d0: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x21f6d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x21f6d4: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x21f6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x21f6d8: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x21f6d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x21f6dc: 0x10a4021  addu        $t0, $t0, $t2
    ctx->pc = 0x21f6dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x21f6e0: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x21f6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x21f6e4: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x21f6e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x21f6e8: 0x10a4021  addu        $t0, $t0, $t2
    ctx->pc = 0x21f6e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x21f6ec: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x21F6ECu;
    {
        const bool branch_taken_0x21f6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F6ECu;
            // 0x21f6f0: 0xacc8000c  sw          $t0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f6ec) {
            ctx->pc = 0x21F878u;
            goto label_21f878;
        }
    }
    ctx->pc = 0x21F6F4u;
    // 0x21f6f4: 0x0  nop
    ctx->pc = 0x21f6f4u;
    // NOP
label_21f6f8:
    // 0x21f6f8: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x21f6f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x21f6fc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x21f6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x21f700: 0x25080030  addiu       $t0, $t0, 0x30
    ctx->pc = 0x21f700u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x21f704: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x21f704u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x21f708: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x21f708u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x21f70c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21f70cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21f710: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x21f710u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x21f714: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x21f714u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x21f718: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21f718u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21f71c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x21F71Cu;
    {
        const bool branch_taken_0x21f71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F71Cu;
            // 0x21f720: 0xacc8000c  sw          $t0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f71c) {
            ctx->pc = 0x21F878u;
            goto label_21f878;
        }
    }
    ctx->pc = 0x21F724u;
    // 0x21f724: 0x0  nop
    ctx->pc = 0x21f724u;
    // NOP
label_21f728:
    // 0x21f728: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x21f728u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x21f72c: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x21f72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x21f730: 0x25080030  addiu       $t0, $t0, 0x30
    ctx->pc = 0x21f730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x21f734: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x21f734u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x21f738: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x21f738u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x21f73c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21f73cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21f740: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x21f740u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x21f744: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x21f744u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x21f748: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21f748u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21f74c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x21F74Cu;
    {
        const bool branch_taken_0x21f74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F74Cu;
            // 0x21f750: 0xacc8000c  sw          $t0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f74c) {
            ctx->pc = 0x21F878u;
            goto label_21f878;
        }
    }
    ctx->pc = 0x21F754u;
    // 0x21f754: 0x0  nop
    ctx->pc = 0x21f754u;
    // NOP
label_21f758:
    // 0x21f758: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x21f758u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x21f75c: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x21f75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x21f760: 0x25080030  addiu       $t0, $t0, 0x30
    ctx->pc = 0x21f760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x21f764: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x21f764u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x21f768: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x21f768u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x21f76c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21f76cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21f770: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x21f770u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x21f774: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x21f774u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x21f778: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21f778u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21f77c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x21F77Cu;
    {
        const bool branch_taken_0x21f77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F77Cu;
            // 0x21f780: 0xacc8000c  sw          $t0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f77c) {
            ctx->pc = 0x21F878u;
            goto label_21f878;
        }
    }
    ctx->pc = 0x21F784u;
    // 0x21f784: 0x0  nop
    ctx->pc = 0x21f784u;
    // NOP
label_21f788:
    // 0x21f788: 0x908b0004  lbu         $t3, 0x4($a0)
    ctx->pc = 0x21f788u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21f78c: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x21f78cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x21f790: 0xb5040  sll         $t2, $t3, 1
    ctx->pc = 0x21f790u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x21f794: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x21f794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x21f798: 0x14b4821  addu        $t1, $t2, $t3
    ctx->pc = 0x21f798u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x21f79c: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x21f79cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x21f7a0: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x21f7a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x21f7a4: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x21f7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x21f7a8: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x21f7a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x21f7ac: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x21f7acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x21f7b0: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x21f7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x21f7b4: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x21f7b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x21f7b8: 0x10a4021  addu        $t0, $t0, $t2
    ctx->pc = 0x21f7b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x21f7bc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x21F7BCu;
    {
        const bool branch_taken_0x21f7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F7BCu;
            // 0x21f7c0: 0xacc8000c  sw          $t0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f7bc) {
            ctx->pc = 0x21F878u;
            goto label_21f878;
        }
    }
    ctx->pc = 0x21F7C4u;
    // 0x21f7c4: 0x0  nop
    ctx->pc = 0x21f7c4u;
    // NOP
label_21f7c8:
    // 0x21f7c8: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x21f7c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x21f7cc: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x21f7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x21f7d0: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x21f7d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x21f7d4: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x21f7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x21f7d8: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x21f7d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x21f7dc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21f7dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21f7e0: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x21f7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x21f7e4: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x21f7e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x21f7e8: 0x25080003  addiu       $t0, $t0, 0x3
    ctx->pc = 0x21f7e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x21f7ec: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x21F7ECu;
    {
        const bool branch_taken_0x21f7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F7ECu;
            // 0x21f7f0: 0xacc8000c  sw          $t0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f7ec) {
            ctx->pc = 0x21F878u;
            goto label_21f878;
        }
    }
    ctx->pc = 0x21F7F4u;
    // 0x21f7f4: 0x0  nop
    ctx->pc = 0x21f7f4u;
    // NOP
label_21f7f8:
    // 0x21f7f8: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x21f7f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x21f7fc: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x21f7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x21f800: 0x250800c0  addiu       $t0, $t0, 0xC0
    ctx->pc = 0x21f800u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 192));
    // 0x21f804: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x21f804u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x21f808: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x21f808u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x21f80c: 0x25080003  addiu       $t0, $t0, 0x3
    ctx->pc = 0x21f80cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x21f810: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x21f810u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x21f814: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x21f814u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x21f818: 0x25080009  addiu       $t0, $t0, 0x9
    ctx->pc = 0x21f818u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9));
    // 0x21f81c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x21F81Cu;
    {
        const bool branch_taken_0x21f81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F81Cu;
            // 0x21f820: 0xacc8000c  sw          $t0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f81c) {
            ctx->pc = 0x21F878u;
            goto label_21f878;
        }
    }
    ctx->pc = 0x21F824u;
    // 0x21f824: 0x0  nop
    ctx->pc = 0x21f824u;
    // NOP
label_21f828:
    // 0x21f828: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x21f828u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x21f82c: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x21f82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x21f830: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x21f830u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x21f834: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x21f834u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x21f838: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x21f838u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x21f83c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21f83cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21f840: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x21f840u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x21f844: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x21f844u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x21f848: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21f848u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21f84c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21F84Cu;
    {
        const bool branch_taken_0x21f84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F84Cu;
            // 0x21f850: 0xacc8000c  sw          $t0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f84c) {
            ctx->pc = 0x21F878u;
            goto label_21f878;
        }
    }
    ctx->pc = 0x21F854u;
    // 0x21f854: 0x0  nop
    ctx->pc = 0x21f854u;
    // NOP
label_21f858:
    // 0x21f858: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x21F858u;
    {
        const bool branch_taken_0x21f858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F858u;
            // 0x21f85c: 0x24840090  addiu       $a0, $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f858) {
            ctx->pc = 0x21F878u;
            goto label_21f878;
        }
    }
    ctx->pc = 0x21F860u;
label_21f860:
    // 0x21f860: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21F860u;
    {
        const bool branch_taken_0x21f860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F860u;
            // 0x21f864: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f860) {
            ctx->pc = 0x21F878u;
            goto label_21f878;
        }
    }
    ctx->pc = 0x21F868u;
label_21f868:
    // 0x21f868: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21F868u;
    {
        const bool branch_taken_0x21f868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F868u;
            // 0x21f86c: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f868) {
            ctx->pc = 0x21F878u;
            goto label_21f878;
        }
    }
    ctx->pc = 0x21F870u;
label_21f870:
    // 0x21f870: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x21f870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f874: 0x0  nop
    ctx->pc = 0x21f874u;
    // NOP
label_21f878:
    // 0x21f878: 0x87402b  sltu        $t0, $a0, $a3
    ctx->pc = 0x21f878u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x21f87c: 0x5500ff21  bnel        $t0, $zero, . + 4 + (-0xDF << 2)
    ctx->pc = 0x21F87Cu;
    {
        const bool branch_taken_0x21f87c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f87c) {
            ctx->pc = 0x21F880u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21F87Cu;
            // 0x21f880: 0x94880000  lhu         $t0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21F504u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21f504;
        }
    }
    ctx->pc = 0x21F884u;
    // 0x21f884: 0x0  nop
    ctx->pc = 0x21f884u;
    // NOP
label_21f888:
    // 0x21f888: 0x3e00008  jr          $ra
    ctx->pc = 0x21F888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F890u;
}
