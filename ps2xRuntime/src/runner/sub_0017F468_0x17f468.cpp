#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017F468
// Address: 0x17f468 - 0x17f608
void sub_0017F468_0x17f468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F468_0x17f468");
#endif

    switch (ctx->pc) {
        case 0x17f4d0u: goto label_17f4d0;
        case 0x17f570u: goto label_17f570;
        default: break;
    }

    ctx->pc = 0x17f468u;

    // 0x17f468: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17f468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17f46c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x17f46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17f470: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17f470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f474: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x17f474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x17f478: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17f478u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f47c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x17f47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x17f480: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x17f480u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f484: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x17f484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x17f488: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x17f488u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f48c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x17f48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x17f490: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x17f490u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f494: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17f494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17f498: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17f498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17f49c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x17f49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x17f4a0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x17f4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x17f4a4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x17f4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x17f4a8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x17f4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x17f4ac: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x17f4acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17f4b0: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x17F4B0u;
    {
        const bool branch_taken_0x17f4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F4B0u;
            // 0x17f4b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4b0) {
            ctx->pc = 0x17F5A8u;
            goto label_17f5a8;
        }
    }
    ctx->pc = 0x17F4B8u;
    // 0x17f4b8: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x17f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x17f4bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17f4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f4c0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x17f4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x17f4c4: 0x2417000a  addiu       $s7, $zero, 0xA
    ctx->pc = 0x17f4c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x17f4c8: 0x2416000d  addiu       $s6, $zero, 0xD
    ctx->pc = 0x17f4c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x17f4cc: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x17f4ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_17f4d0:
    // 0x17f4d0: 0x2406005c  addiu       $a2, $zero, 0x5C
    ctx->pc = 0x17f4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x17f4d4: 0x14460004  bne         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F4D4u;
    {
        const bool branch_taken_0x17f4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x17F4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F4D4u;
            // 0x17f4d8: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4d4) {
            ctx->pc = 0x17F4E8u;
            goto label_17f4e8;
        }
    }
    ctx->pc = 0x17F4DCu;
    // 0x17f4dc: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x17f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x17f4e0: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x17f4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x17f4e4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x17f4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_17f4e8:
    // 0x17f4e8: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x17f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x17f4ec: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x17f4ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x17f4f0: 0x50570006  beql        $v0, $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x17F4F0u;
    {
        const bool branch_taken_0x17f4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x17f4f0) {
            ctx->pc = 0x17F4F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17F4F0u;
            // 0x17f4f4: 0x80820001  lb          $v0, 0x1($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17F50Cu;
            goto label_17f50c;
        }
    }
    ctx->pc = 0x17F4F8u;
    // 0x17f4f8: 0x50560004  beql        $v0, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F4F8u;
    {
        const bool branch_taken_0x17f4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x17f4f8) {
            ctx->pc = 0x17F4FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17F4F8u;
            // 0x17f4fc: 0x80820001  lb          $v0, 0x1($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17F50Cu;
            goto label_17f50c;
        }
    }
    ctx->pc = 0x17F500u;
    // 0x17f500: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x17F500u;
    {
        const bool branch_taken_0x17f500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F500u;
            // 0x17f504: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f500) {
            ctx->pc = 0x17F590u;
            goto label_17f590;
        }
    }
    ctx->pc = 0x17F508u;
    // 0x17f508: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x17f508u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_17f50c:
    // 0x17f50c: 0x50570006  beql        $v0, $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x17F50Cu;
    {
        const bool branch_taken_0x17f50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x17f50c) {
            ctx->pc = 0x17F510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17F50Cu;
            // 0x17f510: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17F528u;
            goto label_17f528;
        }
    }
    ctx->pc = 0x17F514u;
    // 0x17f514: 0x50560004  beql        $v0, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F514u;
    {
        const bool branch_taken_0x17f514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x17f514) {
            ctx->pc = 0x17F518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17F514u;
            // 0x17f518: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17F528u;
            goto label_17f528;
        }
    }
    ctx->pc = 0x17F51Cu;
    // 0x17f51c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F51Cu;
    {
        const bool branch_taken_0x17f51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F51Cu;
            // 0x17f520: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f51c) {
            ctx->pc = 0x17F530u;
            goto label_17f530;
        }
    }
    ctx->pc = 0x17F524u;
    // 0x17f524: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17f524u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_17f528:
    // 0x17f528: 0x2722021  addu        $a0, $s3, $s2
    ctx->pc = 0x17f528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x17f52c: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x17f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_17f530:
    // 0x17f530: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x17f530u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f534: 0x10770003  beq         $v1, $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F534u;
    {
        const bool branch_taken_0x17f534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        ctx->pc = 0x17F538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F534u;
            // 0x17f538: 0x2458823  subu        $s1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f534) {
            ctx->pc = 0x17F544u;
            goto label_17f544;
        }
    }
    ctx->pc = 0x17F53Cu;
    // 0x17f53c: 0x54760003  bnel        $v1, $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F53Cu;
    {
        const bool branch_taken_0x17f53c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        if (branch_taken_0x17f53c) {
            ctx->pc = 0x17F540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17F53Cu;
            // 0x17f540: 0x3d41018  mult        $v0, $fp, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x17F54Cu;
            goto label_17f54c;
        }
    }
    ctx->pc = 0x17F544u;
