#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018F3D0
// Address: 0x18f3d0 - 0x18faa8
void sub_0018F3D0_0x18f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F3D0_0x18f3d0");
#endif

    switch (ctx->pc) {
        case 0x18f940u: goto label_18f940;
        default: break;
    }

    ctx->pc = 0x18f3d0u;

    // 0x18f3d0: 0x248b0180  addiu       $t3, $a0, 0x180
    ctx->pc = 0x18f3d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x18f3d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x18f3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18f3d8: 0x8d620440  lw          $v0, 0x440($t3)
    ctx->pc = 0x18f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1088)));
    // 0x18f3dc: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x18f3dcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f3e0: 0x8d640308  lw          $a0, 0x308($t3)
    ctx->pc = 0x18f3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 776)));
    // 0x18f3e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18f3e8: 0xad630420  sw          $v1, 0x420($t3)
    ctx->pc = 0x18f3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1056), GPR_U32(ctx, 3));
    // 0x18f3ec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F3ECu;
    {
        const bool branch_taken_0x18f3ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F3ECu;
            // 0x18f3f0: 0xad620440  sw          $v0, 0x440($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 1088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f3ec) {
            ctx->pc = 0x18F400u;
            goto label_18f400;
        }
    }
    ctx->pc = 0x18F3F4u;
    // 0x18f3f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18f3f8: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F3F8u;
    {
        const bool branch_taken_0x18f3f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x18f3f8) {
            ctx->pc = 0x18F3FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18F3F8u;
            // 0x18f3fc: 0x8d620494  lw          $v0, 0x494($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18F410u;
            goto label_18f410;
        }
    }
    ctx->pc = 0x18F400u;
label_18f400:
    // 0x18f400: 0x8d62030c  lw          $v0, 0x30C($t3)
    ctx->pc = 0x18f400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 780)));
    // 0x18f404: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F404u;
    {
        const bool branch_taken_0x18f404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F404u;
            // 0x18f408: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f404) {
            ctx->pc = 0x18F41Cu;
            goto label_18f41c;
        }
    }
    ctx->pc = 0x18F40Cu;
    // 0x18f40c: 0x8d620494  lw          $v0, 0x494($t3)
    ctx->pc = 0x18f40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1172)));
label_18f410:
    // 0x18f410: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18f410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18f414: 0xad620494  sw          $v0, 0x494($t3)
    ctx->pc = 0x18f414u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1172), GPR_U32(ctx, 2));
    // 0x18f418: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x18f418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_18f41c:
    // 0x18f41c: 0x1824024  and         $t0, $t4, $v0
    ctx->pc = 0x18f41cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x18f420: 0x1881823  subu        $v1, $t4, $t0
    ctx->pc = 0x18f420u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x18f424: 0x81090000  lb          $t1, 0x0($t0)
    ctx->pc = 0x18f424u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f428: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f42c: 0x350c0  sll         $t2, $v1, 3
    ctx->pc = 0x18f42cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18f430: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x18f430u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f434: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f434u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f438: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x18f438u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f43c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f43cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f440: 0x91060000  lbu         $a2, 0x0($t0)
    ctx->pc = 0x18f440u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f444: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f444u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f448: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x18f448u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f44c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f44cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f450: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f450u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f454: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f454u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f458: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x18f458u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x18f45c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f45cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f460: 0x1244825  or          $t1, $t1, $a0
    ctx->pc = 0x18f460u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x18f464: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18f464u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18f468: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x18f468u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f46c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f46cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f470: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x18f470u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x18f474: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f474u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f478: 0x1254825  or          $t1, $t1, $a1
    ctx->pc = 0x18f478u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x18f47c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f47cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f480: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18f480u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18f484: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x18f484u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x18f488: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f488u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f48c: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x18f48cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x18f490: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f494: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18f494u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18f498: 0x11400007  beqz        $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x18F498u;
    {
        const bool branch_taken_0x18f498 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F498u;
            // 0x18f49c: 0x1494804  sllv        $t1, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 10) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f498) {
            ctx->pc = 0x18F4B8u;
            goto label_18f4b8;
        }
    }
    ctx->pc = 0x18F4A0u;
    // 0x18f4a0: 0xa1023  negu        $v0, $t2
    ctx->pc = 0x18f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
    // 0x18f4a4: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18f4a8: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x18f4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x18f4ac: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x18f4acu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x18f4b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18F4B0u;
    {
        const bool branch_taken_0x18f4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F4B0u;
            // 0x18f4b4: 0xad6200d8  sw          $v0, 0xD8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f4b0) {
            ctx->pc = 0x18F4C0u;
            goto label_18f4c0;
        }
    }
    ctx->pc = 0x18F4B8u;