label_17f544:
    // 0x17f544: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x17f544u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x17f548: 0x3d41018  mult        $v0, $fp, $s4
    ctx->pc = 0x17f548u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_17f54c:
    // 0x17f54c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x17f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x17f550: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17f550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f554: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x17f554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x17f558: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x17f558u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x17f55c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17f55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f560: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x17f560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17f564: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x17f564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17f568: 0xc04a508  jal         func_129420
    ctx->pc = 0x17F568u;
    SET_GPR_U32(ctx, 31, 0x17F570u);
    ctx->pc = 0x17F56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F568u;
            // 0x17f56c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F570u; }
        if (ctx->pc != 0x17F570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F570u; }
        if (ctx->pc != 0x17F570u) { return; }
    }
    ctx->pc = 0x17F570u;
label_17f570:
    // 0x17f570: 0x2113021  addu        $a2, $s0, $s1
    ctx->pc = 0x17f570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x17f574: 0x80c2ffff  lb          $v0, -0x1($a2)
    ctx->pc = 0x17f574u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x17f578: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17F578u;
    {
        const bool branch_taken_0x17f578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f578) {
            ctx->pc = 0x17F57Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17F578u;
            // 0x17f57c: 0xa0c00000  sb          $zero, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17F580u;
            goto label_17f580;
        }
    }
    ctx->pc = 0x17F580u;
label_17f580:
    // 0x17f580: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x17f580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17f584: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x17f584u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x17f588: 0x12950007  beq         $s4, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x17F588u;
    {
        const bool branch_taken_0x17f588 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 21));
        ctx->pc = 0x17F58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F588u;
            // 0x17f58c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f588) {
            ctx->pc = 0x17F5A8u;
            goto label_17f5a8;
        }
    }
    ctx->pc = 0x17F590u;
label_17f590:
    // 0x17f590: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x17f590u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f594: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x17f594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x17f598: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17f598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f59c: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x17f59cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17f5a0: 0x5460ffcb  bnel        $v1, $zero, . + 4 + (-0x35 << 2)
    ctx->pc = 0x17F5A0u;
    {
        const bool branch_taken_0x17f5a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f5a0) {
            ctx->pc = 0x17F5A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17F5A0u;
            // 0x17f5a4: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17F4D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17f4d0;
        }
    }
    ctx->pc = 0x17F5A8u;
label_17f5a8:
    // 0x17f5a8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17f5ac: 0x24426b00  addiu       $v0, $v0, 0x6B00
    ctx->pc = 0x17f5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27392));
    // 0x17f5b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f5b4: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x17F5B4u;
    {
        const bool branch_taken_0x17f5b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f5b4) {
            ctx->pc = 0x17F5B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17F5B4u;
            // 0x17f5b8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17F5D4u;
            goto label_17f5d4;
        }
    }
    ctx->pc = 0x17F5BCu;
    // 0x17f5bc: 0xac5e000c  sw          $fp, 0xC($v0)
    ctx->pc = 0x17f5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 30));
    // 0x17f5c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f5c4: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x17f5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x17f5c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17f5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17f5cc: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x17f5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x17f5d0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x17f5d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17f5d4:
    // 0x17f5d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17f5d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f5d8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x17f5d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17f5dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x17f5dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f5e0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x17f5e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17f5e4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x17f5e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17f5e8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x17f5e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17f5ec: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x17f5ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17f5f0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x17f5f0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17f5f4: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x17f5f4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17f5f8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x17f5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17f5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x17F5FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F5FCu;
            // 0x17f600: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17F604u;
    // 0x17f604: 0x0  nop
    ctx->pc = 0x17f604u;
    // NOP
}