label_18f4b8:
    // 0x18f4b8: 0xad6900d8  sw          $t1, 0xD8($t3)
    ctx->pc = 0x18f4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 216), GPR_U32(ctx, 9));
    // 0x18f4bc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x18f4bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_18f4c0:
    // 0x18f4c0: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x18f4c0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f4c4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f4c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f4c8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f4c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f4cc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f4ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f4d0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f4d4: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x18f4d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f4d8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18f4d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18f4dc: 0x29420016  slti        $v0, $t2, 0x16
    ctx->pc = 0x18f4dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x18f4e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f4e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f4e4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f4e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f4e8: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x18f4e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f4ec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f4ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f4f0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18f4f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18f4f4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f4f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f4f8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18F4F8u;
    {
        const bool branch_taken_0x18f4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F4F8u;
            // 0x18f4fc: 0xe43825  or          $a3, $a3, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f4f8) {
            ctx->pc = 0x18F570u;
            goto label_18f570;
        }
    }
    ctx->pc = 0x18F500u;
    // 0x18f500: 0x254affea  addiu       $t2, $t2, -0x16
    ctx->pc = 0x18f500u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967274));
    // 0x18f504: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x18F504u;
    {
        const bool branch_taken_0x18f504 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F504u;
            // 0x18f508: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f504) {
            ctx->pc = 0x18F528u;
            goto label_18f528;
        }
    }
    ctx->pc = 0x18F50Cu;
    // 0x18f50c: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x18f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x18f510: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18f510u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18f514: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x18f514u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x18f518: 0x91d82  srl         $v1, $t1, 22
    ctx->pc = 0x18f518u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 22));
    // 0x18f51c: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x18f51cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x18f520: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F520u;
    {
        const bool branch_taken_0x18f520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F520u;
            // 0x18f524: 0xad6300dc  sw          $v1, 0xDC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f520) {
            ctx->pc = 0x18F534u;
            goto label_18f534;
        }
    }
    ctx->pc = 0x18F528u;
label_18f528:
    // 0x18f528: 0x91582  srl         $v0, $t1, 22
    ctx->pc = 0x18f528u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 22));
    // 0x18f52c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x18f52cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f530: 0xad6200dc  sw          $v0, 0xDC($t3)
    ctx->pc = 0x18f530u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 220), GPR_U32(ctx, 2));
label_18f534:
    // 0x18f534: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x18f534u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f538: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f53c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f53cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f540: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f540u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f544: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f544u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f548: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x18f548u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f54c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18f54cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18f550: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f554: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f554u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f558: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f558u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f55c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18f55cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18f560: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f560u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f564: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f564u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f568: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18F568u;
    {
        const bool branch_taken_0x18f568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F568u;
            // 0x18f56c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f568) {
            ctx->pc = 0x18F580u;
            goto label_18f580;
        }
    }
    ctx->pc = 0x18F570u;
label_18f570:
    // 0x18f570: 0x91582  srl         $v0, $t1, 22
    ctx->pc = 0x18f570u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 22));
    // 0x18f574: 0x94a80  sll         $t1, $t1, 10
    ctx->pc = 0x18f574u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 10));
    // 0x18f578: 0xad6200dc  sw          $v0, 0xDC($t3)
    ctx->pc = 0x18f578u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 220), GPR_U32(ctx, 2));
    // 0x18f57c: 0x254a000a  addiu       $t2, $t2, 0xA
    ctx->pc = 0x18f57cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 10));
label_18f580:
    // 0x18f580: 0x2942001d  slti        $v0, $t2, 0x1D
    ctx->pc = 0x18f580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x18f584: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18F584u;
    {
        const bool branch_taken_0x18f584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F584u;
            // 0x18f588: 0x91742  srl         $v0, $t1, 29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f584) {
            ctx->pc = 0x18F600u;
            goto label_18f600;
        }
    }
    ctx->pc = 0x18F58Cu;
    // 0x18f58c: 0x254affe3  addiu       $t2, $t2, -0x1D
    ctx->pc = 0x18f58cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967267));
    // 0x18f590: 0x11400009  beqz        $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x18F590u;
    {
        const bool branch_taken_0x18f590 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F590u;
            // 0x18f594: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f590) {
            ctx->pc = 0x18F5B8u;
            goto label_18f5b8;
        }
    }
    ctx->pc = 0x18F598u;
    // 0x18f598: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x18f598u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x18f59c: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18f5a0: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x18f5a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x18f5a4: 0x91f42  srl         $v1, $t1, 29
    ctx->pc = 0x18f5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
    // 0x18f5a8: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x18f5a8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x18f5ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18F5ACu;
    {
        const bool branch_taken_0x18f5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F5ACu;
            // 0x18f5b0: 0xad6300e0  sw          $v1, 0xE0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f5ac) {
            ctx->pc = 0x18F5C4u;
            goto label_18f5c4;
        }
    }
    ctx->pc = 0x18F5B4u;
    // 0x18f5b4: 0x0  nop
    ctx->pc = 0x18f5b4u;
    // NOP
label_18f5b8:
    // 0x18f5b8: 0x91742  srl         $v0, $t1, 29
    ctx->pc = 0x18f5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
    // 0x18f5bc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x18f5bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f5c0: 0xad6200e0  sw          $v0, 0xE0($t3)
    ctx->pc = 0x18f5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 224), GPR_U32(ctx, 2));
label_18f5c4:
    // 0x18f5c4: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x18f5c4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f5c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f5c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f5cc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f5ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f5d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f5d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f5d4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f5d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f5d8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x18f5d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f5dc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18f5dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18f5e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f5e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f5e4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f5e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f5e8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f5e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f5ec: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18f5ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18f5f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f5f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f5f4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f5f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F5F8u;
    {
        const bool branch_taken_0x18f5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F5F8u;
            // 0x18f5fc: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f5f8) {
            ctx->pc = 0x18F60Cu;
            goto label_18f60c;
        }
    }
    ctx->pc = 0x18F600u;
label_18f600:
    // 0x18f600: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x18f600u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x18f604: 0xad6200e0  sw          $v0, 0xE0($t3)
    ctx->pc = 0x18f604u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 224), GPR_U32(ctx, 2));
    // 0x18f608: 0x254a0003  addiu       $t2, $t2, 0x3
    ctx->pc = 0x18f608u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
label_18f60c:
    // 0x18f60c: 0x29420010  slti        $v0, $t2, 0x10
    ctx->pc = 0x18f60cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18f610: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18F610u;
    {
        const bool branch_taken_0x18f610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F610u;
            // 0x18f614: 0x91402  srl         $v0, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f610) {
            ctx->pc = 0x18F688u;
            goto label_18f688;
        }
    }
    ctx->pc = 0x18F618u;
    // 0x18f618: 0x254afff0  addiu       $t2, $t2, -0x10
    ctx->pc = 0x18f618u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967280));
    // 0x18f61c: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x18F61Cu;
    {
        const bool branch_taken_0x18f61c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F61Cu;
            // 0x18f620: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f61c) {
            ctx->pc = 0x18F640u;
            goto label_18f640;
        }
    }
    ctx->pc = 0x18F624u;
    // 0x18f624: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x18f624u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x18f628: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18f628u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18f62c: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x18f62cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x18f630: 0x91c02  srl         $v1, $t1, 16
    ctx->pc = 0x18f630u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x18f634: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x18f634u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x18f638: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F638u;
    {
        const bool branch_taken_0x18f638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F638u;
            // 0x18f63c: 0xad6300e4  sw          $v1, 0xE4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f638) {
            ctx->pc = 0x18F64Cu;
            goto label_18f64c;
        }
    }
    ctx->pc = 0x18F640u;
label_18f640:
    // 0x18f640: 0x91402  srl         $v0, $t1, 16
    ctx->pc = 0x18f640u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x18f644: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x18f644u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f648: 0xad6200e4  sw          $v0, 0xE4($t3)
    ctx->pc = 0x18f648u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 228), GPR_U32(ctx, 2));
label_18f64c:
    // 0x18f64c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x18f64cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f650: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f650u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f654: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f654u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f658: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f658u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f65c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f65cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f660: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x18f660u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f664: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18f664u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18f668: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f668u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f66c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f66cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f670: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f670u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f674: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18f674u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18f678: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f678u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f67c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f67cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f680: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F680u;
    {
        const bool branch_taken_0x18f680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F680u;
            // 0x18f684: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f680) {
            ctx->pc = 0x18F694u;
            goto label_18f694;
        }
    }
    ctx->pc = 0x18F688u;
label_18f688:
    // 0x18f688: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x18f688u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x18f68c: 0xad6200e4  sw          $v0, 0xE4($t3)
    ctx->pc = 0x18f68cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 228), GPR_U32(ctx, 2));
    // 0x18f690: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x18f690u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_18f694:
    // 0x18f694: 0x8d6600e0  lw          $a2, 0xE0($t3)
    ctx->pc = 0x18f694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 224)));
    // 0x18f698: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x18f698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x18f69c: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x18f69cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x18f6a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F6A0u;
    {
        const bool branch_taken_0x18f6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F6A0u;
            // 0x18f6a4: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f6a0) {
            ctx->pc = 0x18F6B8u;
            goto label_18f6b8;
        }
    }
    ctx->pc = 0x18F6A8u;
    // 0x18f6a8: 0x8d620494  lw          $v0, 0x494($t3)
    ctx->pc = 0x18f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1172)));
    // 0x18f6ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18f6b0: 0xad620494  sw          $v0, 0x494($t3)
    ctx->pc = 0x18f6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1172), GPR_U32(ctx, 2));
    // 0x18f6b4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x18f6b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_18f6b8:
    // 0x18f6b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18F6B8u;
    {
        const bool branch_taken_0x18f6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F6B8u;
            // 0x18f6bc: 0x8d6204a4  lw          $v0, 0x4A4($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f6b8) {
            ctx->pc = 0x18F6D8u;
            goto label_18f6d8;
        }
    }
    ctx->pc = 0x18F6C0u;
    // 0x18f6c0: 0xad6004a8  sw          $zero, 0x4A8($t3)
    ctx->pc = 0x18f6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1192), GPR_U32(ctx, 0));
    // 0x18f6c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18f6c8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x18f6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x18f6cc: 0xad6204a4  sw          $v0, 0x4A4($t3)
    ctx->pc = 0x18f6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1188), GPR_U32(ctx, 2));
    // 0x18f6d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18F6D0u;
    {
        const bool branch_taken_0x18f6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F6D0u;
            // 0x18f6d4: 0xad6304ac  sw          $v1, 0x4AC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 1196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f6d0) {
            ctx->pc = 0x18F6F4u;
            goto label_18f6f4;
        }
    }
    ctx->pc = 0x18F6D8u;
label_18f6d8:
    // 0x18f6d8: 0x8d6304a8  lw          $v1, 0x4A8($t3)
    ctx->pc = 0x18f6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1192)));
    // 0x18f6dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18f6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18f6e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18f6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18f6e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x18f6e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18f6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18f6ec: 0xad6304a8  sw          $v1, 0x4A8($t3)
    ctx->pc = 0x18f6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1192), GPR_U32(ctx, 3));
    // 0x18f6f0: 0xad6204ac  sw          $v0, 0x4AC($t3)
    ctx->pc = 0x18f6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1196), GPR_U32(ctx, 2));
label_18f6f4:
    // 0x18f6f4: 0x24c2fffe  addiu       $v0, $a2, -0x2
    ctx->pc = 0x18f6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x18f6f8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x18f6f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x18f6fc: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x18F6FCu;
    {
        const bool branch_taken_0x18f6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F6FCu;
            // 0x18f700: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f6fc) {
            ctx->pc = 0x18F818u;
            goto label_18f818;
        }
    }
    ctx->pc = 0x18F704u;
    // 0x18f704: 0x2942001f  slti        $v0, $t2, 0x1F
    ctx->pc = 0x18f704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18f708: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18F708u;
    {
        const bool branch_taken_0x18f708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F708u;
            // 0x18f70c: 0x917c2  srl         $v0, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f708) {
            ctx->pc = 0x18F780u;
            goto label_18f780;
        }
    }
    ctx->pc = 0x18F710u;
    // 0x18f710: 0x254affe1  addiu       $t2, $t2, -0x1F
    ctx->pc = 0x18f710u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967265));
    // 0x18f714: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x18F714u;
    {
        const bool branch_taken_0x18f714 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F714u;
            // 0x18f718: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f714) {
            ctx->pc = 0x18F738u;
            goto label_18f738;
        }
    }
    ctx->pc = 0x18F71Cu;
    // 0x18f71c: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x18f71cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x18f720: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18f720u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18f724: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x18f724u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x18f728: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x18f728u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x18f72c: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x18f72cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x18f730: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F730u;
    {
        const bool branch_taken_0x18f730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F730u;
            // 0x18f734: 0xad6300e8  sw          $v1, 0xE8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f730) {
            ctx->pc = 0x18F744u;
            goto label_18f744;
        }
    }
    ctx->pc = 0x18F738u;
label_18f738:
    // 0x18f738: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x18f738u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x18f73c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x18f73cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f740: 0xad6200e8  sw          $v0, 0xE8($t3)
    ctx->pc = 0x18f740u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 232), GPR_U32(ctx, 2));
label_18f744:
    // 0x18f744: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x18f744u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f748: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f748u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f74c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f74cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f750: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f750u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f754: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f754u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f758: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x18f758u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f75c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18f75cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18f760: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f764: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f764u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f768: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f768u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f76c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18f76cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18f770: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f774: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f774u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f778: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F778u;
    {
        const bool branch_taken_0x18f778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F778u;
            // 0x18f77c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f778) {
            ctx->pc = 0x18F78Cu;
            goto label_18f78c;
        }
    }
    ctx->pc = 0x18F780u;
label_18f780:
    // 0x18f780: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x18f780u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x18f784: 0xad6200e8  sw          $v0, 0xE8($t3)
    ctx->pc = 0x18f784u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 232), GPR_U32(ctx, 2));
    // 0x18f788: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x18f788u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_18f78c:
    // 0x18f78c: 0x2942001d  slti        $v0, $t2, 0x1D
    ctx->pc = 0x18f78cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x18f790: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18F790u;
    {
        const bool branch_taken_0x18f790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F790u;
            // 0x18f794: 0x91742  srl         $v0, $t1, 29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f790) {
            ctx->pc = 0x18F808u;
            goto label_18f808;
        }
    }
    ctx->pc = 0x18F798u;
    // 0x18f798: 0x254affe3  addiu       $t2, $t2, -0x1D
    ctx->pc = 0x18f798u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967267));
    // 0x18f79c: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x18F79Cu;
    {
        const bool branch_taken_0x18f79c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F79Cu;
            // 0x18f7a0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f79c) {
            ctx->pc = 0x18F7C0u;
            goto label_18f7c0;
        }
    }
    ctx->pc = 0x18F7A4u;
    // 0x18f7a4: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x18f7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x18f7a8: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18f7ac: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x18f7acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x18f7b0: 0x91f42  srl         $v1, $t1, 29
    ctx->pc = 0x18f7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
    // 0x18f7b4: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x18f7b4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x18f7b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F7B8u;
    {
        const bool branch_taken_0x18f7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F7B8u;
            // 0x18f7bc: 0xad6300ec  sw          $v1, 0xEC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 236), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f7b8) {
            ctx->pc = 0x18F7CCu;
            goto label_18f7cc;
        }
    }
    ctx->pc = 0x18F7C0u;
label_18f7c0:
    // 0x18f7c0: 0x91742  srl         $v0, $t1, 29
    ctx->pc = 0x18f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
    // 0x18f7c4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x18f7c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f7c8: 0xad6200ec  sw          $v0, 0xEC($t3)
    ctx->pc = 0x18f7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 236), GPR_U32(ctx, 2));
label_18f7cc:
    // 0x18f7cc: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x18f7ccu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f7d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f7d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f7d4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f7d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f7d8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f7d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f7dc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f7dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f7e0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x18f7e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f7e4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18f7e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18f7e8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f7e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f7ec: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f7ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f7f0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f7f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f7f4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18f7f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18f7f8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f7f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f7fc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f7fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f800: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F800u;
    {
        const bool branch_taken_0x18f800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F800u;
            // 0x18f804: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f800) {
            ctx->pc = 0x18F814u;
            goto label_18f814;
        }
    }
    ctx->pc = 0x18F808u;
label_18f808:
    // 0x18f808: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x18f808u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x18f80c: 0xad6200ec  sw          $v0, 0xEC($t3)
    ctx->pc = 0x18f80cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 236), GPR_U32(ctx, 2));
    // 0x18f810: 0x254a0003  addiu       $t2, $t2, 0x3
    ctx->pc = 0x18f810u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
label_18f814:
    // 0x18f814: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18f814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18f818:
    // 0x18f818: 0x14c20047  bne         $a2, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x18F818u;
    {
        const bool branch_taken_0x18f818 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x18F81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F818u;
            // 0x18f81c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f818) {
            ctx->pc = 0x18F938u;
            goto label_18f938;
        }
    }
    ctx->pc = 0x18F820u;
    // 0x18f820: 0x2942001f  slti        $v0, $t2, 0x1F
    ctx->pc = 0x18f820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18f824: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18F824u;
    {
        const bool branch_taken_0x18f824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F824u;
            // 0x18f828: 0x917c2  srl         $v0, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f824) {
            ctx->pc = 0x18F8A0u;
            goto label_18f8a0;
        }
    }
    ctx->pc = 0x18F82Cu;
    // 0x18f82c: 0x254affe1  addiu       $t2, $t2, -0x1F
    ctx->pc = 0x18f82cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967265));
    // 0x18f830: 0x11400009  beqz        $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x18F830u;
    {
        const bool branch_taken_0x18f830 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F830u;
            // 0x18f834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f830) {
            ctx->pc = 0x18F858u;
            goto label_18f858;
        }
    }
    ctx->pc = 0x18F838u;
    // 0x18f838: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x18f838u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x18f83c: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18f83cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18f840: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x18f840u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x18f844: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x18f844u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x18f848: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x18f848u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x18f84c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18F84Cu;
    {
        const bool branch_taken_0x18f84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F84Cu;
            // 0x18f850: 0xad6300f0  sw          $v1, 0xF0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f84c) {
            ctx->pc = 0x18F864u;
            goto label_18f864;
        }
    }
    ctx->pc = 0x18F854u;
    // 0x18f854: 0x0  nop
    ctx->pc = 0x18f854u;
    // NOP
label_18f858:
    // 0x18f858: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x18f858u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x18f85c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x18f85cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f860: 0xad6200f0  sw          $v0, 0xF0($t3)
    ctx->pc = 0x18f860u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 240), GPR_U32(ctx, 2));
label_18f864:
    // 0x18f864: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x18f864u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f868: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f86c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f86cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f870: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f874: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f874u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f878: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x18f878u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f87c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18f87cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18f880: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f880u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f884: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f884u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f888: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f888u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f88c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18f88cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18f890: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f890u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f894: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f894u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f898: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F898u;
    {
        const bool branch_taken_0x18f898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F898u;
            // 0x18f89c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f898) {
            ctx->pc = 0x18F8ACu;
            goto label_18f8ac;
        }
    }
    ctx->pc = 0x18F8A0u;
label_18f8a0:
    // 0x18f8a0: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x18f8a0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x18f8a4: 0xad6200f0  sw          $v0, 0xF0($t3)
    ctx->pc = 0x18f8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 240), GPR_U32(ctx, 2));
    // 0x18f8a8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x18f8a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_18f8ac:
    // 0x18f8ac: 0x2942001d  slti        $v0, $t2, 0x1D
    ctx->pc = 0x18f8acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x18f8b0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18F8B0u;
    {
        const bool branch_taken_0x18f8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F8B0u;
            // 0x18f8b4: 0x91742  srl         $v0, $t1, 29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f8b0) {
            ctx->pc = 0x18F928u;
            goto label_18f928;
        }
    }
    ctx->pc = 0x18F8B8u;
    // 0x18f8b8: 0x254affe3  addiu       $t2, $t2, -0x1D
    ctx->pc = 0x18f8b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967267));
    // 0x18f8bc: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x18F8BCu;
    {
        const bool branch_taken_0x18f8bc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F8BCu;
            // 0x18f8c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f8bc) {
            ctx->pc = 0x18F8E0u;
            goto label_18f8e0;
        }
    }
    ctx->pc = 0x18F8C4u;
    // 0x18f8c4: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x18f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x18f8c8: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18f8cc: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x18f8ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x18f8d0: 0x91f42  srl         $v1, $t1, 29
    ctx->pc = 0x18f8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
    // 0x18f8d4: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x18f8d4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x18f8d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F8D8u;
    {
        const bool branch_taken_0x18f8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F8D8u;
            // 0x18f8dc: 0xad6300f4  sw          $v1, 0xF4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f8d8) {
            ctx->pc = 0x18F8ECu;
            goto label_18f8ec;
        }
    }
    ctx->pc = 0x18F8E0u;
label_18f8e0:
    // 0x18f8e0: 0x91742  srl         $v0, $t1, 29
    ctx->pc = 0x18f8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
    // 0x18f8e4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x18f8e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f8e8: 0xad6200f4  sw          $v0, 0xF4($t3)
    ctx->pc = 0x18f8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 244), GPR_U32(ctx, 2));
label_18f8ec:
    // 0x18f8ec: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x18f8ecu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f8f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f8f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f8f4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f8f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f8f8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f8f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f8fc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f8fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f900: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x18f900u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f904: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18f904u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18f908: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f908u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f90c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f90cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f910: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f910u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f914: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18f914u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18f918: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f91c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f91cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f920: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F920u;
    {
        const bool branch_taken_0x18f920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F920u;
            // 0x18f924: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f920) {
            ctx->pc = 0x18F934u;
            goto label_18f934;
        }
    }
    ctx->pc = 0x18F928u;
label_18f928:
    // 0x18f928: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x18f928u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x18f92c: 0xad6200f4  sw          $v0, 0xF4($t3)
    ctx->pc = 0x18f92cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 244), GPR_U32(ctx, 2));
    // 0x18f930: 0x254a0003  addiu       $t2, $t2, 0x3
    ctx->pc = 0x18f930u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
label_18f934:
    // 0x18f934: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18f934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18f938:
    // 0x18f938: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x18F938u;
    {
        const bool branch_taken_0x18f938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F938u;
            // 0x18f93c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f938) {
            ctx->pc = 0x18F9C4u;
            goto label_18f9c4;
        }
    }
    ctx->pc = 0x18F940u;
label_18f940:
    // 0x18f940: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18F940u;
    {
        const bool branch_taken_0x18f940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F940u;
            // 0x18f944: 0x91602  srl         $v0, $t1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f940) {
            ctx->pc = 0x18F9B8u;
            goto label_18f9b8;
        }
    }
    ctx->pc = 0x18F948u;
    // 0x18f948: 0x254affe8  addiu       $t2, $t2, -0x18
    ctx->pc = 0x18f948u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967272));
    // 0x18f94c: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x18F94Cu;
    {
        const bool branch_taken_0x18f94c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F94Cu;
            // 0x18f950: 0xaa1023  subu        $v0, $a1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f94c) {
            ctx->pc = 0x18F970u;
            goto label_18f970;
        }
    }
    ctx->pc = 0x18F954u;
    // 0x18f954: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18f954u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18f958: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x18f958u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x18f95c: 0x91e02  srl         $v1, $t1, 24
    ctx->pc = 0x18f95cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x18f960: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x18f960u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x18f964: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18F964u;
    {
        const bool branch_taken_0x18f964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F964u;
            // 0x18f968: 0xad6300fc  sw          $v1, 0xFC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 252), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f964) {
            ctx->pc = 0x18F97Cu;
            goto label_18f97c;
        }
    }
    ctx->pc = 0x18F96Cu;
    // 0x18f96c: 0x0  nop
    ctx->pc = 0x18f96cu;
    // NOP
label_18f970:
    // 0x18f970: 0x91602  srl         $v0, $t1, 24
    ctx->pc = 0x18f970u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x18f974: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x18f974u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f978: 0xad6200fc  sw          $v0, 0xFC($t3)
    ctx->pc = 0x18f978u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 252), GPR_U32(ctx, 2));
label_18f97c:
    // 0x18f97c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x18f97cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f980: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f980u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f984: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f984u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f988: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f98c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f98cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f990: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x18f990u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f994: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18f994u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18f998: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f99c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f99cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f9a0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f9a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f9a4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18f9a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18f9a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f9a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f9ac: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f9acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f9b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F9B0u;
    {
        const bool branch_taken_0x18f9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F9B0u;
            // 0x18f9b4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f9b0) {
            ctx->pc = 0x18F9C4u;
            goto label_18f9c4;
        }
    }
    ctx->pc = 0x18F9B8u;
label_18f9b8:
    // 0x18f9b8: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x18f9b8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x18f9bc: 0xad6200fc  sw          $v0, 0xFC($t3)
    ctx->pc = 0x18f9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 252), GPR_U32(ctx, 2));
    // 0x18f9c0: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x18f9c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_18f9c4:
    // 0x18f9c4: 0x2942001f  slti        $v0, $t2, 0x1F
    ctx->pc = 0x18f9c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18f9c8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18F9C8u;
    {
        const bool branch_taken_0x18f9c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F9C8u;
            // 0x18f9cc: 0x917c2  srl         $v0, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f9c8) {
            ctx->pc = 0x18FA40u;
            goto label_18fa40;
        }
    }
    ctx->pc = 0x18F9D0u;
    // 0x18f9d0: 0x254affe1  addiu       $t2, $t2, -0x1F
    ctx->pc = 0x18f9d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967265));
    // 0x18f9d4: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x18F9D4u;
    {
        const bool branch_taken_0x18f9d4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F9D4u;
            // 0x18f9d8: 0x8a1023  subu        $v0, $a0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f9d4) {
            ctx->pc = 0x18F9F8u;
            goto label_18f9f8;
        }
    }
    ctx->pc = 0x18F9DCu;
    // 0x18f9dc: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18f9e0: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x18f9e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x18f9e4: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x18f9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x18f9e8: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x18f9e8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x18f9ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18F9ECu;
    {
        const bool branch_taken_0x18f9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F9ECu;
            // 0x18f9f0: 0xad6300f8  sw          $v1, 0xF8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 248), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f9ec) {
            ctx->pc = 0x18FA04u;
            goto label_18fa04;
        }
    }
    ctx->pc = 0x18F9F4u;
    // 0x18f9f4: 0x0  nop
    ctx->pc = 0x18f9f4u;
    // NOP
label_18f9f8:
    // 0x18f9f8: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x18f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x18f9fc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x18f9fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fa00: 0xad6200f8  sw          $v0, 0xF8($t3)
    ctx->pc = 0x18fa00u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 248), GPR_U32(ctx, 2));
label_18fa04:
    // 0x18fa04: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x18fa04u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18fa08: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18fa08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18fa0c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18fa0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18fa10: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18fa10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18fa14: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18fa14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18fa18: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x18fa18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18fa1c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18fa1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18fa20: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18fa20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18fa24: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18fa24u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18fa28: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18fa28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18fa2c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18fa2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18fa30: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18fa30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18fa34: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18fa34u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18fa38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18FA38u;
    {
        const bool branch_taken_0x18fa38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FA38u;
            // 0x18fa3c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fa38) {
            ctx->pc = 0x18FA4Cu;
            goto label_18fa4c;
        }
    }
    ctx->pc = 0x18FA40u;
label_18fa40:
    // 0x18fa40: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x18fa40u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x18fa44: 0xad6200f8  sw          $v0, 0xF8($t3)
    ctx->pc = 0x18fa44u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 248), GPR_U32(ctx, 2));
    // 0x18fa48: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x18fa48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_18fa4c:
    // 0x18fa4c: 0x8d6200f8  lw          $v0, 0xF8($t3)
    ctx->pc = 0x18fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 248)));
    // 0x18fa50: 0x5440ffbb  bnel        $v0, $zero, . + 4 + (-0x45 << 2)
    ctx->pc = 0x18FA50u;
    {
        const bool branch_taken_0x18fa50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fa50) {
            ctx->pc = 0x18FA54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18FA50u;
            // 0x18fa54: 0x29420018  slti        $v0, $t2, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x18F940u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18f940;
        }
    }
    ctx->pc = 0x18FA58u;
    // 0x18fa58: 0x10c1823  subu        $v1, $t0, $t4
    ctx->pc = 0x18fa58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x18fa5c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x18fa5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x18fa60: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18fa64: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x18fa64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x18fa68: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x18fa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x18fa6c: 0x24c60444  addiu       $a2, $a2, 0x444
    ctx->pc = 0x18fa6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1092));
    // 0x18fa70: 0x2462ffc7  addiu       $v0, $v1, -0x39
    ctx->pc = 0x18fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967239));
    // 0x18fa74: 0x2463ffce  addiu       $v1, $v1, -0x32
    ctx->pc = 0x18fa74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x18fa78: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x18fa78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18fa7c: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x18fa7cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x18fa80: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x18fa80u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x18fa84: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x18fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18fa88: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x18fa88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18fa8c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18fa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18fa90: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x18fa90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x18fa94: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x18fa94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x18fa98: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x18fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x18fa9c: 0xad63030c  sw          $v1, 0x30C($t3)
    ctx->pc = 0x18fa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 780), GPR_U32(ctx, 3));
    // 0x18faa0: 0x3e00008  jr          $ra
    ctx->pc = 0x18FAA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FAA0u;
            // 0x18faa4: 0xad670308  sw          $a3, 0x308($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 776), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18FAA8u;
}
